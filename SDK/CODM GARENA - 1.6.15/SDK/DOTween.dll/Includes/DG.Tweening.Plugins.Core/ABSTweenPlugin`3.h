#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core {

class ABSTweenPlugin3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core", "ABSTweenPlugin`3"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(ABSTweenPlugin3*, void*))(Il2CppBase() + 0x0))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(ABSTweenPlugin3*, void*, bool))(Il2CppBase() + 0x0))(this, t, isRelative);
	}
	template <typename T = uintptr_t> T ConvertToStartValue(void* t, uintptr_t value) {
		return ((T (*)(ABSTweenPlugin3*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(ABSTweenPlugin3*, void*))(Il2CppBase() + 0x0))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(ABSTweenPlugin3*, void*))(Il2CppBase() + 0x0))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uintptr_t changeValue) {
		return ((T (*)(ABSTweenPlugin3*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x0))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uintptr_t startValue, uintptr_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(ABSTweenPlugin3*, uintptr_t, uintptr_t, bool, void*, void*, float, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x0))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
