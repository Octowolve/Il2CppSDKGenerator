#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class StringPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "StringPlugin"));
	}

	template <typename T = uintptr_t> static T& _Buffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<char>*> static T& _OpenedTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(StringPlugin*, void*, bool))(Il2CppBase() + 0x44BA8C8))(this, t, isRelative);
	}
	template <typename T = void> T Reset(void* t) {
		return ((T (*)(StringPlugin*, void*))(Il2CppBase() + 0x44BA9A0))(this, t);
	}
	template <typename T = Il2CppString*> T ConvertToStartValue(void* t, Il2CppString* value) {
		return ((T (*)(StringPlugin*, void*, Il2CppString*))(Il2CppBase() + 0x44BA9D0))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(StringPlugin*, void*))(Il2CppBase() + 0x44BA9D8))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(StringPlugin*, void*))(Il2CppBase() + 0x44BA9DC))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppString* changeValue) {
		return ((T (*)(StringPlugin*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x44BAB30))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppString* startValue, Il2CppString* changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(StringPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppString*, Il2CppString*, float, bool, uintptr_t))(Il2CppBase() + 0x44BAB8C))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}
	template <typename T = uintptr_t> T Append(Il2CppString* value, int32_t startIndex, int32_t length, bool richTextEnabled) {
		return ((T (*)(StringPlugin*, Il2CppString*, int32_t, int32_t, bool))(Il2CppBase() + 0x44BB390))(this, value, startIndex, length, richTextEnabled);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ScrambledCharsToUse(uintptr_t options) {
		return ((T (*)(StringPlugin*, uintptr_t))(Il2CppBase() + 0x44BBF14))(this, options);
	}

};

}
