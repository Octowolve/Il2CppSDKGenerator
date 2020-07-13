#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassChallengeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassChallengeController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChallengeComparion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3277284))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3277328))(this);
	}
	template <typename T = int32_t> T get_TabGroup() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3277434))(this);
	}
	template <typename T = void> T InitScrollView() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x327743C))(this);
	}
	template <typename T = void> T RefreshView(bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x32776EC))(this, isNotify);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x32777A0))(this);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t message) {
		return ((T (*)(BattlePassChallengeController*, uintptr_t))(Il2CppBase() + 0x3277848))(this, message);
	}
	template <typename T = void> T SetListData(Il2CppList<uintptr_t>* taskList, bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3277C2C))(this, taskList, isNotify);
	}
	template <typename T = void> T OnAllTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3278060))(this, isNotify);
	}
	template <typename T = void> T OnPvpTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x32784A4))(this, isNotify);
	}
	template <typename T = void> T OnPveTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x32786A4))(this, isNotify);
	}
	template <typename T = void> T OnBrTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x32788A4))(this, isNotify);
	}
	template <typename T = int32_t> T ChallengeComparion(uintptr_t a, uintptr_t b) {
		return ((T (*)(BattlePassChallengeController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3278AA4))(this, a, b);
	}
	template <typename T = void> T CheckForProtocal() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3278D40))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3278E4C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3279040))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x32790E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x32790F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitScrollView() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x32790F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView(bool P0) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3279100))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLevel() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3279108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyBattlePassUpdateRedDot(uintptr_t P0) {
		return ((T (*)(BattlePassChallengeController*, uintptr_t))(Il2CppBase() + 0x3279110))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAllTabRefresh(bool P0) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3279118))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPvpTabRefresh(bool P0) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3279120))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPveTabRefresh(bool P0) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3279128))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBrTabRefresh(bool P0) {
		return ((T (*)(BattlePassChallengeController*, bool))(Il2CppBase() + 0x3279130))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckForProtocal() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3279138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3279140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassChallengeController*))(Il2CppBase() + 0x3279148))(this);
	}

};

}
