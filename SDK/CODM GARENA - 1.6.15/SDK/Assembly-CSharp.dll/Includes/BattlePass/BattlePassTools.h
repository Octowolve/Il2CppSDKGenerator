#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassTools"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CurShowWeekId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SuperBoxID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& IsTurnToMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& DefaultType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LeveUpType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CurrentSpChargeConf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CurSortType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_dst_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ComicRedPointString() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& DailayTaskIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& UINewVersion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRmbView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPModeTypeById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPModeTypeByTaskType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPModeTextByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLevelAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTimeFormat_out() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTimeFormat_in() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBpSeasonResReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPSeasonUIConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurSeasonGo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBPSeasonUILabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelByConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpSeasonUILabelConfigList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPIntroduceNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpSeasonSpecialUIConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonSpecialUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPVoucherList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHaveAvailableBPVoucher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBPVoucherConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoucherEndRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoucherEndTimeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassTaskEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDataCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPChargePrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurSeasonIdByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBattlePassUINewVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = bool> static T ShowRmbView() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C3EC1C))(0);
	}
	template <typename T = uintptr_t> T GetBPModeTypeById(int32_t csvId) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C3ECE4))(this, csvId);
	}
	template <typename T = uintptr_t> T GetBPModeTypeByTaskType(uintptr_t taskType) {
		return ((T (*)(BattlePassTools*, uintptr_t))(Il2CppBase() + 0x2C3EDD0))(this, taskType);
	}
	template <typename T = Il2CppString*> T GetBPModeTextByType(uintptr_t type) {
		return ((T (*)(BattlePassTools*, uintptr_t))(Il2CppBase() + 0x2C3EED0))(this, type);
	}
	template <typename T = void> T CheckBattlePassConf() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C3F034))(this);
	}
	template <typename T = uintptr_t> T GetCurLevelAward(int32_t Level) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C066AC))(this, Level);
	}
	template <typename T = Il2CppString*> T GetSeasonName(int32_t mSeasonId) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C3F170))(this, mSeasonId);
	}
	template <typename T = uintptr_t> T ChangeTimeFormat_out(int32_t time) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C3F400))(this, time);
	}
	template <typename T = uintptr_t> T ChangeTimeFormat_in(int32_t time) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C3F640))(this, time);
	}
	template <typename T = bool> T IsInLimitTime(uintptr_t ChargeConf) {
		return ((T (*)(BattlePassTools*, uintptr_t))(Il2CppBase() + 0x2C3F878))(this, ChargeConf);
	}
	template <typename T = bool> T CheckBpSeasonResReady() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C34CC0))(this);
	}
	template <typename T = Il2CppString*> T GetBPSeasonUIConf(int32_t season_id, uintptr_t type) {
		return ((T (*)(BattlePassTools*, int32_t, uintptr_t))(Il2CppBase() + 0x2C13124))(this, season_id, type);
	}
	template <typename T = uintptr_t> T GetCurSeasonGo(int32_t season_id, uintptr_t root) {
		return ((T (*)(BattlePassTools*, int32_t, uintptr_t))(Il2CppBase() + 0x2C3FD80))(this, season_id, root);
	}
	template <typename T = void> T SetBPSeasonUILabel(uintptr_t labelRoot, uintptr_t labelSample, uintptr_t type, int32_t season_id) {
		return ((T (*)(BattlePassTools*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C40068))(this, labelRoot, labelSample, type, season_id);
	}
	template <typename T = void> T SetLabelByConf(uintptr_t label, uintptr_t conf) {
		return ((T (*)(BattlePassTools*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C40820))(this, label, conf);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSpSeasonUILabelConfigList(int32_t season_id, uintptr_t type) {
		return ((T (*)(BattlePassTools*, int32_t, uintptr_t))(Il2CppBase() + 0x2C405C8))(this, season_id, type);
	}
	template <typename T = int32_t> T GetBPIntroduceNum(int32_t season_id) {
		return ((T (*)(BattlePassTools*, int32_t))(Il2CppBase() + 0x2C40BD4))(this, season_id);
	}
	template <typename T = uintptr_t> T GetSpSeasonSpecialUIConf(uintptr_t type, int32_t season_id) {
		return ((T (*)(BattlePassTools*, uintptr_t, int32_t))(Il2CppBase() + 0x2C40E30))(this, type, season_id);
	}
	template <typename T = void> T SetSeasonSpecialUI(uintptr_t go, uintptr_t type, int32_t season_id) {
		return ((T (*)(BattlePassTools*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C41014))(this, go, type, season_id);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetBPVoucherList() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C2D068))(this);
	}
	template <typename T = bool> T CheckHaveAvailableBPVoucher() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C41408))(this);
	}
	template <typename T = bool> T CheckBPVoucherConf(uintptr_t conf) {
		return ((T (*)(BattlePassTools*, uintptr_t))(Il2CppBase() + 0x2C41278))(this, conf);
	}
	template <typename T = int32_t> T GetVoucherEndRemainTime(Il2CppString* strEndTime) {
		return ((T (*)(BattlePassTools*, Il2CppString*))(Il2CppBase() + 0x2C4170C))(this, strEndTime);
	}
	template <typename T = Il2CppString*> T GetVoucherEndTimeStr(Il2CppString* strEndTime) {
		return ((T (*)(BattlePassTools*, Il2CppString*))(Il2CppBase() + 0x2C2CF38))(this, strEndTime);
	}
	template <typename T = bool> T CheckBattlePassTaskEnable() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C13660))(this);
	}
	template <typename T = bool> T CheckDataCache() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C03BDC))(this);
	}
	template <typename T = int32_t> T GetBPChargePrice(int32_t charge_type, uint32_t voucher_id) {
		return ((T (*)(BattlePassTools*, int32_t, uint32_t))(Il2CppBase() + 0x2C41A8C))(this, charge_type, voucher_id);
	}
	template <typename T = int32_t> T GetCurSeasonIdByClient() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C12E68))(this);
	}
	template <typename T = bool> T CheckBattlePassUINewVersion() {
		return ((T (*)(BattlePassTools*))(Il2CppBase() + 0x2C341DC))(this);
	}
	template <typename T = int32_t> static T GetBPVoucherListm__0(uint32_t a, uint32_t b) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x2C41F08))(0, a, b);
	}

};

}
