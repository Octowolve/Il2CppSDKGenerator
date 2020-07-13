#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPlayAudioEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USPlayAudioEvent"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& wasPlaying() {
		return *(T*)((uintptr_t)this + 0x21);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ManuallySetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Update() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A42A74))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A42BAC))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USPlayAudioEvent*, float))(Il2CppBase() + 0x4A42DE8))(this, deltaTime);
	}
	template <typename T = void> T ManuallySetTime(float deltaTime) {
		return ((T (*)(USPlayAudioEvent*, float))(Il2CppBase() + 0x4A43048))(this, deltaTime);
	}
	template <typename T = void> T ResumeEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A4318C))(this);
	}
	template <typename T = void> T PauseEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A4331C))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A434C4))(this);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A43574))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A43624))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ManuallySetTime(float P0) {
		return ((T (*)(USPlayAudioEvent*, float))(Il2CppBase() + 0x4A437B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResumeEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A437C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PauseEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A437C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A437D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A437D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USPlayAudioEvent*))(Il2CppBase() + 0x4A437E0))(this);
	}

};

}
