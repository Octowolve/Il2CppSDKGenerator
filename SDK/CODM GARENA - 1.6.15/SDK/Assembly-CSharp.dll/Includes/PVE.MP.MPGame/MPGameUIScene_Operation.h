#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUISceneOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene_Operation"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MPGameUISceneOperation*))(Il2CppBase() + 0x4605E00))(this);
	}
	template <typename T = void> T InitHUD() {
		return ((T (*)(MPGameUISceneOperation*))(Il2CppBase() + 0x4605EAC))(this);
	}
	template <typename T = void> T OnRoundStart(uintptr_t msg) {
		return ((T (*)(MPGameUISceneOperation*, uintptr_t))(Il2CppBase() + 0x4605F44))(this, msg);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(MPGameUISceneOperation*, uintptr_t))(Il2CppBase() + 0x4605FF8))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameUISceneOperation*))(Il2CppBase() + 0x4606204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(MPGameUISceneOperation*, uintptr_t))(Il2CppBase() + 0x4606208))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(MPGameUISceneOperation*, uintptr_t))(Il2CppBase() + 0x4606210))(this, P0);
	}

};

}
