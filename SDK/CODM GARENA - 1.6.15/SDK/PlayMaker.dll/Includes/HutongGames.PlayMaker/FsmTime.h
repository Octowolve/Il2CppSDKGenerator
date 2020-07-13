#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmTime"));
	}

	template <typename T = bool> static T& firstUpdateHasHappened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& totalEditorPlayerPausedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& realtimeLastUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& frameCountLastUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> static T get_RealtimeSinceStartup() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0DF08))(0);
	}
	template <typename T = void> static T RealtimeBugFix() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF8498))(0);
	}
	template <typename T = void> static T Update() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F16EAC))(0);
	}
	template <typename T = Il2CppString*> static T FormatTime(float time) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2F0F154))(0, time);
	}
	template <typename T = void> static T DebugLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F16FA8))(0);
	}

};

}
