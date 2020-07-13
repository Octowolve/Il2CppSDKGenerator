#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USEnableObjectEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USEnableObjectEvent"));
	}

	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& prevEnable() {
		return *(T*)((uintptr_t)this + 0x1D);
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
		return ((T (*)(USEnableObjectEvent*))(Il2CppBase() + 0x4A3B140))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USEnableObjectEvent*, float))(Il2CppBase() + 0x4A3B228))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USEnableObjectEvent*))(Il2CppBase() + 0x4A3B2C8))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USEnableObjectEvent*))(Il2CppBase() + 0x4A3B378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USEnableObjectEvent*))(Il2CppBase() + 0x4A3B4A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USEnableObjectEvent*))(Il2CppBase() + 0x4A3B4A8))(this);
	}

};

}
