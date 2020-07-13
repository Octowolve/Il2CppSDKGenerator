#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_TCGame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncEndUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLocalPlayerSaveResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalCombatGameEventChannel*))(Il2CppBase() + 0x34D4890))(this);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D4AA0))(this, Msg);
	}
	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D520C))(this, inMsg);
	}
	template <typename T = void> T OnDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D575C))(this, inMsg);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D58E8))(this, Msg);
	}
	template <typename T = void> T OnServerSyncEndUseItem(uintptr_t inMsg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D5D50))(this, inMsg);
	}
	template <typename T = void> T OnSyncLocalPlayerSaveResult(uintptr_t inMsg) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D61E8))(this, inMsg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalCombatGameEventChannel*))(Il2CppBase() + 0x34D6BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D6BD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddDroppedPickUp(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D6BDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeleteDroppedPickUp(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D6BE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncUseItem(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D6BEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncEndUseItem(uintptr_t P0) {
		return ((T (*)(TacticalCombatGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34D6BF4))(this, P0);
	}

};

}
