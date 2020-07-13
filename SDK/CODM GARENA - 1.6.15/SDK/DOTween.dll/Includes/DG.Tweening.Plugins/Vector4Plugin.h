#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class Vector4Plugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "Vector4Plugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(Vector4Plugin*, void*))(Il2CppBase() + 0x44BFC44))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(Vector4Plugin*, void*, bool))(Il2CppBase() + 0x44BFC48))(this, t, isRelative);
	}
	template <typename T = uintptr_t> T ConvertToStartValue(void* t, uintptr_t value) {
		return ((T (*)(Vector4Plugin*, void*, uintptr_t))(Il2CppBase() + 0x44C00D0))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(Vector4Plugin*, void*))(Il2CppBase() + 0x44C00E8))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(Vector4Plugin*, void*))(Il2CppBase() + 0x44C0168))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uintptr_t changeValue) {
		return ((T (*)(Vector4Plugin*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44C02EC))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uintptr_t startValue, uintptr_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(Vector4Plugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x44C032C))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
