#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USFadeAudioEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USFadeAudioEvent"));
	}

	template <typename T = float> T& previousVolume() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fadeCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Update() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3B658))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3B72C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USFadeAudioEvent*, float))(Il2CppBase() + 0x4A3B8CC))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3BA8C))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3BB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3BCDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USFadeAudioEvent*))(Il2CppBase() + 0x4A3BCE4))(this);
	}

};

}
