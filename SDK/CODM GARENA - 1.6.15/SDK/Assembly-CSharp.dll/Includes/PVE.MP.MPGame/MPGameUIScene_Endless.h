#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUISceneEndless
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene_Endless"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T ShowTaskHUD() {
		return ((T (*)(MPGameUISceneEndless*))(Il2CppBase() + 0x46055B0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MPGameUISceneEndless*))(Il2CppBase() + 0x4605650))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x460576C))(this, msg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t msg) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x4605884))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x4605AF8))(this, msg);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowTaskHUD() {
		return ((T (*)(MPGameUISceneEndless*))(Il2CppBase() + 0x4605D04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameUISceneEndless*))(Il2CppBase() + 0x4605D0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x4605D10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x4605D18))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(MPGameUISceneEndless*, uintptr_t))(Il2CppBase() + 0x4605D20))(this, P0);
	}

};

}
