#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_BombGameInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_BombGame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncEndUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAreaEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BombGameEventChannel*))(Il2CppBase() + 0x407C0CC))(this);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407C274))(this, Msg);
	}
	template <typename T = void> T OnServerSyncEndUseItem(uintptr_t inMsg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407C644))(this, inMsg);
	}
	template <typename T = void> T OnAddDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407D8E8))(this, inMsg);
	}
	template <typename T = void> T OnDeleteDroppedPickUp(uintptr_t inMsg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407DE40))(this, inMsg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407DFCC))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407E480))(this, Msg);
	}
	template <typename T = void> T OnSyncAreaEvent(uintptr_t Msg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407E57C))(this, Msg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407E804))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BombGameEventChannel*))(Il2CppBase() + 0x407ECA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncUseItem(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnServerSyncEndUseItem(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAddDroppedPickUp(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECBC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeleteDroppedPickUp(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAreaEvent(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(BombGameEventChannel*, uintptr_t))(Il2CppBase() + 0x407ECE4))(this, P0);
	}

};

}
