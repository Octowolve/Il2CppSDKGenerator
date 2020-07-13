#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& curBpFrom() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_BattlePassDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _battlePassConf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& curItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& MAX_PAGE_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& ProtocalIndexMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CurChargeType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& Per_PageCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ComicProtocalData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& CurrentLanguageCode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsFirstReqComicData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProtocalStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToRequestAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLevelAwardWhenCrossSeasonOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoReqLevelupAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoReqChargeLevelupAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProtocalIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBattlePassGetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResBattlePassGetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBattlePassUpdateDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResBattlePassUpdateDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BattlePassGetAwardError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBattlePassGetAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResBattlePassGetAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearReceiveNewItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBattlePassCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResBattlePassCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportSettlementBPData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelUpType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfBattlePassUpdateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfBattlePassUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncrementUpdateDatabase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckErrCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CSBattlePassGetConfReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CSBattlePassGetConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CSBattlePassGetComicReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CSBattlePassGetComicRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetComicProtocalIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T get_BattlePassDS() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x3253C10))(this);
	}
	template <typename T = uintptr_t> T get_BattlePassConf() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x3253CC0))(this);
	}
	template <typename T = void> T CheckProtocalStatus(uintptr_t tabType) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x3253D70))(this, tabType);
	}
	template <typename T = void> T StartToRequestAllData() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x3254388))(this);
	}
	template <typename T = void> T ReqLevelAwardWhenCrossSeasonOnline() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x32548E4))(this);
	}
	template <typename T = bool> T AutoReqLevelupAward(int32_t curLevel) {
		return ((T (*)(BattlePassAgent*, int32_t))(Il2CppBase() + 0x3254D98))(this, curLevel);
	}
	template <typename T = bool> T AutoReqChargeLevelupAward(int32_t curLevel) {
		return ((T (*)(BattlePassAgent*, int32_t))(Il2CppBase() + 0x325506C))(this, curLevel);
	}
	template <typename T = void> T ResetProtocalIndex(bool isAll, uintptr_t type) {
		return ((T (*)(BattlePassAgent*, bool, uintptr_t))(Il2CppBase() + 0x3254470))(this, isAll, type);
	}
	template <typename T = void> T ReqBattlePassGetData(uintptr_t type) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x3254110))(this, type);
	}
	template <typename T = bool> T ResBattlePassGetData(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x3255368))(this, message);
	}
	template <typename T = void> T ReqBattlePassUpdateDailyTask(uintptr_t taskType) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x3257A68))(this, taskType);
	}
	template <typename T = bool> T ResBattlePassUpdateDailyTask(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x3257C5C))(this, message);
	}
	template <typename T = void> T T_BattlePassGetAwardError() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x32586A8))(this);
	}
	template <typename T = bool> T ReqBattlePassGetAward(uintptr_t awardType, int32_t awardId, int32_t extraAwardId) {
		return ((T (*)(BattlePassAgent*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3254A00))(this, awardType, awardId, extraAwardId);
	}
	template <typename T = bool> T ResBattlePassGetAward(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x325886C))(this, message);
	}
	template <typename T = void> T ClearReceiveNewItemList() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x32590D0))(this);
	}
	template <typename T = void> T ReqBattlePassCharge(uintptr_t chargeType, int32_t mId, int32_t m_dst_level, uint32_t voucher_id) {
		return ((T (*)(BattlePassAgent*, uintptr_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x32594C8))(this, chargeType, mId, m_dst_level, voucher_id);
	}
	template <typename T = bool> T ResBattlePassCharge(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x32597B0))(this, message);
	}
	template <typename T = void> T ReportSettlementBPData(int32_t chargeType, uint32_t saleTicket) {
		return ((T (*)(BattlePassAgent*, int32_t, uint32_t))(Il2CppBase() + 0x3259FC4))(this, chargeType, saleTicket);
	}
	template <typename T = void> T SetLevelUpType(int32_t chargeType) {
		return ((T (*)(BattlePassAgent*, int32_t))(Il2CppBase() + 0x3259DC4))(this, chargeType);
	}
	template <typename T = bool> T NtfBattlePassUpdateLevel(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x325A2B4))(this, message);
	}
	template <typename T = bool> T NtfBattlePassUpdateData(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x325A6F8))(this, message);
	}
	template <typename T = void> T ResetAllData() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x325A9E0))(this);
	}
	template <typename T = bool> T IncrementUpdateDatabase(uintptr_t btDB, int32_t charge_type, bool bFromUpdateDataNtf) {
		return ((T (*)(BattlePassAgent*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3257EF0))(this, btDB, charge_type, bFromUpdateDataNtf);
	}
	template <typename T = bool> T CheckErrCode(int32_t err, uintptr_t res) {
		return ((T (*)(BattlePassAgent*, int32_t, uintptr_t))(Il2CppBase() + 0x3255D48))(this, err, res);
	}
	template <typename T = void> T ShowCommonTip(Il2CppString* text) {
		return ((T (*)(BattlePassAgent*, Il2CppString*))(Il2CppBase() + 0x325AD9C))(this, text);
	}
	template <typename T = void> T CSBattlePassGetConfReq() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x325B058))(this);
	}
	template <typename T = bool> T CSBattlePassGetConfRes(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x325B188))(this, message);
	}
	template <typename T = void> T CSBattlePassGetComicReq(int32_t languageCode) {
		return ((T (*)(BattlePassAgent*, int32_t))(Il2CppBase() + 0x325B518))(this, languageCode);
	}
	template <typename T = bool> T CSBattlePassGetComicRes(uintptr_t message) {
		return ((T (*)(BattlePassAgent*, uintptr_t))(Il2CppBase() + 0x325B794))(this, message);
	}
	template <typename T = void> T ResetComicProtocalIndex() {
		return ((T (*)(BattlePassAgent*))(Il2CppBase() + 0x325CC58))(this);
	}

};

}
