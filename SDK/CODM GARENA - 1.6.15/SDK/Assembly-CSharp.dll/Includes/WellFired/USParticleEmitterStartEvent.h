#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USParticleEmitterStartEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USParticleEmitterStartEvent"));
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
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A3FC64))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A3FE9C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USParticleEmitterStartEvent*, float))(Il2CppBase() + 0x4A400A8))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A401B4))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A40264))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A403F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USParticleEmitterStartEvent*))(Il2CppBase() + 0x4A40400))(this);
	}

};

}
