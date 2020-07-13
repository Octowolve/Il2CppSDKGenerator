#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class StartupSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "StartupSettings"));
	}

	template <typename T = bool> static T& Logging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& StatsLoggingFrequencyInFrames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& Enable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& PreferredSubsystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T get_Logging() {
		return ((T (*)(void *))(Il2CppBase() + 0x421DDE0))(0);
	}
	template <typename T = void> static T set_Logging(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x421DB10))(0, value);
	}
	template <typename T = int32_t> static T get_StatsLoggingFrequencyInFrames() {
		return ((T (*)(void *))(Il2CppBase() + 0x420CC9C))(0);
	}
	template <typename T = void> static T set_StatsLoggingFrequencyInFrames(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x421DBC4))(0, value);
	}
	template <typename T = bool> static T get_Enable() {
		return ((T (*)(void *))(Il2CppBase() + 0x420CD4C))(0);
	}
	template <typename T = void> static T set_Enable(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x421DC78))(0, value);
	}
	template <typename T = uintptr_t> static T get_PreferredSubsystem() {
		return ((T (*)(void *))(Il2CppBase() + 0x420D034))(0);
	}
	template <typename T = void> static T set_PreferredSubsystem(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x421DD2C))(0, value);
	}

};

}
