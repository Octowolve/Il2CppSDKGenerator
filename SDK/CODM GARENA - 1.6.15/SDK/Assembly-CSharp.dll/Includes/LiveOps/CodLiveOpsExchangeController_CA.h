#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsExchangeControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsExchangeController_CA"));
	}

	template <typename T = uintptr_t> T& m_View_CA() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LeftDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mNormalTask() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TaskSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDailyTaskExchangeRewardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDailyTaskExchangeTipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353A3F4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353B11C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353B1C0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353B3FC))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x353B598))(this, activity, bInit);
	}
	template <typename T = void> T SetMTask(Il2CppList<uintptr_t>* SortTasks) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x353BA54))(this, SortTasks);
	}
	template <typename T = int32_t> T TaskSort(uintptr_t task1, uintptr_t task2) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x353BC78))(this, task1, task2);
	}
	template <typename T = void> T OnDailyTaskExchangeRewardClick(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t))(Il2CppBase() + 0x353BEE0))(this, Msg);
	}
	template <typename T = void> T OnDailyTaskExchangeTipClick(uintptr_t Msg) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t))(Il2CppBase() + 0x353C080))(this, Msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x353C238))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x353C300))(this, list, userContext);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353A828))(this);
	}
	template <typename T = void> T UpdateViewm__0(uintptr_t x) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t))(Il2CppBase() + 0x353C8EC))(this, x);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353C98C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353C990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353CA34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsExchangeControllerCA*))(Il2CppBase() + 0x353CA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(CodLiveOpsExchangeControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x353CA3C))(this, P0, P1);
	}

};

}
