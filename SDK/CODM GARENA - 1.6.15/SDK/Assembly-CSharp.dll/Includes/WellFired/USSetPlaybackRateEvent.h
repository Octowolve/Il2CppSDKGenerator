#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSetPlaybackRateEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSetPlaybackRateEvent"));
	}

	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& playbackRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& prevPlaybackRate() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(USSetPlaybackRateEvent*))(Il2CppBase() + 0x4A48F68))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSetPlaybackRateEvent*, float))(Il2CppBase() + 0x4A49198))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USSetPlaybackRateEvent*))(Il2CppBase() + 0x4A49238))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USSetPlaybackRateEvent*))(Il2CppBase() + 0x4A492E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USSetPlaybackRateEvent*))(Il2CppBase() + 0x4A493FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USSetPlaybackRateEvent*))(Il2CppBase() + 0x4A49404))(this);
	}

};

}
