#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnUtils"));
	}

	template <typename T = bool> static T& isOpenSoldierReturnWhenReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& wait4OpenTabWhenReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& soldierReturnActivityTaskProgressReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CSActvGetBackConfReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SGetFacePictureReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SGetNewContentReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SGetDailyLoginReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SSelectTaskReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SGetTaskReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SGetBPReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActivityActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsActivityActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowFacePitcture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFacePictureRewardClaimed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTrainingSelectedReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoldierReturnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyLoginClaimButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyLoginRewardClaimedDayNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadAllCDNTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanClaimBPReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildTrainingTaskTitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildTrainingTaskContentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTaskContent2TitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostProcessTrainingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortTrainingTitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrainingTitleDataSortFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortTrainingTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrainingTaskDataSortFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEDailyTaskContentRewardStateSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSoldierReturnWhenCommonReceiveItemClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivityDSRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivityDSUnRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoldierReturnDSRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoldierReturnDSUnRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenItemDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemIconConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = void> static T CSActvGetBackConfReq() {
		return ((T (*)(void *))(Il2CppBase() + 0x2994B80))(0);
	}
	template <typename T = void> static T C2SGetFacePictureReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x2994C78))(0);
	}
	template <typename T = void> static T C2SGetNewContentReward(uint64_t id) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2994EE4))(0, id);
	}
	template <typename T = void> static T C2SGetDailyLoginReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x29950AC))(0);
	}
	template <typename T = void> static T C2SSelectTaskReward(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2995250))(0, id);
	}
	template <typename T = void> static T C2SGetTaskReward(uint64_t id) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x29954E0))(0, id);
	}
	template <typename T = void> static T C2SGetBPReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x2995698))(0);
	}
	template <typename T = bool> static T IsActivityActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x299583C))(0);
	}
	template <typename T = bool> static T IsActivityActive_1(uintptr_t* activity) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x2994E1C))(0, activity);
	}
	template <typename T = bool> static T IsShowFacePitcture() {
		return ((T (*)(void *))(Il2CppBase() + 0x2995A38))(0);
	}
	template <typename T = bool> static T IsFacePictureRewardClaimed() {
		return ((T (*)(void *))(Il2CppBase() + 0x2995AD0))(0);
	}
	template <typename T = uintptr_t> static T GetActivity() {
		return ((T (*)(void *))(Il2CppBase() + 0x29958EC))(0);
	}
	template <typename T = bool> static T IsTrainingSelectedReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x2995420))(0);
	}
	template <typename T = uintptr_t> static T GetTaskData(bool isSortTask) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2995C68))(0, isSortTask);
	}
	template <typename T = uintptr_t> static T GetSoldierReturnInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2995B84))(0);
	}
	template <typename T = uintptr_t> static T GetDailyLoginClaimButtonState() {
		return ((T (*)(void *))(Il2CppBase() + 0x29960B8))(0);
	}
	template <typename T = void> static T GetDailyLoginRewardClaimedDayNumber(uintptr_t canClaimDayNumber, uintptr_t claimedDayNumber) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29961A4))(0, canClaimDayNumber, claimedDayNumber);
	}
	template <typename T = void> static T PreloadAllCDNTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x29963B0))(0);
	}
	template <typename T = bool> static T IsCanClaimBPReward(uintptr_t isBPReady, uintptr_t isClaimed) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29966C8))(0, isBPReady, isClaimed);
	}
	template <typename T = void> static T BuildTrainingTaskTitleData(Il2CppList<uintptr_t>* groupData, Il2CppList<uintptr_t>* tasks, int32_t loginDayNum) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x2995E90))(0, groupData, tasks, loginDayNum);
	}
	template <typename T = uintptr_t> static T BuildTrainingTaskContentData(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x299688C))(0, task);
	}
	template <typename T = void> static T AddTaskContent2TitleData(Il2CppList<uintptr_t>* groupData, uintptr_t contentData, int32_t loginDayNum) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x2996A3C))(0, groupData, contentData, loginDayNum);
	}
	template <typename T = void> static T PostProcessTrainingData(uintptr_t taskDatas, bool sortTask) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2995FFC))(0, taskDatas, sortTask);
	}
	template <typename T = void> static T SortTrainingTitleData(uintptr_t taskDatas) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2996EA4))(0, taskDatas);
	}
	template <typename T = int32_t> static T TrainingTitleDataSortFunc(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2997344))(0, d1, d2);
	}
	template <typename T = void> static T SortTrainingTaskData(uintptr_t taskDatas) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2997084))(0, taskDatas);
	}
	template <typename T = int32_t> static T TrainingTaskDataSortFunc(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x299740C))(0, d1, d2);
	}
	template <typename T = int32_t> static T GetEDailyTaskContentRewardStateSort(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29974F4))(0, state);
	}
	template <typename T = void> static T OpenSoldierReturnWhenCommonReceiveItemClosed() {
		return ((T (*)(void *))(Il2CppBase() + 0x29975BC))(0);
	}
	template <typename T = void> static T ActivityDSRegisterSubscriber(uintptr_t subscriber) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2997A48))(0, subscriber);
	}
	template <typename T = void> static T ActivityDSUnRegisterSubscriber(uintptr_t subscriber) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2997B38))(0, subscriber);
	}
	template <typename T = void> static T SoldierReturnDSRegisterSubscriber(uintptr_t subscriber) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2997C28))(0, subscriber);
	}
	template <typename T = void> static T SoldierReturnDSUnRegisterSubscriber(uintptr_t subscriber) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2997D18))(0, subscriber);
	}
	template <typename T = void> static T OpenItemDetails(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2997E08))(0, itemID);
	}
	template <typename T = bool> static T GetItemIconConfig(int32_t id, uintptr_t type, uintptr_t* scale, uintptr_t* rotate) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2997F70))(0, id, type, scale, rotate);
	}
	template <typename T = bool> static T get_isOpenSoldierReturnWhenReceiveItemClose() {
		return ((T (*)(void *))(Il2CppBase() + 0x2997840))(0);
	}
	template <typename T = void> static T set_isOpenSoldierReturnWhenReceiveItemClose(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2997940))(0, value);
	}
	template <typename T = uintptr_t> static T get_wait4OpenTabWhenReceiveItemClose() {
		return ((T (*)(void *))(Il2CppBase() + 0x29978C0))(0);
	}
	template <typename T = void> static T set_wait4OpenTabWhenReceiveItemClose(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29979C4))(0, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_soldierReturnActivityTaskProgressReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x29981E4))(0);
	}
	template <typename T = void> static T set_soldierReturnActivityTaskProgressReward(Il2CppList<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2998264))(0, value);
	}

};

}
