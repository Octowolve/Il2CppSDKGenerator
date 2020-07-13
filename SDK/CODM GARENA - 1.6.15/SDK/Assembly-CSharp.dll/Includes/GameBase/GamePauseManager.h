#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GamePauseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GamePauseManager"));
	}

	template <typename T = uintptr_t> static T& m_GamePauseReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_Callback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& m_LastPauseBeginTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& m_LastPauseEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsJustPauseEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPauseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldResetScreenSleepTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_GamePauseReasone() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E8CC34))(0);
	}
	template <typename T = float> static T get_LastPauseEndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E8CCB4))(0);
	}
	template <typename T = float> static T get_LastPauseBeginTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E8CD34))(0);
	}
	template <typename T = bool> static T IsJustPauseEnd(int32_t seconds) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1E8CDB4))(0, seconds);
	}
	template <typename T = bool> static T get_IsPaused() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E8CEB4))(0);
	}
	template <typename T = void> static T SetPauseCallback(uintptr_t reason, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E8CF44))(0, reason, callback);
	}
	template <typename T = bool> static T ShouldResetScreenSleepTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E8D008))(0);
	}
	template <typename T = void> static T OnApplicationPause(bool paused) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1E8D0BC))(0, paused);
	}

};

}
