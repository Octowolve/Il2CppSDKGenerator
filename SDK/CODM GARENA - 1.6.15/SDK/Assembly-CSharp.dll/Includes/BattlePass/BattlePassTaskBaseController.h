#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassTaskBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassTaskBaseController"));
	}

	template <typename T = uintptr_t> T& mBaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBattlePassDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConf() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& taskEasyListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& curModeTypeTab() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& modeTabMap() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& FxShowVoice() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& FxShowVoice_CutDown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSwitchCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfNotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassUpdateRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassAwardTaskItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBuyBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTabRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyPassBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTiresBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C367D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C3711C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C373B4))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C37560))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C376E8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C377AC))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C37A5C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C37B44))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x2C37C28))(this, list, userContext);
	}
	template <typename T = void> T InitTab() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C36ADC))(this);
	}
	template <typename T = void> T OnTabSwitchCallback(int32_t index) {
		return ((T (*)(BattlePassTaskBaseController*, int32_t))(Il2CppBase() + 0x2C37CDC))(this, index);
	}
	template <typename T = void> T RefreshTabView(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C37EEC))(this, isNotify);
	}
	template <typename T = int32_t> T get_TabGroup() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C38008))(this);
	}
	template <typename T = void> T InitScrollView() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C38010))(this);
	}
	template <typename T = void> T RefreshView(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C380A8))(this, isNotify);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C381B8))(this);
	}
	template <typename T = void> T OnSelfNotifyDataStoreUpdated(uintptr_t sourceDataStore, Il2CppString* propertyTag, int32_t arrayIndex) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C386F0))(this, sourceDataStore, propertyTag, arrayIndex);
	}
	template <typename T = void> T OnNotifyBattlePassUpdateRedDot(uintptr_t message) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t))(Il2CppBase() + 0x2C38914))(this, message);
	}
	template <typename T = void> T OnNotifyBattlePassAwardTaskItem(uintptr_t msg) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t))(Il2CppBase() + 0x2C389B4))(this, msg);
	}
	template <typename T = bool> T OnSelfEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BattlePassTaskBaseController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C38B9C))(this, list, controller, index);
	}
	template <typename T = void> T RefreshBuyBtn() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C38C64))(this);
	}
	template <typename T = void> T OnAllTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C38D9C))(this, isNotify);
	}
	template <typename T = void> T OnPvpTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C38E3C))(this, isNotify);
	}
	template <typename T = void> T OnPveTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C38EDC))(this, isNotify);
	}
	template <typename T = void> T OnBrTabRefresh(bool isNotify) {
		return ((T (*)(BattlePassTaskBaseController*, bool))(Il2CppBase() + 0x2C38F7C))(this, isNotify);
	}
	template <typename T = void> T CheckForProtocal() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C3901C))(this);
	}
	template <typename T = void> T OnBuyPassBtnClick() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C390B4))(this);
	}
	template <typename T = void> T OnBuyLevelBtnClick() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39250))(this);
	}
	template <typename T = void> T ReportBattlePassGetTiresBtn() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C393F4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39760))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassTaskBaseController*))(Il2CppBase() + 0x2C39780))(this);
	}

};

}
