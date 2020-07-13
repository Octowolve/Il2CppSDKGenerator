#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USMeshRenderDisable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USMeshRenderDisable"));
	}

	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& previousEnable() {
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
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3EE28))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USMeshRenderDisable*, float))(Il2CppBase() + 0x4A3F044))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F0E4))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F194))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USMeshRenderDisable*))(Il2CppBase() + 0x4A3F460))(this);
	}

};

}
