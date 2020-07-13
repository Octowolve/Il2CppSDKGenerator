#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGameInfo"));
	}

	template <typename T = uintptr_t> T& DefenderFlagInfo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& AttackerFlagInfo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uint32_t> T& m_DefendFlagScore() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint32_t> T& m_AttackFlagScore() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& m_TotalDefendFlagScore() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint32_t> T& m_TotalAttackFlagScore() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uint32_t> T& m_LastHoldingAttackerFlagPlayerID() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint32_t> T& m_LastHoldingDefenderFlagPlayerID() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppList<uint32_t>*> T& PendingEquipGoldBagPlayerIDs() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint32_t> T& m_CacheMineSideFlagNum() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uint32_t> T& m_CacheEnemySideFlagNum() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRefreshFlagSignBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideFlagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideFlagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideGameTotalScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideGameTotalScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMineSideGameTotalFlagScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemySideGameTotalFlagScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnEquipGoldBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PawnUnequipGoldBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoundEndReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uint32_t> T get_DefendFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28CC4))(this);
	}
	template <typename T = void> T set_DefendFlagScore(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B28CCC))(this, value);
	}
	template <typename T = uint32_t> T get_AttackFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28CD4))(this);
	}
	template <typename T = void> T set_AttackFlagScore(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B28CDC))(this, value);
	}
	template <typename T = uint32_t> T get_TotalDefendFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28CE4))(this);
	}
	template <typename T = void> T set_TotalDefendFlagScore(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B28CEC))(this, value);
	}
	template <typename T = uint32_t> T get_TotalAttackFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28CF4))(this);
	}
	template <typename T = void> T set_TotalAttackFlagScore(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B28CFC))(this, value);
	}
	template <typename T = Il2CppString*> T GetPrepareModeInfo() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28D04))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B28E6C))(this);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(CTFGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2B28FA0))(this, propertyID, value, varType);
	}
	template <typename T = void> T SendRefreshFlagSignBoard(bool bDefenderGrabbed, uint32_t playerid) {
		return ((T (*)(CTFGameInfo*, bool, uint32_t))(Il2CppBase() + 0x2B29510))(this, bDefenderGrabbed, playerid);
	}
	template <typename T = uintptr_t> T GetMineSideFlagInfo() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2970C))(this);
	}
	template <typename T = uintptr_t> T GetEnemySideFlagInfo() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B298CC))(this);
	}
	template <typename T = uint32_t> T GetMineSideScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B29A8C))(this);
	}
	template <typename T = uint32_t> T GetEnemySideScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B29C4C))(this);
	}
	template <typename T = int32_t> T GetMineSideGameTotalScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B281D0))(this);
	}
	template <typename T = int32_t> T GetEnemySideGameTotalScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B29E0C))(this);
	}
	template <typename T = uint32_t> T GetMineSideGameTotalFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B29FDC))(this);
	}
	template <typename T = uint32_t> T GetEnemySideGameTotalFlagScore() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B283A0))(this);
	}
	template <typename T = void> T OnRoundTimeChanged() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2A19C))(this);
	}
	template <typename T = uint32_t> T get_LastHoldingAttackerFlagPlayerID() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2A3B8))(this);
	}
	template <typename T = void> T set_LastHoldingAttackerFlagPlayerID(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B296D4))(this, value);
	}
	template <typename T = uint32_t> T get_LastHoldingDefenderFlagPlayerID() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2A824))(this);
	}
	template <typename T = void> T set_LastHoldingDefenderFlagPlayerID(uint32_t value) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B294D8))(this, value);
	}
	template <typename T = void> T PawnEquipGoldBag(uint32_t playerID) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B2A590))(this, playerID);
	}
	template <typename T = void> T PawnUnequipGoldBag(uint32_t playerID) {
		return ((T (*)(CTFGameInfo*, uint32_t))(Il2CppBase() + 0x2B2A3C0))(this, playerID);
	}
	template <typename T = uint32_t> T get_CacheMineSideFlagNum() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AD94))(this);
	}
	template <typename T = uint32_t> T get_CacheEnmeySideFlagNum() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AD9C))(this);
	}
	template <typename T = void> T DelayRoundEnd(uintptr_t inRoundResult, uintptr_t inReason, uint64_t inWarGodPlayerID) {
		return ((T (*)(CTFGameInfo*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2B2ADA4))(this, inRoundResult, inReason, inWarGodPlayerID);
	}
	template <typename T = Il2CppString*> T GetRoundEndReason() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AE98))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetPrepareModeInfo() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AF8C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AF94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(CTFGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2B2AF9C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundTimeChanged() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AFBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayRoundEnd(uintptr_t P0, uintptr_t P1, uint64_t P2) {
		return ((T (*)(CTFGameInfo*, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x2B2AFC0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRoundEndReason() {
		return ((T (*)(CTFGameInfo*))(Il2CppBase() + 0x2B2AFE4))(this);
	}

};

}
