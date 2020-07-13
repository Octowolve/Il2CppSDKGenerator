#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabTypeList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> static T& IsReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetExpCard_Init_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShowExpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BattlePassMainController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLevelupGetAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllTabControllers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BpBtnClickReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassSeasonChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBattlePassComicRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonAvatarViewCameraSmooth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComicRedDotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = void> T T_GetExpCard_Init_1() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0DFFC))(this);
	}
	template <typename T = void> T T_ShowExpCard() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0E1CC))(this);
	}
	template <typename T = void> T T_BattlePassMainController_Go() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0E554))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0E94C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0EA20))(this);
	}
	template <typename T = void> T CheckLevelupGetAward() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0EE50))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0F12C))(this);
	}
	template <typename T = void> T InitSubController() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0F20C))(this);
	}
	template <typename T = void> T RemoveAllTabControllers() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0FA50))(this);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(BattlePassMainController*, int32_t))(Il2CppBase() + 0x2C10394))(this, tabIndex);
	}
	template <typename T = void> T BpBtnClickReport(int32_t tabIndex) {
		return ((T (*)(BattlePassMainController*, int32_t))(Il2CppBase() + 0x2C10AA4))(this, tabIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C10EFC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C111D4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C113D4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNotifyBattlePassSeasonChange(uintptr_t msg) {
		return ((T (*)(BattlePassMainController*, uintptr_t))(Il2CppBase() + 0x2C119B8))(this, msg);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t msg) {
		return ((T (*)(BattlePassMainController*, uintptr_t))(Il2CppBase() + 0x2C11EA8))(this, msg);
	}
	template <typename T = void> T RefreshBattlePassComicRedDot() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C117AC))(this);
	}
	template <typename T = void> T OnNotifyCommonAvatarViewCameraSmooth(uintptr_t message) {
		return ((T (*)(BattlePassMainController*, uintptr_t))(Il2CppBase() + 0x2C12640))(this, message);
	}
	template <typename T = void> T OnTipBtnClick() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C128F8))(this);
	}
	template <typename T = bool> T GetRedDotByType(uintptr_t type) {
		return ((T (*)(BattlePassMainController*, uintptr_t))(Il2CppBase() + 0x2C12060))(this, type);
	}
	template <typename T = int32_t> T GetComicRedDotCount() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C137B4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C1399C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C13E50))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C140B4))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C115CC))(this);
	}
	template <typename T = void> T OnShowTip(uintptr_t msg) {
		return ((T (*)(BattlePassMainController*, uintptr_t))(Il2CppBase() + 0x2C14700))(this, msg);
	}
	template <typename T = void> T SetInit(int32_t index, int32_t thirdTab, int32_t itemId) {
		return ((T (*)(BattlePassMainController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C14A24))(this, index, thirdTab, itemId);
	}
	template <typename T = void> T GetComicData() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C0EC0C))(this);
	}
	template <typename T = void> T T_GetExpCard_Init_1m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C14D54))(this, tutorialType, info);
	}
	template <typename T = void> static T T_BattlePassMainController_Gom__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C14EE8))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(BattlePassMainController*, int32_t))(Il2CppBase() + 0x2C15040))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15048))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15050))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassMainController*))(Il2CppBase() + 0x2C15068))(this);
	}

};

}
