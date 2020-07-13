#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsActivityBatchTaskRewardsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsActivityBatchTaskRewardsController"));
	}

	template <typename T = uintptr_t> T& m_rewardGatesView() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumberString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPointsAndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshActivityRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchShowRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RewardClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3561BBC))(this);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3561D40))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3561DD8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*, uintptr_t, int32_t))(Il2CppBase() + 0x3561EA0))(this, list, userContext);
	}
	template <typename T = void> T DelayInit() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3561F54))(this);
	}
	template <typename T = void> static T RefreshRewardList(uintptr_t view, uintptr_t easyListCtr, uint32_t uCurrentPoint, double fActivityEndTime, Il2CppList<uintptr_t>* tasks, bool bDisplayInShareWindow) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, double, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x35621E4))(0, view, easyListCtr, uCurrentPoint, fActivityEndTime, tasks, bDisplayInShareWindow);
	}
	template <typename T = Il2CppString*> static T GetNumberString(uint32_t uNumber) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x35629FC))(0, uNumber);
	}
	template <typename T = void> static T RefreshPointsAndState(uintptr_t view, uint32_t uCurrentPoint, Il2CppList<uintptr_t>* tasks) {
		return ((T (*)(void *, uintptr_t, uint32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3562C8C))(0, view, uCurrentPoint, tasks);
	}
	template <typename T = void> static T RefreshActivityRewards(uintptr_t view, double fActivityEndTime, Il2CppList<uintptr_t>* tasks) {
		return ((T (*)(void *, uintptr_t, double, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3562FEC))(0, view, fActivityEndTime, tasks);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x35633C4))(this);
	}
	template <typename T = void> T TickCallback(float dt) {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*, float))(Il2CppBase() + 0x35634B8))(this, dt);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563558))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563904))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563A28))(this);
	}
	template <typename T = void> T BatchShowRewards() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563604))(this);
	}
	template <typename T = void> T RewardClaimClick(uintptr_t param) {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*, uintptr_t))(Il2CppBase() + 0x3563CFC))(this, param);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563FA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskRewardsController*))(Il2CppBase() + 0x3563FAC))(this);
	}

};

}
