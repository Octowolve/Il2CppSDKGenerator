#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class UlongPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "UlongPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(UlongPlugin*, void*))(Il2CppBase() + 0x44BCB54))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(UlongPlugin*, void*, bool))(Il2CppBase() + 0x44BCB58))(this, t, isRelative);
	}
	template <typename T = uint64_t> T ConvertToStartValue(void* t, uint64_t value) {
		return ((T (*)(UlongPlugin*, void*, uint64_t))(Il2CppBase() + 0x44BCC54))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(UlongPlugin*, void*))(Il2CppBase() + 0x44BCC60))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(UlongPlugin*, void*))(Il2CppBase() + 0x44BCC9C))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uint64_t changeValue) {
		return ((T (*)(UlongPlugin*, uintptr_t, float, uint64_t))(Il2CppBase() + 0x44BCCD8))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uint64_t startValue, uint64_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(UlongPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uint64_t, uint64_t, float, bool, uintptr_t))(Il2CppBase() + 0x44BCD14))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
