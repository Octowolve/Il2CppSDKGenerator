#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USCameraDissolveTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USCameraDissolveTransition"));
	}

	template <typename T = uintptr_t> T& transition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sourceCamera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& destinationCamera() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnGUI() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A38074))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A381D0))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USCameraDissolveTransition*, float))(Il2CppBase() + 0x4A38450))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A385CC))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A38728))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A38890))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A389EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A389F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USCameraDissolveTransition*))(Il2CppBase() + 0x4A389FC))(this);
	}

};

}
