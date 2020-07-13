#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankController"));
	}

	template <typename T = uintptr_t> T& rankModel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& rankView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rankProtocol() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& RoleModeData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mineLoadoutData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& squadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isTesting() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> static T& IsNeedRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& curSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& willShowTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& rankAwardDetailPopController() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& SeasonTimerID_1() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& SeasonTimerID_2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTaskActivityRanking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoolSeasonOffTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RollTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRoolTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefaultSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BrAndMpNeedRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopRankTitleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDataImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankSubTabChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogoSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankActivityChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankGlobalSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankSubTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanModeDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqOnetime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankDataListContinue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqModelAndGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerCallingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCallinCardInfoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewOffsetChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetModelToMine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnmyRankBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380069C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3800770))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3800C34))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3800D80))(this);
	}
	template <typename T = bool> T IsTaskActivityRanking() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3801230))(this);
	}
	template <typename T = void> T ResetRankType() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3801300))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x38015A8))(this);
	}
	template <typename T = void> T InitEasyList(int32_t itemWidth) {
		return ((T (*)(RankController*, int32_t))(Il2CppBase() + 0x38016B0))(this, itemWidth);
	}
	template <typename T = void> T ViewInit(int32_t itemWidth) {
		return ((T (*)(RankController*, int32_t))(Il2CppBase() + 0x3801058))(this, itemWidth);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380194C))(this);
	}
	template <typename T = void> T RoolSeasonOffTips() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3803900))(this);
	}
	template <typename T = void> T RollTips() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3803AA0))(this);
	}
	template <typename T = void> T ResetRoolTips() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3803C90))(this);
	}
	template <typename T = void> T ResetDefaultSelect() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3802C64))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3803E40))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RankController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x380404C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3804B14))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3804F2C))(this);
	}
	template <typename T = void> T OnRankModeChange(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x3805180))(this, msg);
	}
	template <typename T = void> T BrAndMpNeedRefreshView(uintptr_t type) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x3805A38))(this, type);
	}
	template <typename T = void> T OnTopRankTitleChange(uintptr_t rankmode) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x38054CC))(this, rankmode);
	}
	template <typename T = void> T ReqDataImpl(bool isReqMore) {
		return ((T (*)(RankController*, bool))(Il2CppBase() + 0x3801CD4))(this, isReqMore);
	}
	template <typename T = void> T TlogReport(int32_t curRankId) {
		return ((T (*)(RankController*, int32_t))(Il2CppBase() + 0x38060E8))(this, curRankId);
	}
	template <typename T = void> T OnRankSubTabChange(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x3806430))(this, msg);
	}
	template <typename T = void> T SetLogoSprite(uintptr_t ModeType, uintptr_t type) {
		return ((T (*)(RankController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38068C0))(this, ModeType, type);
	}
	template <typename T = void> T OnRankActivityChange(double fActivityLeftTime, Il2CppString* RankItemDescript) {
		return ((T (*)(RankController*, double, Il2CppString*))(Il2CppBase() + 0x3807E20))(this, fActivityLeftTime, RankItemDescript);
	}
	template <typename T = void> T OnRankGlobalSwitch(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x380811C))(this, msg);
	}
	template <typename T = void> T OnRankSubTabSwitch(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x380830C))(this, msg);
	}
	template <typename T = void> T ResetRankInfo() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3801848))(this);
	}
	template <typename T = void> T ResetEasyList() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3808684))(this);
	}
	template <typename T = void> T CleanModeDic() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3803F3C))(this);
	}
	template <typename T = void> T ShowRankDataList() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3804344))(this);
	}
	template <typename T = void> T ReqPlayerInfo(Il2CppList<uintptr_t>* playerInfoList) {
		return ((T (*)(RankController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38046EC))(this, playerInfoList);
	}
	template <typename T = Il2CppList<uint64_t>*> T ReqOnetime(Il2CppList<uintptr_t>* list) {
		return ((T (*)(RankController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3808C58))(this, list);
	}
	template <typename T = void> T ShowRankDataListContinue() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x38041CC))(this);
	}
	template <typename T = void> T ReqModelAndGun(Il2CppList<uint64_t>* list) {
		return ((T (*)(RankController*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x3808E34))(this, list);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RankController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x38090E4))(this, list, controller, index);
	}
	template <typename T = void> T GetPlayerLoadoutInfo(int32_t index) {
		return ((T (*)(RankController*, int32_t))(Il2CppBase() + 0x3809298))(this, index);
	}
	template <typename T = void> T ResetPlayerCallingCard() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380973C))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RankController*, uintptr_t, int32_t))(Il2CppBase() + 0x3809A90))(this, list, userContext);
	}
	template <typename T = void> T OnScrollViewDragEnd() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3809B74))(this);
	}
	template <typename T = void> T OnCallinCardInfoUpdate(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x3809CA8))(this, msg);
	}
	template <typename T = void> T OnScrollViewOffsetChange(uintptr_t msg) {
		return ((T (*)(RankController*, uintptr_t))(Il2CppBase() + 0x3809D84))(this, msg);
	}
	template <typename T = void> T ResetModelToMine() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3801F30))(this);
	}
	template <typename T = void> T OnmyRankBtnClick() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x3809EBC))(this);
	}
	template <typename T = void> T OnTipsBtnClick() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A048))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A2E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankController*))(Il2CppBase() + 0x380A3D8))(this);
	}

};

}
