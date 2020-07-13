#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGameInfo"));
	}

	template <typename T = uint32_t> T& m_C4BombCarrierID() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_AttackerCamp() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_IsC4BombPlanted() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& IsC4BombDefused() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = uintptr_t> T& m_BombPlantedArea() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppVector3> T& m_BombPlantPos() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& m_BombDropPos() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppString*> T& m_ourSideEliminated() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBombCarrier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombCarrier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombDropped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBombPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBombPlantedArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RespawnAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessScoreChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPawnNumberChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uint32_t> T get_C4BombCarrierID() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EDF4))(this);
	}
	template <typename T = bool> T get_IsLocalPlayerC4BombCarrier() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EDFC))(this);
	}
	template <typename T = bool> T get_IsC4BombPlanted() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407B4E8))(this);
	}
	template <typename T = bool> T get_IsC4BombDefused() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EEB4))(this);
	}
	template <typename T = void> T set_IsC4BombDefused(bool value) {
		return ((T (*)(BombGameInfo*, bool))(Il2CppBase() + 0x4079690))(this, value);
	}
	template <typename T = uintptr_t> T get_BombPlantedArea() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407AF74))(this);
	}
	template <typename T = Il2CppVector3> T get_BombPlantPos() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407B568))(this);
	}
	template <typename T = Il2CppVector3> T get_BombDropPos() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EEBC))(this);
	}
	template <typename T = float> T get_DelayRoundEndTime() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EED0))(this);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(BombGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x407EEDC))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407EFD8))(this);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t inRoundResult, uint64_t inWarGodPlayerID) {
		return ((T (*)(BombGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x407F10C))(this, inRoundResult, inWarGodPlayerID);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(BombGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x407F230))(this, propertyID, value, varType);
	}
	template <typename T = void> T RefreshBombCarrier() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407F800))(this);
	}
	template <typename T = void> T SetBombCarrier(uint32_t playerID) {
		return ((T (*)(BombGameInfo*, uint32_t))(Il2CppBase() + 0x407F394))(this, playerID);
	}
	template <typename T = void> T SetBombPlanted(Il2CppVector3 plantPos) {
		return ((T (*)(BombGameInfo*, Il2CppVector3))(Il2CppBase() + 0x407D680))(this, plantPos);
	}
	template <typename T = void> T SetBombDropped(Il2CppVector3 dropPos) {
		return ((T (*)(BombGameInfo*, Il2CppVector3))(Il2CppBase() + 0x407DD68))(this, dropPos);
	}
	template <typename T = Il2CppVector3> T GetBombPos() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407FAB8))(this);
	}
	template <typename T = void> T SetBombPlantedArea(uintptr_t plantedArea) {
		return ((T (*)(BombGameInfo*, uintptr_t))(Il2CppBase() + 0x407EBDC))(this, plantedArea);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407FCC4))(this);
	}
	template <typename T = Il2CppString*> T GetPrepareModeInfo() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x407FE2C))(this);
	}
	template <typename T = uintptr_t> T GetGameSide(uintptr_t camp) {
		return ((T (*)(BombGameInfo*, uintptr_t))(Il2CppBase() + 0x407E3A8))(this, camp);
	}
	template <typename T = bool> T RespawnAfterDead() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x4080020))(this);
	}
	template <typename T = void> T ProcessScoreChanged() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x40800C0))(this);
	}
	template <typename T = void> T ProcessPawnNumberChanged(bool isGuard) {
		return ((T (*)(BombGameInfo*, bool))(Il2CppBase() + 0x4080158))(this, isGuard);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(BombGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x40803C0))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x40803C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0, uint64_t P1) {
		return ((T (*)(BombGameInfo*, uintptr_t, uint64_t))(Il2CppBase() + 0x40803D0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BombGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40803F0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x4080410))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetPrepareModeInfo() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x4080418))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_RespawnAfterDead() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x4080420))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessScoreChanged() {
		return ((T (*)(BombGameInfo*))(Il2CppBase() + 0x4080428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessPawnNumberChanged(bool P0) {
		return ((T (*)(BombGameInfo*, bool))(Il2CppBase() + 0x4080430))(this, P0);
	}

};

}
