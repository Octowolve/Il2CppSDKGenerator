#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameUISceneRush
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameUIScene_Rush"));
	}

	template <typename T = uintptr_t> T& m_PVERushHUD() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& m_RushTargetSignboard() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRushTargetSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTargetSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(SPGameUISceneRush*))(Il2CppBase() + 0x3F18890))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUISceneRush*))(Il2CppBase() + 0x3F18898))(this);
	}
	template <typename T = void> T OnMatchCountDown(uintptr_t msg) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F18A84))(this, msg);
	}
	template <typename T = void> T SetRushTargetSignboard(uintptr_t signboard) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F18C64))(this, signboard);
	}
	template <typename T = void> T OnShowTargetSignboard(uintptr_t msg) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F18D0C))(this, msg);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F18E3C))(this, msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F18F54))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUISceneRush*))(Il2CppBase() + 0x3F190E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMapChange(uintptr_t P0) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F190E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUISceneRush*, uintptr_t))(Il2CppBase() + 0x3F190F0))(this, P0);
	}

};

}
