#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsActivitySystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsActivitySystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Cookie() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Indexl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CSActvGetDescRes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& batchRewardRes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint64_t, uint64_t>*> T& batchRewardReqs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bBatchRewardsOn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AvtivityFlag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBatchShowRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBatchShowRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchShowRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCodLiveOpsActivityDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResCodLiveOpsActivityDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergeCodLiveOpsActivityDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCodLiveOpsActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResCodLiveOpsActivityDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqCodLiveOpsActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResCodLiveOpsActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFakePropActv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityFakeProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfCodLiveOpsActivityUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActvSelectQuestionaire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvSelectQuestionaire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvBindAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActvSelectStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResActvSelectStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTaskValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskTabFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseTabMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordNewActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoolByActivityId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LiveOpsGoToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LiveOpsItemIdGoDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = bool> static T get_bLiveOpsUI_CA() {
		return ((T (*)(void *))(Il2CppBase() + 0x3526BA8))(0);
	}
	template <typename T = bool> static T get_bLiveOpsUI_Pillar() {
		return ((T (*)(void *))(Il2CppBase() + 0x352F64C))(0);
	}
	template <typename T = void> T StartBatchShowRewards() {
		return ((T (*)(LiveOpsActivitySystemAssist*))(Il2CppBase() + 0x3563AF0))(this);
	}
	template <typename T = void> T EndBatchShowRewards() {
		return ((T (*)(LiveOpsActivitySystemAssist*))(Il2CppBase() + 0x3563C28))(this);
	}
	template <typename T = bool> T BatchShowRewards(uintptr_t res) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x3564144))(this, res);
	}
	template <typename T = void> T ReqCodLiveOpsActivityDesc() {
		return ((T (*)(LiveOpsActivitySystemAssist*))(Il2CppBase() + 0x35645D8))(this);
	}
	template <typename T = bool> T ResCodLiveOpsActivityDesc(uintptr_t Msg, uintptr_t* errStr) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3564740))(this, Msg, errStr);
	}
	template <typename T = void> T MergeCodLiveOpsActivityDesc(uintptr_t res) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x35649D8))(this, res);
	}
	template <typename T = void> T ReqCodLiveOpsActivityData() {
		return ((T (*)(LiveOpsActivitySystemAssist*))(Il2CppBase() + 0x3564C88))(this);
	}
	template <typename T = bool> T ResCodLiveOpsActivityDy(uintptr_t Msg, uintptr_t* errStr) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3564DB8))(this, Msg, errStr);
	}
	template <typename T = void> T ReqCodLiveOpsActivityReward(uint64_t actvId, uintptr_t awardType, uintptr_t awardLayer, uint64_t itemId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t, uintptr_t, uintptr_t, uint64_t))(Il2CppBase() + 0x35363B8))(this, actvId, awardType, awardLayer, itemId);
	}
	template <typename T = bool> T ResCodLiveOpsActivityReward(uintptr_t Msg, uintptr_t* err) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x35650A4))(this, Msg, err);
	}
	template <typename T = uintptr_t> T GetFakePropActv(uint64_t actvId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t))(Il2CppBase() + 0x3565480))(this, actvId);
	}
	template <typename T = uintptr_t> T GetActivityFakeProp(uintptr_t actv, uint64_t taskSeqId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t, uint64_t))(Il2CppBase() + 0x35655C4))(this, actv, taskSeqId);
	}
	template <typename T = bool> T OnNtfCodLiveOpsActivityUpdate(uintptr_t Msg) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x3565840))(this, Msg);
	}
	template <typename T = void> T ReqActvSelectQuestionaire(uint64_t activityId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t))(Il2CppBase() + 0x354C8A4))(this, activityId);
	}
	template <typename T = bool> T OnGetActvSelectQuestionaire(uintptr_t Msg) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x3565AE0))(this, Msg);
	}
	template <typename T = bool> T OnGetActvBindAccount(uintptr_t Msg) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x3565E04))(this, Msg);
	}
	template <typename T = void> T ReqActvSelectStoreRate(uint64_t activityId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t))(Il2CppBase() + 0x3566128))(this, activityId);
	}
	template <typename T = bool> T ResActvSelectStoreRate(uintptr_t Msg) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t))(Il2CppBase() + 0x3566380))(this, Msg);
	}
	template <typename T = bool> T IsTaskValid(Il2CppString* stTabFlagMask, uintptr_t task, uintptr_t actvType) {
		return ((T (*)(LiveOpsActivitySystemAssist*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35667D0))(this, stTabFlagMask, task, actvType);
	}
	template <typename T = int32_t> T GetTaskTabFlag(uintptr_t task, uintptr_t actvType) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3566910))(this, task, actvType);
	}
	template <typename T = int32_t> T ParseTabMask(Il2CppString* stTabFlagMask, int32_t nTabFlag) {
		return ((T (*)(LiveOpsActivitySystemAssist*, Il2CppString*, int32_t))(Il2CppBase() + 0x3566A80))(this, stTabFlagMask, nTabFlag);
	}
	template <typename T = void> T RecordNewActivity(uint64_t ActivityId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t))(Il2CppBase() + 0x3566C88))(this, ActivityId);
	}
	template <typename T = bool> T GetBoolByActivityId(uint64_t activityId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, uint64_t))(Il2CppBase() + 0x3566EC4))(this, activityId);
	}
	template <typename T = void> T LiveOpsGoToView(int32_t GoPos, int32_t SecondTab, int32_t ThirdTab, Il2CppString* url, bool bEvent) {
		return ((T (*)(LiveOpsActivitySystemAssist*, int32_t, int32_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x35393C8))(this, GoPos, SecondTab, ThirdTab, url, bEvent);
	}
	template <typename T = void> T LiveOpsItemIdGoDetails(int32_t ItemId) {
		return ((T (*)(LiveOpsActivitySystemAssist*, int32_t))(Il2CppBase() + 0x353F2F0))(this, ItemId);
	}

};

}
