#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USCameraSetCullingMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USCameraSetCullingMask"));
	}

	template <typename T = uintptr_t> T& newLayerMask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& prevLayerMask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cameraToAffect() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38AA8))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USCameraSetCullingMask*, float))(Il2CppBase() + 0x4A38C84))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38D24))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38DBC))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38E6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USCameraSetCullingMask*))(Il2CppBase() + 0x4A38F90))(this);
	}

};

}
