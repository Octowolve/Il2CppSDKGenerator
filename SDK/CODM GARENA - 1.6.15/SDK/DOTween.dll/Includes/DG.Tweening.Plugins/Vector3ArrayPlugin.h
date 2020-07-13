#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class Vector3ArrayPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "Vector3ArrayPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(Vector3ArrayPlugin*, void*))(Il2CppBase() + 0x44BDB1C))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(Vector3ArrayPlugin*, void*, bool))(Il2CppBase() + 0x44BDB4C))(this, t, isRelative);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ConvertToStartValue(void* t, Il2CppVector3 value) {
		return ((T (*)(Vector3ArrayPlugin*, void*, Il2CppVector3))(Il2CppBase() + 0x44BDB50))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(Vector3ArrayPlugin*, void*))(Il2CppBase() + 0x44BDCCC))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(Vector3ArrayPlugin*, void*))(Il2CppBase() + 0x44BDE54))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppArray<uintptr_t>* changeValue) {
		return ((T (*)(Vector3ArrayPlugin*, uintptr_t, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44BE004))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppArray<uintptr_t>* startValue, Il2CppArray<uintptr_t>* changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(Vector3ArrayPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, bool, uintptr_t))(Il2CppBase() + 0x44BE0CC))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
