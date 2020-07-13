#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class GameSDKLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "GameSDKLog"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Debug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Debug(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x421877C))(0, format, args);
	}

};

}
