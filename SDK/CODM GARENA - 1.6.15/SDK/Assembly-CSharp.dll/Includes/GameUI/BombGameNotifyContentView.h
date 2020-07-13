#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameNotifyContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameNotifyContentView"));
	}

	template <typename T = uintptr_t> T& HaveBombTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCarryBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideHaveBombTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoundTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombExplored() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombDefused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7B5DC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7B680))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7B8A0))(this);
	}
	template <typename T = void> T SetActive(bool isActive, bool enableOptimze) {
		return ((T (*)(BombGameNotifyContentView*, bool, bool))(Il2CppBase() + 0x2D7B994))(this, isActive, enableOptimze);
	}
	template <typename T = void> T OnNotifyCarryBomb(uintptr_t msg) {
		return ((T (*)(BombGameNotifyContentView*, uintptr_t))(Il2CppBase() + 0x2D7BA60))(this, msg);
	}
	template <typename T = void> T HideHaveBombTips() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7BC94))(this);
	}
	template <typename T = void> T OnNotifyRoundTarget(uintptr_t msg) {
		return ((T (*)(BombGameNotifyContentView*, uintptr_t))(Il2CppBase() + 0x2D7BD80))(this, msg);
	}
	template <typename T = void> T OnNotifyBombPlanted(uintptr_t msg) {
		return ((T (*)(BombGameNotifyContentView*, uintptr_t))(Il2CppBase() + 0x2D7BE20))(this, msg);
	}
	template <typename T = void> T OnNotifyBombExplored(uintptr_t msg) {
		return ((T (*)(BombGameNotifyContentView*, uintptr_t))(Il2CppBase() + 0x2D7BFD4))(this, msg);
	}
	template <typename T = void> T OnNotifyBombDefused(uintptr_t msg) {
		return ((T (*)(BombGameNotifyContentView*, uintptr_t))(Il2CppBase() + 0x2D7C188))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7C33C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7C340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BombGameNotifyContentView*))(Il2CppBase() + 0x2D7C344))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BombGameNotifyContentView*, bool, bool))(Il2CppBase() + 0x2D7C348))(this, P0, P1);
	}

};

}
