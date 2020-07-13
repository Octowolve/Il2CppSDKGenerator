#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPPlayerInfo"));
	}

	template <typename T = bool> T& HasApplyRebornCoin() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = int32_t> T& LevelExp() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& CurrentReloadScale() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uint32_t> T& m_PVEPoint() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppList<int32_t>*> T& CurrentBuffLevelIds() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& itemId_CountDic() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& m_CanLocalPlayerSelfRevival() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = int32_t> static T& TOTAL_AUTO_REVIVAL_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_AutoRevivalCountDownTime() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = float> T& m_AutoRevivalCountDownTimeCache() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = bool> T& m_CanBeUsedRevivalCoin() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = int32_t> T& GameMoneyChangeTimes() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = uint32_t> T& m_CurrentGameMoneyCount() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uint32_t> T& m_CurrentTotalRevivalCoinCount() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uint32_t> T& m_CurrentFreeRevivalCoinCount() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uint32_t> T& m_remaingLimitRevivalCoinCount() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = uint32_t> T& m_limitRevivalCoinCount() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uint32_t> T& m_GamePointBuffScale() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = uint32_t> T& m_PlayerRevivalTimes() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = float> T& m_BossDamage() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = uint32_t> T& m_BossDamagePercent() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = uint32_t> T& m_RescuedCount() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = uint32_t> T& m_BuyLevelUpTimes() {
		return *(T*)((uintptr_t)this + 0x360);
	}
	template <typename T = uint32_t> T& InGameLevel() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = uint32_t> T& InGamePoint() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> T& m_LastPickUpWeaponInfo() {
		return *(T*)((uintptr_t)this + 0x36C);
	}
	template <typename T = uint32_t> T& m_twineTargetUIN() {
		return *(T*)((uintptr_t)this + 0x370);
	}
	template <typename T = uint32_t> T& m_ControllingActorId() {
		return *(T*)((uintptr_t)this + 0x374);
	}
	template <typename T = uint32_t> T& m_cerberusHeadState() {
		return *(T*)((uintptr_t)this + 0x378);
	}
	template <typename T = uint32_t> T& m_angryState() {
		return *(T*)((uintptr_t)this + 0x37C);
	}
	template <typename T = uint32_t> T& m_fastenActorID() {
		return *(T*)((uintptr_t)this + 0x380);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVE_MP_MPPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMissionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMissionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMissionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMissionItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerDiamondChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecreaseSkillItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffLevelIDGhanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPerkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> static T AutoGen_Copy_PVE_MP_MPPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x462311C))(0, src, dest);
	}
	template <typename T = uint32_t> T get_PVEPoint() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x461330C))(this);
	}
	template <typename T = void> T set_PVEPoint(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613304))(this, value);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T get_ItemId_CountDic() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623658))(this);
	}
	template <typename T = void> T AddMissionItem(int32_t id) {
		return ((T (*)(MPPlayerInfo*, int32_t))(Il2CppBase() + 0x4623660))(this, id);
	}
	template <typename T = bool> T RemoveMissionItem(int32_t id) {
		return ((T (*)(MPPlayerInfo*, int32_t))(Il2CppBase() + 0x462381C))(this, id);
	}
	template <typename T = void> T ClearMissionItem(int32_t id) {
		return ((T (*)(MPPlayerInfo*, int32_t))(Il2CppBase() + 0x4623A18))(this, id);
	}
	template <typename T = int32_t> T GetMissionItemCount(int32_t id) {
		return ((T (*)(MPPlayerInfo*, int32_t))(Il2CppBase() + 0x4623D0C))(this, id);
	}
	template <typename T = bool> T get_CanLocalPlayerSelfRevival() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E2C))(this);
	}
	template <typename T = void> T set_CanLocalPlayerSelfRevival(bool value) {
		return ((T (*)(MPPlayerInfo*, bool))(Il2CppBase() + 0x4612BFC))(this, value);
	}
	template <typename T = float> T get_AutoRevivalCountDownTime() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4612DD0))(this);
	}
	template <typename T = void> T set_AutoRevivalCountDownTime(float value) {
		return ((T (*)(MPPlayerInfo*, float))(Il2CppBase() + 0x4612DC8))(this, value);
	}
	template <typename T = float> T get_AutoRevivalCountDownTimeCache() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46186FC))(this);
	}
	template <typename T = void> T set_AutoRevivalCountDownTimeCache(float value) {
		return ((T (*)(MPPlayerInfo*, float))(Il2CppBase() + 0x4612DD8))(this, value);
	}
	template <typename T = bool> T get_CanBeUsedRevivalCoin() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E34))(this);
	}
	template <typename T = void> T set_CanBeUsedRevivalCoin(bool value) {
		return ((T (*)(MPPlayerInfo*, bool))(Il2CppBase() + 0x4612BF4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentGameMoneyCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x461698C))(this);
	}
	template <typename T = void> T set_CurrentGameMoneyCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4612DA4))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentTotalRevivalCoinCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E3C))(this);
	}
	template <typename T = void> T set_CurrentTotalRevivalCoinCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x461346C))(this, value);
	}
	template <typename T = uint32_t> T get_CurrentFreeRevivalCoinCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E44))(this);
	}
	template <typename T = void> T set_CurrentFreeRevivalCoinCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613474))(this, value);
	}
	template <typename T = uint32_t> T get_remaingLimitReviveCoinCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E4C))(this);
	}
	template <typename T = void> T set_remaingLimitReviveCoinCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x461353C))(this, value);
	}
	template <typename T = uint32_t> T get_limitRevivalCoinCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E54))(this);
	}
	template <typename T = void> T set_limitRevivalCoinCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x46135EC))(this, value);
	}
	template <typename T = uint32_t> T get_GamePointBuffScale() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E5C))(this);
	}
	template <typename T = void> T set_GamePointBuffScale(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613524))(this, value);
	}
	template <typename T = uint32_t> T get_PlayerRevivalTimes() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E64))(this);
	}
	template <typename T = void> T set_PlayerRevivalTimes(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4612DC0))(this, value);
	}
	template <typename T = float> T get_BossDamage() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E6C))(this);
	}
	template <typename T = void> T set_BossDamage(float value) {
		return ((T (*)(MPPlayerInfo*, float))(Il2CppBase() + 0x4612DE0))(this, value);
	}
	template <typename T = uint32_t> T get_BossDamagePercent() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623E74))(this);
	}
	template <typename T = void> T set_BossDamagePercent(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4623E7C))(this, value);
	}
	template <typename T = uint32_t> T get_RescuedCount() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x462401C))(this);
	}
	template <typename T = void> T set_RescuedCount(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613944))(this, value);
	}
	template <typename T = float> T get_AttackScale() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4624024))(this);
	}
	template <typename T = void> T set_AttackScale(float value) {
		return ((T (*)(MPPlayerInfo*, float))(Il2CppBase() + 0x462402C))(this, value);
	}
	template <typename T = uint32_t> T get_BuyLevelUpTimes() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241AC))(this);
	}
	template <typename T = void> T set_BuyLevelUpTimes(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x461304C))(this, value);
	}
	template <typename T = uint32_t> T get_InGameLevel() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623648))(this);
	}
	template <typename T = void> T set_InGameLevel(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x461352C))(this, value);
	}
	template <typename T = uint32_t> T get_InGamePoint() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4623650))(this);
	}
	template <typename T = void> T set_InGamePoint(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613534))(this, value);
	}
	template <typename T = uintptr_t> T get_LastPickUpWeaponInfo() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241B4))(this);
	}
	template <typename T = void> T set_LastPickUpWeaponInfo(uintptr_t value) {
		return ((T (*)(MPPlayerInfo*, uintptr_t))(Il2CppBase() + 0x460C42C))(this, value);
	}
	template <typename T = uint32_t> T get_twineTargetUIN() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241BC))(this);
	}
	template <typename T = void> T set_twineTargetUIN(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x461394C))(this, value);
	}
	template <typename T = uint32_t> T get_ControllingActorID() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241C4))(this);
	}
	template <typename T = void> T set_ControllingActorID(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613AEC))(this, value);
	}
	template <typename T = uint32_t> T get_cerberusHeadState() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241CC))(this);
	}
	template <typename T = void> T set_cerberusHeadState(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x46135F4))(this, value);
	}
	template <typename T = uint32_t> T get_angryState() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241D4))(this);
	}
	template <typename T = void> T set_angryState(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613794))(this, value);
	}
	template <typename T = uint32_t> T get_fastenActorID() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241DC))(this);
	}
	template <typename T = void> T set_fastenActorID(uint32_t value) {
		return ((T (*)(MPPlayerInfo*, uint32_t))(Il2CppBase() + 0x4613AF4))(this, value);
	}
	template <typename T = void> T UpdateExp() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4612FB4))(this);
	}
	template <typename T = void> T OnLocalPlayerDiamondChanged() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x46241E4))(this);
	}
	template <typename T = void> T DecreaseSkillItemCount(uint64_t inItemID) {
		return ((T (*)(MPPlayerInfo*, uint64_t))(Il2CppBase() + 0x4622B0C))(this, inItemID);
	}
	template <typename T = void> T OnPlayerStateChanged(uintptr_t oldState) {
		return ((T (*)(MPPlayerInfo*, uintptr_t))(Il2CppBase() + 0x46242D4))(this, oldState);
	}
	template <typename T = void> T OnBuffLevelIDGhanged(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(MPPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x460EE38))(this, ids);
	}
	template <typename T = void> T OnSyncPerkInfo(bool addOrDelete, int32_t perkID, int32_t posIdx) {
		return ((T (*)(MPPlayerInfo*, bool, int32_t, int32_t))(Il2CppBase() + 0x46248D4))(this, addOrDelete, perkID, posIdx);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerDiamondChanged() {
		return ((T (*)(MPPlayerInfo*))(Il2CppBase() + 0x4624C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(MPPlayerInfo*, uintptr_t))(Il2CppBase() + 0x4624C78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPerkInfo(bool P0, int32_t P1, int32_t P2) {
		return ((T (*)(MPPlayerInfo*, bool, int32_t, int32_t))(Il2CppBase() + 0x4624C80))(this, P0, P1, P2);
	}

};

}
