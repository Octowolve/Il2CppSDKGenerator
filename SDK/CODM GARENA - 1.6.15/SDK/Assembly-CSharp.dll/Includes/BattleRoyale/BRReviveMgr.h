#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRReviveMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRReviveMgr"));
	}

	template <typename T = float> T& m_TotalPropDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_AirplaneNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_MaxAirplaneNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_LastBroadAirplaneNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_NextAirplaneTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_NextAirplaneTotalWaitTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllCardsInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_LocalPlayerLastSynUseId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerCtrInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerUsingReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardInfoByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBeingPickedup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBroadMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickUpIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClentUseReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClentUseReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerTryReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerBreakReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalPlayerStateCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerCanReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocalPlayerSate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBreakReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAirplaneNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAirplaneCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllPickUpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSynCardItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndUseReviveCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAircraftDetachPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeammateRequestHelpPick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BreakReviveTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReviveTeammateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsSelfDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1C6D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1C86C))(this);
	}
	template <typename T = int32_t> T get_AirplaneNum() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1CA60))(this);
	}
	template <typename T = float> T get_NextAirplaneCountDown() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1CA68))(this);
	}
	template <typename T = float> T get_NextAirplaneTotalWaitTime() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1CA90))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AllCardsInfo() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1CA98))(this);
	}
	template <typename T = float> T get_RealTime() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1B9A0))(this);
	}
	template <typename T = bool> T IsLocalPlayerUsingReviveCard() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1CAA0))(this);
	}
	template <typename T = uintptr_t> T GetPlayerCardInfo(uint32_t player) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1ACD5CC))(this, player);
	}
	template <typename T = uintptr_t> T GetCardInfoByActorID(uint32_t actorID) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1CD94))(this, actorID);
	}
	template <typename T = uintptr_t> T GetPlayerState(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1ACB368))(this, playerId);
	}
	template <typename T = bool> T HasBeingPickedup(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1CF20))(this, playerId);
	}
	template <typename T = void> T ClearAllInfo() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1C910))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRReviveMgr*, float))(Il2CppBase() + 0x1B1D010))(this, deltaTime);
	}
	template <typename T = void> T CheckBroadMsg() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1D504))(this);
	}
	template <typename T = int32_t> T GetPickUpIdx(uint32_t playerId, uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x1B1D960))(this, playerId, targetId);
	}
	template <typename T = bool> T IsClentUseReviveCard() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1DAFC))(this);
	}
	template <typename T = void> T SetClentUseReviveCard(bool isUse) {
		return ((T (*)(BRReviveMgr*, bool))(Il2CppBase() + 0x1B1DC34))(this, isUse);
	}
	template <typename T = void> T LocalPlayerTryReviveTeammate(uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1DD6C))(this, targetId);
	}
	template <typename T = void> T LocalPlayerBreakReviveTeammate() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1DE3C))(this);
	}
	template <typename T = void> T LocalPlayerStateCheck() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1D434))(this);
	}
	template <typename T = bool> T IsLocalPlayerCanReviveTeammate(uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1E594))(this, targetId);
	}
	template <typename T = bool> T CheckLocalPlayerSate() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B1E19C))(this);
	}
	template <typename T = void> T SyncReviveTeammate(uint32_t targeId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1DF20))(this, targeId);
	}
	template <typename T = void> T SyncBreakReviveTeammate(uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1DFE4))(this, targetId);
	}
	template <typename T = void> T OnSyncAirplaneNum(int32_t num) {
		return ((T (*)(BRReviveMgr*, int32_t))(Il2CppBase() + 0x1B1E6D8))(this, num);
	}
	template <typename T = void> T OnSyncAirplaneCountDown(int32_t value) {
		return ((T (*)(BRReviveMgr*, int32_t))(Il2CppBase() + 0x1B1E7D0))(this, value);
	}
	template <typename T = void> T OnCardDrop(uint32_t playerId, int32_t actorId, Il2CppVector3 position, int32_t duration) {
		return ((T (*)(BRReviveMgr*, uint32_t, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x1B1E8DC))(this, playerId, actorId, position, duration);
	}
	template <typename T = void> T OnPickUpCard(uint32_t playerId, uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x1B1EF9C))(this, playerId, targetId);
	}
	template <typename T = void> T ClearAllPickUpCard(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1F40C))(this, playerId);
	}
	template <typename T = void> T OnSynCardItemInfo(uintptr_t type, uint32_t playerId, uint32_t targetId, bool isSuccess) {
		return ((T (*)(BRReviveMgr*, uintptr_t, uint32_t, uint32_t, bool))(Il2CppBase() + 0x1B1F580))(this, type, playerId, targetId, isSuccess);
	}
	template <typename T = void> T OnUseReviveCard(unsigned char result, uint32_t playerId, uint32_t targetId, int32_t createTime, int32_t useTime) {
		return ((T (*)(BRReviveMgr*, unsigned char, uint32_t, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x1B1F714))(this, result, playerId, targetId, createTime, useTime);
	}
	template <typename T = void> T OnEndUseReviveCard(unsigned char result, uint32_t playerId, uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, unsigned char, uint32_t, uint32_t))(Il2CppBase() + 0x1B1FCC8))(this, result, playerId, targetId);
	}
	template <typename T = void> T OnDoRevive(uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B20300))(this, targetId);
	}
	template <typename T = void> T OnAircraftDetachPawn(uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B203E4))(this, targetId);
	}
	template <typename T = void> T OnNotifyTeammateRequestHelpPick(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B204B4))(this, playerId);
	}
	template <typename T = uintptr_t> T GetCardInfo(uint32_t playerId, bool isAutoCreat, uintptr_t defState) {
		return ((T (*)(BRReviveMgr*, uint32_t, bool, uintptr_t))(Il2CppBase() + 0x1B1CB5C))(this, playerId, isAutoCreat, defState);
	}
	template <typename T = uint32_t> T GetSeatIndex(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1D61C))(this, playerId);
	}
	template <typename T = void> T BreakReviveTeammate(uint32_t playerId, uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x1B1E0B8))(this, playerId, targetId);
	}
	template <typename T = void> T ReviveTeammateSuccess(uint32_t playerId, uint32_t targetId) {
		return ((T (*)(BRReviveMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x1B1FE48))(this, playerId, targetId);
	}
	template <typename T = void> T PlayAnim(uint32_t playerId, float playTime) {
		return ((T (*)(BRReviveMgr*, uint32_t, float))(Il2CppBase() + 0x1B1FB18))(this, playerId, playTime);
	}
	template <typename T = void> T StopAnim(uint32_t playerId) {
		return ((T (*)(BRReviveMgr*, uint32_t))(Il2CppBase() + 0x1B1D7C8))(this, playerId);
	}
	template <typename T = void> T CheckIsSelfDrop(uintptr_t info) {
		return ((T (*)(BRReviveMgr*, uintptr_t))(Il2CppBase() + 0x1B1ED80))(this, info);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRReviveMgr*, uintptr_t, bool))(Il2CppBase() + 0x1B20604))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B206D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B20794))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRReviveMgr*))(Il2CppBase() + 0x1B2079C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRReviveMgr*, float))(Il2CppBase() + 0x1B207A4))(this, P0);
	}

};

}
