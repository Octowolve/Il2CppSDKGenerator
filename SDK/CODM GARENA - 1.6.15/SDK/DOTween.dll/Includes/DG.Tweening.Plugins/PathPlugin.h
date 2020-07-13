#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class PathPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "PathPlugin"));
	}

	template <typename T = float> static T& MinLookAhead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset(void* t) {
		return ((T (*)(PathPlugin*, void*))(Il2CppBase() + 0x44B61EC))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(PathPlugin*, void*, bool))(Il2CppBase() + 0x44B622C))(this, t, isRelative);
	}
	template <typename T = void*> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x44B6230))(0);
	}
	template <typename T = uintptr_t> T ConvertToStartValue(void* t, Il2CppVector3 value) {
		return ((T (*)(PathPlugin*, void*, Il2CppVector3))(Il2CppBase() + 0x44B62B0))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(PathPlugin*, void*))(Il2CppBase() + 0x44B62D0))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(PathPlugin*, void*))(Il2CppBase() + 0x44B644C))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uintptr_t changeValue) {
		return ((T (*)(PathPlugin*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44B68C0))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uintptr_t startValue, uintptr_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(PathPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x44B6904))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}
	template <typename T = void> T SetOrientation(uintptr_t options, uintptr_t t, uintptr_t path, float pathPerc, Il2CppVector3 tPos, uintptr_t updateNotice) {
		return ((T (*)(PathPlugin*, uintptr_t, uintptr_t, uintptr_t, float, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x44B6BD4))(this, options, t, path, pathPerc, tPos, updateNotice);
	}

};

}
