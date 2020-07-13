#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TimerModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TimerModule"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Timers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_UnUseTimerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTimerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T SetTimer(float InInterval, bool bLoop, uintptr_t InTimerDelegate, bool InAutoStart, bool CanBePaused, bool FixedInterval) {
		return ((T (*)(TimerModule*, float, bool, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x3436A90))(this, InInterval, bLoop, InTimerDelegate, InAutoStart, CanBePaused, FixedInterval);
	}
	template <typename T = void> T ClearTimer(uint32_t timerID) {
		return ((T (*)(TimerModule*, uint32_t))(Il2CppBase() + 0x3436DFC))(this, timerID);
	}
	template <typename T = void> T ClearTimer_1(uintptr_t InTimerDelegate) {
		return ((T (*)(TimerModule*, uintptr_t))(Il2CppBase() + 0x3436F74))(this, InTimerDelegate);
	}
	template <typename T = void> T ClearAllTimers() {
		return ((T (*)(TimerModule*))(Il2CppBase() + 0x3437104))(this);
	}
	template <typename T = void> T UpdateTimers() {
		return ((T (*)(TimerModule*))(Il2CppBase() + 0x3437230))(this);
	}
	template <typename T = bool> T IsTimerActive(uintptr_t InTimerDelegate) {
		return ((T (*)(TimerModule*, uintptr_t))(Il2CppBase() + 0x3437458))(this, InTimerDelegate);
	}

};

}
