#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class Tweener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "Tweener"));
	}

	template <typename T = bool> T& hasManuallySetStartValue() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& isFromAllowed() {
		return *(T*)((uintptr_t)this + 0xB9);
	}

	template <typename T = uintptr_t> T ChangeStartValue(uintptr_t newStartValue, float newDuration) {
		return ((T (*)(Tweener*, uintptr_t, float))(Il2CppBase() + 0x0))(this, newStartValue, newDuration);
	}
	template <typename T = uintptr_t> T ChangeEndValue(uintptr_t newEndValue, float newDuration, bool snapStartValue) {
		return ((T (*)(Tweener*, uintptr_t, float, bool))(Il2CppBase() + 0x0))(this, newEndValue, newDuration, snapStartValue);
	}
	template <typename T = uintptr_t> T ChangeEndValue_1(uintptr_t newEndValue, bool snapStartValue) {
		return ((T (*)(Tweener*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, newEndValue, snapStartValue);
	}
	template <typename T = uintptr_t> T ChangeValues(uintptr_t newStartValue, uintptr_t newEndValue, float newDuration) {
		return ((T (*)(Tweener*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x0))(this, newStartValue, newEndValue, newDuration);
	}
	template <typename T = uintptr_t> T SetFrom(bool relative) {
		return ((T (*)(Tweener*, bool))(Il2CppBase() + 0x0))(this, relative);
	}
	template <typename T = bool> static T Setup(void* t, void* getter, void* setter, uintptr_t endValue, float duration, void* plugin) {
		return ((T (*)(void *, void*, void*, void*, uintptr_t, float, void*))(Il2CppBase() + 0x1B97850))(0, t, getter, setter, endValue, duration, plugin);
	}
	template <typename T = float> static T DoUpdateDelay(void* t, float elapsed) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x1E75BFC))(0, t, elapsed);
	}
	template <typename T = bool> static T DoStartup(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1B8A944))(0, t);
	}
	template <typename T = uintptr_t> static T DoChangeStartValue(void* t, uintptr_t newStartValue, float newDuration) {
		return ((T (*)(void *, void*, uintptr_t, float))(Il2CppBase() + 0x1B68788))(0, t, newStartValue, newDuration);
	}
	template <typename T = uintptr_t> static T DoChangeEndValue(void* t, uintptr_t newEndValue, float newDuration, bool snapStartValue) {
		return ((T (*)(void *, void*, uintptr_t, float, bool))(Il2CppBase() + 0x1B6479C))(0, t, newEndValue, newDuration, snapStartValue);
	}
	template <typename T = uintptr_t> static T DoChangeValues(void* t, uintptr_t newStartValue, uintptr_t newEndValue, float newDuration) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1B69A04))(0, t, newStartValue, newEndValue, newDuration);
	}
	template <typename T = bool> static T DOStartupSpecials(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1B94F88))(0, t);
	}
	template <typename T = void> static T DOStartupDurationBased(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7C284))(0, t);
	}

};

}
