#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class TweenerCore3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "TweenerCore`3"));
	}

	template <typename T = uintptr_t> T& startValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& endValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& changeValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& plugOptions() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& getter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& setter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& tweenPlugin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> static T& _TxtCantChangeSequencedValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T ChangeStartValue(uintptr_t newStartValue, float newDuration) {
		return ((T (*)(TweenerCore3*, uintptr_t, float))(Il2CppBase() + 0x473807C))(this, newStartValue, newDuration);
	}
	template <typename T = uintptr_t> T ChangeEndValue(uintptr_t newEndValue, bool snapStartValue) {
		return ((T (*)(TweenerCore3*, uintptr_t, bool))(Il2CppBase() + 0x4738490))(this, newEndValue, snapStartValue);
	}
	template <typename T = uintptr_t> T ChangeEndValue_1(uintptr_t newEndValue, float newDuration, bool snapStartValue) {
		return ((T (*)(TweenerCore3*, uintptr_t, float, bool))(Il2CppBase() + 0x47384D8))(this, newEndValue, newDuration, snapStartValue);
	}
	template <typename T = uintptr_t> T ChangeValues(uintptr_t newStartValue, uintptr_t newEndValue, float newDuration) {
		return ((T (*)(TweenerCore3*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x47388FC))(this, newStartValue, newEndValue, newDuration);
	}
	template <typename T = uintptr_t> T SetFrom(bool relative) {
		return ((T (*)(TweenerCore3*, bool))(Il2CppBase() + 0x4738FFC))(this, relative);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TweenerCore3*))(Il2CppBase() + 0x4739048))(this);
	}
	template <typename T = bool> T Validate() {
		return ((T (*)(TweenerCore3*))(Il2CppBase() + 0x47390B8))(this);
	}
	template <typename T = float> T UpdateDelay(float elapsed) {
		return ((T (*)(TweenerCore3*, float))(Il2CppBase() + 0x4739200))(this, elapsed);
	}
	template <typename T = bool> T Startup() {
		return ((T (*)(TweenerCore3*))(Il2CppBase() + 0x473922C))(this);
	}
	template <typename T = bool> T ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, uintptr_t updateMode, uintptr_t updateNotice) {
		return ((T (*)(TweenerCore3*, float, int32_t, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x473924C))(this, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
	}

};

}
