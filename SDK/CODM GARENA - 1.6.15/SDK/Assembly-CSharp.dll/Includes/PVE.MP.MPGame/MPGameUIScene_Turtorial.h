#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUISceneTurtorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene_Turtorial"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalRadarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T ShowTaskHUD() {
		return ((T (*)(MPGameUISceneTurtorial*))(Il2CppBase() + 0x4606630))(this);
	}
	template <typename T = void> T LoadVoiceBtn(bool isShowVoice) {
		return ((T (*)(MPGameUISceneTurtorial*, bool))(Il2CppBase() + 0x46066D0))(this, isShowVoice);
	}
	template <typename T = void> T CreateTacticalRadarController(uintptr_t tacticalGPS) {
		return ((T (*)(MPGameUISceneTurtorial*, uintptr_t))(Il2CppBase() + 0x4606770))(this, tacticalGPS);
	}
	template <typename T = bool> T IsTutorialGame() {
		return ((T (*)(MPGameUISceneTurtorial*))(Il2CppBase() + 0x4606810))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowTaskHUD() {
		return ((T (*)(MPGameUISceneTurtorial*))(Il2CppBase() + 0x46068B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadVoiceBtn(bool P0) {
		return ((T (*)(MPGameUISceneTurtorial*, bool))(Il2CppBase() + 0x46068B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalRadarController(uintptr_t P0) {
		return ((T (*)(MPGameUISceneTurtorial*, uintptr_t))(Il2CppBase() + 0x46068BC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsTutorialGame() {
		return ((T (*)(MPGameUISceneTurtorial*))(Il2CppBase() + 0x46068C4))(this);
	}

};

}
