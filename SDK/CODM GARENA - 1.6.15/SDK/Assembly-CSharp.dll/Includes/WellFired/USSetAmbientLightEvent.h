#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSetAmbientLightEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSetAmbientLightEvent"));
	}

	template <typename T = uintptr_t> T& lightColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& prevLightColor() {
		return *(T*)((uintptr_t)this + 0x2C);
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
		return ((T (*)(USSetAmbientLightEvent*))(Il2CppBase() + 0x4A466C0))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSetAmbientLightEvent*, float))(Il2CppBase() + 0x4A467A8))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USSetAmbientLightEvent*))(Il2CppBase() + 0x4A46848))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USSetAmbientLightEvent*))(Il2CppBase() + 0x4A468F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USSetAmbientLightEvent*))(Il2CppBase() + 0x4A469BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USSetAmbientLightEvent*))(Il2CppBase() + 0x4A469C4))(this);
	}

};

}
