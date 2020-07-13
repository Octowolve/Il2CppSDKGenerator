#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class SPGameUISceneInheritPVE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "SPGameUISceneInheritPVE"));
	}

	template <typename T = uintptr_t> T& m_PVERoundOverHUD() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEndHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SPGameUISceneInheritPVE*))(Il2CppBase() + 0x4054F68))(this);
	}
	template <typename T = void> T CreateEndHud() {
		return ((T (*)(SPGameUISceneInheritPVE*))(Il2CppBase() + 0x4055024))(this);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(SPGameUISceneInheritPVE*, uintptr_t))(Il2CppBase() + 0x4055190))(this, msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(SPGameUISceneInheritPVE*, uintptr_t))(Il2CppBase() + 0x40554EC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUISceneInheritPVE*))(Il2CppBase() + 0x4055618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUISceneInheritPVE*, uintptr_t))(Il2CppBase() + 0x4055620))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMapChange(uintptr_t P0) {
		return ((T (*)(SPGameUISceneInheritPVE*, uintptr_t))(Il2CppBase() + 0x4055628))(this, P0);
	}

};

}
