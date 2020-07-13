#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsActivityDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsActivityDataStore"));
	}

	template <typename T = int32_t> static T& UPDATES_TOP_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& REMAIN_TIME_RED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& RIGHT_ICON_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENTRY_ICON_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENTRY_ICON_BIG_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FullDailyTaskExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& FullMainTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActivityList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_DescUpdateFlag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_DyUpdateFlag() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RedPointArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_GoToItemDetails() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bGotoActivityAfterFace() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& bHadPopupFaceWindow() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> T& SettlementActvHpV5() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasShowSettlementActv() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_SelectQuestionnaire() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_IsSwitchToCodLive() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int32_t> T& m_SwitchTopIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_SwitchLeftIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_bCanExchangeAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurExchangeItemNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateActivityDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateActivityDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityDisplayItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllRedBadget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllIsNewActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumberOneRewardActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NtfActivityUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvSelectQuestionaire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAvtvBindAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActvSelectStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinLeftTabActivityByTopIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowInCodLiveOpsView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftTabIItemsByTopNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActivityInProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopIndexList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDailyExchangeTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBadgeNumByTopIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllActivityTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLiveOpsTopMenuList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllScrollViewPlayTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRewardIsInActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignNewFishValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSignNormalValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuestBindFbValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuestBindFbActivityID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActvBpExpBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityInfoStateByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotAllowableActivity4GetAllActivityTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_RedPointArray() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3526A38))(this);
	}
	template <typename T = void> T set_RedPointArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CodLiveOpsActivityDataStore*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3526A40))(this, value);
	}
	template <typename T = bool> T get_GoToItemDetails() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3526A48))(this);
	}
	template <typename T = void> T set_GoToItemDetails(bool value) {
		return ((T (*)(CodLiveOpsActivityDataStore*, bool))(Il2CppBase() + 0x3526A50))(this, value);
	}
	template <typename T = bool> T get_bGotoActivityAfterFace() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3526A58))(this);
	}
	template <typename T = bool> T bCanExchangeAward(uintptr_t task) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x3526498))(this, task);
	}
	template <typename T = int32_t> T GetCurExchangeItemNum(uint32_t exchangeItemId) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint32_t))(Il2CppBase() + 0x3526BE4))(this, exchangeItemId);
	}
	template <typename T = void> T UpdateActivityDesc(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x3526DA0))(this, res);
	}
	template <typename T = void> T UpdateActivityDy(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x35282F4))(this, res);
	}
	template <typename T = void> T SetDy() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3527D00))(this);
	}
	template <typename T = void> T ResActivityReward(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x35283E4))(this, res);
	}
	template <typename T = uint64_t> T GetActivityDisplayItemId() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3528E48))(this);
	}
	template <typename T = int32_t> T GetAllRedBadget() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x3528F20))(this);
	}
	template <typename T = bool> T GetAllIsNewActivity() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352908C))(this);
	}
	template <typename T = uintptr_t> T GetNumberOneRewardActivity() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352A878))(this);
	}
	template <typename T = void> T NtfActivityUpdate(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352AC9C))(this, res);
	}
	template <typename T = bool> T get_SelectQuestionnaire() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352B134))(this);
	}
	template <typename T = void> T OnGetActvSelectQuestionaire(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352B13C))(this, res);
	}
	template <typename T = void> T OnGetAvtvBindAccount(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352B550))(this, res);
	}
	template <typename T = void> T OnResActvSelectStoreRate(uintptr_t res) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352B964))(this, res);
	}
	template <typename T = uintptr_t> T GetMinLeftTabActivityByTopIndex(int32_t topNum) {
		return ((T (*)(CodLiveOpsActivityDataStore*, int32_t))(Il2CppBase() + 0x352BCB4))(this, topNum);
	}
	template <typename T = bool> T IsShowInCodLiveOpsView(uintptr_t activityType) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352C224))(this, activityType);
	}
	template <typename T = bool> T GetLeftTabIItemsByTopNum(uintptr_t leftTablist, int32_t TopIndex, uintptr_t selectIndex) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x352C31C))(this, leftTablist, TopIndex, selectIndex);
	}
	template <typename T = uintptr_t> T GetActivity(int32_t TopIndex, int32_t LeftIndex) {
		return ((T (*)(CodLiveOpsActivityDataStore*, int32_t, int32_t))(Il2CppBase() + 0x352A650))(this, TopIndex, LeftIndex);
	}
	template <typename T = uintptr_t> T GetActivity_1(uintptr_t activityType) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352CD88))(this, activityType);
	}
	template <typename T = bool> T IsActivityInProgress(uintptr_t activityType) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352D0B8))(this, activityType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTopIndexList() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352D27C))(this);
	}
	template <typename T = Il2CppString*> static T GetNumFormat(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x352DA8C))(0, num);
	}
	template <typename T = void> T SetDailyExchangeTip(uint64_t activityId, uint64_t seqId, bool hightLight) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint64_t, uint64_t, bool))(Il2CppBase() + 0x352DE50))(this, activityId, seqId, hightLight);
	}
	template <typename T = int32_t> T GetBadgeNumByTopIndex(int32_t topIndex) {
		return ((T (*)(CodLiveOpsActivityDataStore*, int32_t))(Il2CppBase() + 0x352E530))(this, topIndex);
	}
	template <typename T = bool> T get_IsSwitchToCodLive() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352E6F4))(this);
	}
	template <typename T = void> T set_IsSwitchToCodLive(bool value) {
		return ((T (*)(CodLiveOpsActivityDataStore*, bool))(Il2CppBase() + 0x352E6FC))(this, value);
	}
	template <typename T = int32_t> T get_SwitchTopIndex() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352E704))(this);
	}
	template <typename T = int32_t> T get_SwitchLeftIndex() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352E70C))(this);
	}
	template <typename T = void> T SetSwitchTab(int32_t TopIndex, int32_t LeftIndex) {
		return ((T (*)(CodLiveOpsActivityDataStore*, int32_t, int32_t))(Il2CppBase() + 0x352E714))(this, TopIndex, LeftIndex);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllActivityTabs(bool inbContainEWarmUpActivity) {
		return ((T (*)(CodLiveOpsActivityDataStore*, bool))(Il2CppBase() + 0x3529278))(this, inbContainEWarmUpActivity);
	}
	template <typename T = void> T GetLiveOpsTopMenuList(uintptr_t outTopMenuList, int32_t inTopNum) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x352ED64))(this, outTopMenuList, inTopNum);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllScrollViewPlayTabs() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352F654))(this);
	}
	template <typename T = bool> T CheckRewardIsInActivity(uint32_t itemid) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint32_t))(Il2CppBase() + 0x3530518))(this, itemid);
	}
	template <typename T = bool> T IsSignNewFishValid() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352E998))(this);
	}
	template <typename T = bool> T IsSignNormalValid() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352EAE0))(this);
	}
	template <typename T = bool> T IsGuestBindFbValid() {
		return ((T (*)(CodLiveOpsActivityDataStore*))(Il2CppBase() + 0x352EC28))(this);
	}
	template <typename T = void> T SetGuestBindFbActivityID(uint64_t Id) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint64_t))(Il2CppBase() + 0x3527AA4))(this, Id);
	}
	template <typename T = void> T SetActvBpExpBuffInfo(uintptr_t activityData) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x3527BD8))(this, activityData);
	}
	template <typename T = uintptr_t> T GetActivityByID(uint64_t activityID) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint64_t))(Il2CppBase() + 0x3530AE0))(this, activityID);
	}
	template <typename T = uintptr_t> T GetActivityInfoStateByID(uint64_t activityID) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uint64_t))(Il2CppBase() + 0x3530CB8))(this, activityID);
	}
	template <typename T = bool> T IsNotAllowableActivity4GetAllActivityTabs(uintptr_t activity) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t))(Il2CppBase() + 0x352E818))(this, activity);
	}
	template <typename T = bool> static T GetNumberOneRewardActivitym__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3530E84))(0, it);
	}
	template <typename T = bool> static T GetMinLeftTabActivityByTopIndexm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3530EC0))(0, it);
	}
	template <typename T = int32_t> static T GetMinLeftTabActivityByTopIndexm__2(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3530EFC))(0, l1, l2);
	}
	template <typename T = bool> static T GetLeftTabIItemsByTopNumm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3530F64))(0, it);
	}
	template <typename T = int32_t> static T GetLeftTabIItemsByTopNumm__4(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3530FA0))(0, l1, l2);
	}
	template <typename T = int32_t> static T GetTopIndexListm__5(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3531008))(0, l1, l2);
	}
	template <typename T = int32_t> T GetAllActivityTabsm__6(uintptr_t dataA, uintptr_t dataB) {
		return ((T (*)(CodLiveOpsActivityDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x353103C))(this, dataA, dataB);
	}
	template <typename T = int32_t> static T GetAllScrollViewPlayTabsm__7(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3531350))(0, a, b);
	}

};

}
