#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassRankController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassRankController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mTabMap() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mCurrentTab() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mRankEasyList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mRankProtocol() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mRankRoleModelData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDataImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqOnetime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqModelAndGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankDataListContinue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMyRankButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelfModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2D660))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2D734))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2DE60))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2DFDC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2E140))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2DACC))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2E234))(this);
	}
	template <typename T = void> T ReqDataImpl(bool isReqMore) {
		return ((T (*)(BattlePassRankController*, bool))(Il2CppBase() + 0x2C2E694))(this, isReqMore);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassRankController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C2E7E4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnTabSwitch(int32_t index) {
		return ((T (*)(BattlePassRankController*, int32_t))(Il2CppBase() + 0x2C2F1A4))(this, index);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2F2E0))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2FA50))(this);
	}
	template <typename T = void> T ResetRankInfo() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2E58C))(this);
	}
	template <typename T = void> T ResetEasyList() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2FD88))(this);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C30458))(this);
	}
	template <typename T = void> T ShowAward() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2F6C8))(this);
	}
	template <typename T = void> T SetAwardTime() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C30598))(this);
	}
	template <typename T = void> T ReqPlayerInfo(Il2CppList<uintptr_t>* playerInfoList) {
		return ((T (*)(BattlePassRankController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2C2ED7C))(this, playerInfoList);
	}
	template <typename T = Il2CppList<uint64_t>*> T ReqOnetime(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BattlePassRankController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2C308F4))(this, list);
	}
	template <typename T = void> T ReqModelAndGun(Il2CppList<uint64_t>* list) {
		return ((T (*)(BattlePassRankController*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x2C30AD0))(this, list);
	}
	template <typename T = void> T ShowRankDataList() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2EADC))(this);
	}
	template <typename T = void> T ShowRankDataListContinue() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2E964))(this);
	}
	template <typename T = void> T OnMyRankButtonClick() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C30C08))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BattlePassRankController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C31228))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BattlePassRankController*, uintptr_t, int32_t))(Il2CppBase() + 0x2C31394))(this, list, userContext);
	}
	template <typename T = void> T RefreshModel() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C30EB4))(this);
	}
	template <typename T = void> T ShowSelfModel() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C2FF74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C314FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C31504))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C3150C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C31514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C3151C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C31524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BattlePassRankController*))(Il2CppBase() + 0x2C3152C))(this);
	}

};

}
