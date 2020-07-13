#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class UintPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "UintPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(UintPlugin*, void*))(Il2CppBase() + 0x44BC6F8))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(UintPlugin*, void*, bool))(Il2CppBase() + 0x44BC6FC))(this, t, isRelative);
	}
	template <typename T = uint32_t> T ConvertToStartValue(void* t, uint32_t value) {
		return ((T (*)(UintPlugin*, void*, uint32_t))(Il2CppBase() + 0x44BC7E0))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(UintPlugin*, void*))(Il2CppBase() + 0x44BC7E8))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(UintPlugin*, void*))(Il2CppBase() + 0x44BC814))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uint32_t changeValue) {
		return ((T (*)(UintPlugin*, uintptr_t, float, uint32_t))(Il2CppBase() + 0x44BC858))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uint32_t startValue, uint32_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(UintPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uint32_t, uint32_t, float, bool, uintptr_t))(Il2CppBase() + 0x44BC880))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
