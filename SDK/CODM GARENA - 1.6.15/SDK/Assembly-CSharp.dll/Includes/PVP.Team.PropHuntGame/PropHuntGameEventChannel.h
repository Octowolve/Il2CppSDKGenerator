#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameEventChannel"));
	}

	template <typename T = uintptr_t> T& mLocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_PropHuntGameInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_PropHuntGame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPropHuntItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncChooseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncItemWhistle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerSelectedItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchPreparation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncExtraRoundPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPropHuntPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPropHuntResBuyItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPawnRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(PropHuntGameEventChannel*))(Il2CppBase() + 0x349C818))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntGameEventChannel*))(Il2CppBase() + 0x349C8C8))(this);
	}
	template <typename T = void> T OnSyncPropHuntItem(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349CC58))(this, Msg);
	}
	template <typename T = void> T OnSyncChooseItem(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349D6BC))(this, Msg);
	}
	template <typename T = void> T OnSyncItemWhistle(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349DB9C))(this, Msg);
	}
	template <typename T = void> T OnSyncPlayerSelectedItem(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349DDC4))(this, Msg);
	}
	template <typename T = void> T OnMatchPreparation(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349E0E0))(this, Msg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349E180))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349E220))(this, Msg);
	}
	template <typename T = void> T OnSyncExtraRoundPhase(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x349E2D4))(this, Msg);
	}
	template <typename T = void> T OnSyncPropHuntPlayerInfo(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A0E68))(this, Msg);
	}
	template <typename T = void> T OnSyncPropHuntResBuyItem(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A17A8))(this, Msg);
	}
	template <typename T = uintptr_t> T CheckLocalPawnRespawn(uintptr_t playerInfo, uintptr_t oldPawn) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34A1ADC))(this, playerInfo, oldPawn);
	}
	template <typename T = void> T OnReSpawnPlayer(uintptr_t Msg) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A1B9C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntGameEventChannel*))(Il2CppBase() + 0x34A1DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnMatchPreparation(uintptr_t P0) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A1DDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A1DE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A1DEC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CheckLocalPawnRespawn(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34A1DF4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer(uintptr_t P0) {
		return ((T (*)(PropHuntGameEventChannel*, uintptr_t))(Il2CppBase() + 0x34A1DFC))(this, P0);
	}

};

}
