#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class Vector2Plugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "Vector2Plugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(Vector2Plugin*, void*))(Il2CppBase() + 0x44BD038))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(Vector2Plugin*, void*, bool))(Il2CppBase() + 0x44BD03C))(this, t, isRelative);
	}
	template <typename T = Il2CppVector2> T ConvertToStartValue(void* t, Il2CppVector2 value) {
		return ((T (*)(Vector2Plugin*, void*, Il2CppVector2))(Il2CppBase() + 0x44BD2FC))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(Vector2Plugin*, void*))(Il2CppBase() + 0x44BD30C))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(Vector2Plugin*, void*))(Il2CppBase() + 0x44BD35C))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppVector2 changeValue) {
		return ((T (*)(Vector2Plugin*, uintptr_t, float, Il2CppVector2))(Il2CppBase() + 0x44BD438))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppVector2 startValue, Il2CppVector2 changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(Vector2Plugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppVector2, Il2CppVector2, float, bool, uintptr_t))(Il2CppBase() + 0x44BD478))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
