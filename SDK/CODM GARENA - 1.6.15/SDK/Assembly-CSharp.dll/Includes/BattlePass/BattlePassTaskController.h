#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassTaskController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& weekTaskEasyListController() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& taskList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassWeekChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassTaskCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTaskByGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeekSwitchTool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeekIdChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeekTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeekTaskComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeekData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeekPageRedpoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C399C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C39A6C))(this);
	}
	template <typename T = int32_t> T get_TabGroup() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C39BB8))(this);
	}
	template <typename T = void> T InitScrollView() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C39BC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3A05C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3A180))(this);
	}
	template <typename T = void> T RefreshView(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3A238))(this, isNotify);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3A2E8))(this);
	}
	template <typename T = void> T OnNotifyBattlePassWeekChange(uintptr_t msg) {
		return ((T (*)(BattlePassTaskController*, uintptr_t))(Il2CppBase() + 0x2C3A38C))(this, msg);
	}
	template <typename T = void> T GetBattlePassTaskCount() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3A5BC))(this);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t message) {
		return ((T (*)(BattlePassTaskController*, uintptr_t))(Il2CppBase() + 0x2C3A810))(this, message);
	}
	template <typename T = void> T OnAllTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3AD60))(this, isNotify);
	}
	template <typename T = void> T OnPvpTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3BA00))(this, isNotify);
	}
	template <typename T = void> T OnPveTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3BBD4))(this, isNotify);
	}
	template <typename T = void> T OnBrTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3BC88))(this, isNotify);
	}
	template <typename T = void> T CheckForProtocal() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3BD3C))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3BE4C))(this);
	}
	template <typename T = void> T ShowAllPanel(bool flag) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3AE1C))(this, flag);
	}
	template <typename T = void> T ShowAllTaskList(bool isNotify) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3AF48))(this, isNotify);
	}
	template <typename T = void> T RefreshTaskByGameMode(uintptr_t mType, bool isNotify) {
		return ((T (*)(BattlePassTaskController*, uintptr_t, bool))(Il2CppBase() + 0x2C3BAB4))(this, mType, isNotify);
	}
	template <typename T = void> T ResetWeekSwitchTool(uintptr_t modeType) {
		return ((T (*)(BattlePassTaskController*, uintptr_t))(Il2CppBase() + 0x2C3C120))(this, modeType);
	}
	template <typename T = void> T OnWeekIdChanged(int32_t weekId) {
		return ((T (*)(BattlePassTaskController*, int32_t))(Il2CppBase() + 0x2C3A4B4))(this, weekId);
	}
	template <typename T = void> T ShowDailyTask(uintptr_t mType) {
		return ((T (*)(BattlePassTaskController*, uintptr_t))(Il2CppBase() + 0x2C3C464))(this, mType);
	}
	template <typename T = void> T ShowWeekTaskList(uintptr_t mType, bool isNotify) {
		return ((T (*)(BattlePassTaskController*, uintptr_t, bool))(Il2CppBase() + 0x2C3C65C))(this, mType, isNotify);
	}
	template <typename T = int32_t> T WeekTaskComparer(uintptr_t a, uintptr_t b) {
		return ((T (*)(BattlePassTaskController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C3DEAC))(this, a, b);
	}
	template <typename T = void> T RefreshWeekData() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3CCDC))(this);
	}
	template <typename T = void> T RefreshWeekPageRedpoint() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3AB4C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E084))(this);
	}
	template <typename T = uintptr_t> static T ShowAllTaskListm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2C3E128))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitScrollView() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E13C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView(bool P0) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3E148))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLevel() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E14C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyBattlePassUpdateRedDot(uintptr_t P0) {
		return ((T (*)(BattlePassTaskController*, uintptr_t))(Il2CppBase() + 0x2C3E150))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAllTabRefresh(bool P0) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3E154))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPvpTabRefresh(bool P0) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3E158))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPveTabRefresh(bool P0) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3E15C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBrTabRefresh(bool P0) {
		return ((T (*)(BattlePassTaskController*, bool))(Il2CppBase() + 0x2C3E160))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckForProtocal() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E164))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E168))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassTaskController*))(Il2CppBase() + 0x2C3E170))(this);
	}

};

}
