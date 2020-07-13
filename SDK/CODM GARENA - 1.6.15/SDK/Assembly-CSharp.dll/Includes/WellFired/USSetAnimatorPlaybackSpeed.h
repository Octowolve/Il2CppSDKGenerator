#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSetAnimatorPlaybackSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSetAnimatorPlaybackSpeed"));
	}

	template <typename T = float> T& playbackSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& prevPlaybackSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USSetAnimatorPlaybackSpeed*))(Il2CppBase() + 0x4A48764))(this);
	}
	template <typename T = void> T ProcessEvent(float runningTime) {
		return ((T (*)(USSetAnimatorPlaybackSpeed*, float))(Il2CppBase() + 0x4A48918))(this, runningTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USSetAnimatorPlaybackSpeed*))(Il2CppBase() + 0x4A489B8))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USSetAnimatorPlaybackSpeed*))(Il2CppBase() + 0x4A48A68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USSetAnimatorPlaybackSpeed*))(Il2CppBase() + 0x4A48BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USSetAnimatorPlaybackSpeed*))(Il2CppBase() + 0x4A48BAC))(this);
	}

};

}
