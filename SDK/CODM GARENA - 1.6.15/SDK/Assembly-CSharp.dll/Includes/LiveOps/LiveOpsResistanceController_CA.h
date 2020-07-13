#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsResistanceControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsResistanceController_CA"));
	}

	template <typename T = float> static T& LastSendReqAwardTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& LastSendReqAwardActivityID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& AWARDITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_TabData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Tasks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_CurLevel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_CurHPValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_AdaptationTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_FlowGridTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_InitFlowDataTimer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_CurLevelIndex() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlowTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DescTipBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x35232B0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3523360))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3523434))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x352365C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x35238B4))(this);
	}
	template <typename T = void> T SetActivityData(uintptr_t data, bool bInit) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x34F71B8))(this, data, bInit);
	}
	template <typename T = void> T GetTaskData(uintptr_t data) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t))(Il2CppBase() + 0x3523B50))(this, data);
	}
	template <typename T = void> T UpdateCurLevel() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3524390))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3524A70))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshFlowTable(bool bInit) {
		return ((T (*)(LiveOpsResistanceControllerCA*, bool))(Il2CppBase() + 0x3524768))(this, bInit);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x3524BD4))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3524CC8))(this, table, cell, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x3525864))(this, table, row, worldPos);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t))(Il2CppBase() + 0x3525A24))(this, grid);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(LiveOpsResistanceControllerCA*, uintptr_t, int32_t))(Il2CppBase() + 0x3525B2C))(this, table, row);
	}
	template <typename T = void> T GoBtnClicked() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3525C20))(this);
	}
	template <typename T = void> T DescTipBtnClicked() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3525DDC))(this);
	}
	template <typename T = int32_t> static T GetTaskDatam__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3525F54))(0, a, b);
	}
	template <typename T = bool> static T GetTaskDatam__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3525FCC))(0, x);
	}
	template <typename T = bool> static T UpdateCurLevelm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3526024))(0, x);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3526060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3526068))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3526070))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsResistanceControllerCA*))(Il2CppBase() + 0x3526078))(this);
	}

};

}
