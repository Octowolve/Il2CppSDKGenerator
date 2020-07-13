#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChainTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChainTaskController_CA"));
	}

	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_LeftNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CurRow1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskStateList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_DelayUpdateTaskTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskStateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustScrollViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShowDefaultPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskStateTypeByRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePageView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrowBtnColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowArrowBtns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTaskShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = int32_t> T get_m_CurRow() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D95FC))(this);
	}
	template <typename T = void> T set_m_CurRow(int32_t value) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, int32_t))(Il2CppBase() + 0x34D9604))(this, value);
	}
	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D985C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D990C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D9B04))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D9BA8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34D9E8C))(this);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, int32_t, int32_t, bool))(Il2CppBase() + 0x34DA158))(this, topNum, leftNum, bInit);
	}
	template <typename T = void> T UpdateTaskStateData() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DA240))(this);
	}
	template <typename T = void> T UpdateView(bool bInit) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, bool))(Il2CppBase() + 0x34DA90C))(this, bInit);
	}
	template <typename T = void> T AdjustScrollViewSize() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DAB1C))(this);
	}
	template <typename T = void> T InitShowDefaultPage() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DAFCC))(this);
	}
	template <typename T = uintptr_t> T GetTaskStateTypeByRow(int32_t row) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, int32_t))(Il2CppBase() + 0x34DB634))(this, row);
	}
	template <typename T = void> T UpdatePageView(uintptr_t task, uintptr_t taskType, bool bInit) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x34DB750))(this, task, taskType, bInit);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x34DC4F8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GetTaskData(int32_t row) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, int32_t))(Il2CppBase() + 0x34DC654))(this, row);
	}
	template <typename T = void> T OnLeftBtnClicked() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DC780))(this);
	}
	template <typename T = void> T OnRightBtnClicked() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DCA4C))(this);
	}
	template <typename T = void> T UpdateArrowBtnColor(int32_t value) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, int32_t))(Il2CppBase() + 0x34D960C))(this, value);
	}
	template <typename T = void> T ShowArrowBtns() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DB59C))(this);
	}
	template <typename T = void> T ChangeTaskShow() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DC878))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x34DCD2C))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x34DCDF0))(this, table, cell, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x34DD2A4))(this, table, row, worldPos);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x34DD370))(this, grid);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x34DD448))(this, table, row);
	}
	template <typename T = void> T _OnBtnClaimClick() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD50C))(this);
	}
	template <typename T = void> T _OnBtnGoClick() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD6B0))(this);
	}
	template <typename T = void> T UpdateTaskStateDatam__0(uintptr_t it) {
		return ((T (*)(LiveOpsChainTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x34DD8B4))(this, it);
	}
	template <typename T = int32_t> static T UpdateTaskStateDatam__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34DD954))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD9CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD9D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD9DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsChainTaskControllerCA*))(Il2CppBase() + 0x34DD9E4))(this);
	}

};

}
