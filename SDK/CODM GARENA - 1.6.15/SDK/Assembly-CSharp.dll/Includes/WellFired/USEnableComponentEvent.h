#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USEnableComponentEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USEnableComponentEvent"));
	}

	template <typename T = bool> T& enableComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& prevEnable() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = Il2CppString*> T& componentName() {
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

	template <typename T = Il2CppString*> T get_ComponentName() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3ABB8))(this);
	}
	template <typename T = void> T set_ComponentName(Il2CppString* value) {
		return ((T (*)(USEnableComponentEvent*, Il2CppString*))(Il2CppBase() + 0x4A3ABC0))(this, value);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3ABC8))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USEnableComponentEvent*, float))(Il2CppBase() + 0x4A3AD5C))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3ADFC))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3AEAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3B08C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USEnableComponentEvent*))(Il2CppBase() + 0x4A3B094))(this);
	}

};

}
