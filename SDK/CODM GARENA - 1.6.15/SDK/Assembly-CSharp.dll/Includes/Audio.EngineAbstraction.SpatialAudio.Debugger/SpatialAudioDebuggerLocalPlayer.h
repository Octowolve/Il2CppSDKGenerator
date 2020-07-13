#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.SpatialAudio.Debugger {

class SpatialAudioDebuggerLocalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.SpatialAudio.Debugger", "SpatialAudioDebuggerLocalPlayer"));
	}

	template <typename T = uintptr_t> static T& _msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EEE60))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpatialAudioDebuggerLocalPlayer*))(Il2CppBase() + 0x44EEF10))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SpatialAudioDebuggerLocalPlayer*))(Il2CppBase() + 0x44EF018))(this);
	}

};

}
