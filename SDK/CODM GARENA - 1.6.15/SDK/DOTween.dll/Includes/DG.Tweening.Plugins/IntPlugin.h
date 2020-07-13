#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class IntPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "IntPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(IntPlugin*, void*))(Il2CppBase() + 0x44B527C))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(IntPlugin*, void*, bool))(Il2CppBase() + 0x44B5280))(this, t, isRelative);
	}
	template <typename T = int32_t> T ConvertToStartValue(void* t, int32_t value) {
		return ((T (*)(IntPlugin*, void*, int32_t))(Il2CppBase() + 0x44B5364))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(IntPlugin*, void*))(Il2CppBase() + 0x44B536C))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(IntPlugin*, void*))(Il2CppBase() + 0x44B5398))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, int32_t changeValue) {
		return ((T (*)(IntPlugin*, uintptr_t, float, int32_t))(Il2CppBase() + 0x44B53C4))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, int32_t startValue, int32_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(IntPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, int32_t, int32_t, float, bool, uintptr_t))(Il2CppBase() + 0x44B53E8))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
