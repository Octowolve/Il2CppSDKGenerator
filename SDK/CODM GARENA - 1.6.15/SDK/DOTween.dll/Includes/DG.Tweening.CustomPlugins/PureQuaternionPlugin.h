#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.CustomPlugins {

class PureQuaternionPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.CustomPlugins", "PureQuaternionPlugin"));
	}

	template <typename T = uintptr_t> static T& _plug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T Plug() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A8FD0))(0);
	}
	template <typename T = void> T Reset(void* t) {
		return ((T (*)(PureQuaternionPlugin*, void*))(Il2CppBase() + 0x44A9114))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(PureQuaternionPlugin*, void*, bool))(Il2CppBase() + 0x44A9118))(this, t, isRelative);
	}
	template <typename T = Il2CppQuaternion> T ConvertToStartValue(void* t, Il2CppQuaternion value) {
		return ((T (*)(PureQuaternionPlugin*, void*, Il2CppQuaternion))(Il2CppBase() + 0x44A9280))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(PureQuaternionPlugin*, void*))(Il2CppBase() + 0x44A9298))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(PureQuaternionPlugin*, void*))(Il2CppBase() + 0x44A9318))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppQuaternion changeValue) {
		return ((T (*)(PureQuaternionPlugin*, uintptr_t, float, Il2CppQuaternion))(Il2CppBase() + 0x44A9354))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppQuaternion startValue, Il2CppQuaternion changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(PureQuaternionPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppQuaternion, Il2CppQuaternion, float, bool, uintptr_t))(Il2CppBase() + 0x44A93D4))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
