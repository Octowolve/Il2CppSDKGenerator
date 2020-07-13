#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class Vector3Plugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "Vector3Plugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(Vector3Plugin*, void*))(Il2CppBase() + 0x44BEDA8))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(Vector3Plugin*, void*, bool))(Il2CppBase() + 0x44BEDAC))(this, t, isRelative);
	}
	template <typename T = Il2CppVector3> T ConvertToStartValue(void* t, Il2CppVector3 value) {
		return ((T (*)(Vector3Plugin*, void*, Il2CppVector3))(Il2CppBase() + 0x44BF154))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(Vector3Plugin*, void*))(Il2CppBase() + 0x44BF16C))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(Vector3Plugin*, void*))(Il2CppBase() + 0x44BF1E0))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppVector3 changeValue) {
		return ((T (*)(Vector3Plugin*, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x44BF330))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppVector3 startValue, Il2CppVector3 changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(Vector3Plugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppVector3, Il2CppVector3, float, bool, uintptr_t))(Il2CppBase() + 0x44BF370))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
