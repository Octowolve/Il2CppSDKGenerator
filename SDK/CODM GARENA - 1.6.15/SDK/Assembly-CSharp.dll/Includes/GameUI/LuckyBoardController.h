#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyBoardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyBoardController"));
	}

	template <typename T = uintptr_t> static T& CachShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyBoxInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bottomListData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewardList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& skipAniStr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isPlayAni() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& normalSprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& graySprite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& LuckyCouponID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& LuckyCoinID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& CouponCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mSquadInvetoryDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mAdvertisingDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& clickBottomItemIdx() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& needSendProbReq() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& curAniIndex() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& allAniCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& curSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& SPEED() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& MAXSHAKECOUNT() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& MINSHAKECOUNT() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& aniTimer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<int32_t>*> T& resultIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& resultCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& beginStop() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& openPopType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TweenAlpha2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& hasNoResult() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isSkipLuckyBoardAni() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGotoHelpShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBtnPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRewardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshBottomItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshBottomRewardShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshHelpPopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRewardsItemLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRewardsItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToTenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToOneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGetBottomItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAniSkipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClosePopClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHelpClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToKoreaHelpShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToKingfShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToHelpPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckBoardBuySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBottomRewardUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyClientPriceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyBoardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckBoardRewardOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPayResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAniTimerCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDealyTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGetRewardPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllItemDrawEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllItemStayAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllItemGetEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CachAndHideEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreCahcEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWacthBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnDrawBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnDrawAllBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnWacthBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AniSkipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyCouponNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAdBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuyNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}

	template <typename T = uintptr_t> T get_SquadInvetoryDS() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F72ADC))(this);
	}
	template <typename T = uintptr_t> T get_AdvertisingDS() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F72B8C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F72C3C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F72CE0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F72DEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F735A8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F73B0C))(this);
	}
	template <typename T = void> T CheckGotoHelpShift() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F75DA8))(this);
	}
	template <typename T = void> T RefreshRewards() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F747B4))(this);
	}
	template <typename T = void> T RefreshBtnPrice() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7447C))(this);
	}
	template <typename T = void> T RefreshBottomRewardInfo() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F74C58))(this);
	}
	template <typename T = void> T OnRefreshBottomItem(uintptr_t item, int32_t idx) {
		return ((T (*)(LuckyBoardController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F767D4))(this, item, idx);
	}
	template <typename T = void> T OnRefreshBottomRewardShowItem(uintptr_t item, int32_t idx) {
		return ((T (*)(LuckyBoardController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F769F0))(this, item, idx);
	}
	template <typename T = void> T OnRefreshHelpPopItem(uintptr_t item, int32_t idx) {
		return ((T (*)(LuckyBoardController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F770D0))(this, item, idx);
	}
	template <typename T = void> T OnRewardsItemLongPress(int32_t itemId, Il2CppVector3 pos) {
		return ((T (*)(LuckyBoardController*, int32_t, Il2CppVector3))(Il2CppBase() + 0x1F774FC))(this, itemId, pos);
	}
	template <typename T = void> T OnRewardsItemClick(int32_t SelectedItemId) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F77614))(this, SelectedItemId);
	}
	template <typename T = void> T OnBottomItemClick(int32_t idx) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F77C58))(this, idx);
	}
	template <typename T = void> T OnBtnGoToTenClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F78394))(this);
	}
	template <typename T = void> T OnBtnGoToOneClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F78A34))(this);
	}
	template <typename T = void> T GoToDraw(int32_t idx) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F7843C))(this, idx);
	}
	template <typename T = void> T OnShopBtnClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F78C6C))(this);
	}
	template <typename T = void> T OnBtnGetBottomItemClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F78F60))(this);
	}
	template <typename T = void> T OnBtnAniSkipClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7967C))(this);
	}
	template <typename T = void> T OnBtnClosePopClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F79824))(this);
	}
	template <typename T = void> T OnBtnHelpClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F75F24))(this);
	}
	template <typename T = void> T GoToKoreaHelpShift() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F799D8))(this);
	}
	template <typename T = void> T GoToKingfShift() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F798C8))(this);
	}
	template <typename T = void> T GoToHelpPop() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F79AE8))(this);
	}
	template <typename T = void> T OnNotifyLuckBoardBuySuccess(uintptr_t msg) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F79F5C))(this, msg);
	}
	template <typename T = void> T OnNotifyBottomRewardUpdate(uintptr_t msg) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F79FFC))(this, msg);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t obj) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F7A204))(this, obj);
	}
	template <typename T = void> T OnNotifyClientPriceUpdate(uintptr_t obj) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F7A440))(this, obj);
	}
	template <typename T = void> T OnNotifyLuckyBoardInfo(uintptr_t message) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F7A4EC))(this, message);
	}
	template <typename T = void> T OnNotifyLuckBoardRewardOpen(uintptr_t msg) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F7A760))(this, msg);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(LuckyBoardController*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F7A2EC))(this, boxId, source);
	}
	template <typename T = void> T OnPayResponse(uintptr_t msg) {
		return ((T (*)(LuckyBoardController*, uintptr_t))(Il2CppBase() + 0x1F7ABF8))(this, msg);
	}
	template <typename T = void> T BeginAnimation() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7AD54))(this);
	}
	template <typename T = void> T OnAniTimerCheck() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7AF08))(this);
	}
	template <typename T = void> T DoShake() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7B108))(this);
	}
	template <typename T = void> T OnDealyTick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7BB14))(this);
	}
	template <typename T = void> T ShowGetRewardPop() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7AAB0))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7BC34))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7BD1C))(this);
	}
	template <typename T = void> T PlayOpenAni() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7BDCC))(this);
	}
	template <typename T = void> T PlayOpenAni_1(int32_t openType) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F7BE7C))(this, openType);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F75500))(this);
	}
	template <typename T = void> T BeforeClose() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F79360))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7C1B4))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7C334))(this);
	}
	template <typename T = void> T CloseAllItemDrawEfx() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7C460))(this);
	}
	template <typename T = void> T CloseAllItemStayAni() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F75704))(this);
	}
	template <typename T = void> T CloseAllItemGetEfx() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7CA9C))(this);
	}
	template <typename T = void> T CachAndHideEfx() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7CE44))(this);
	}
	template <typename T = void> T RestoreCahcEfx() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7D1E0))(this);
	}
	template <typename T = void> T CheckWacthBtnShow() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7D57C))(this);
	}
	template <typename T = void> T _OnDrawBtnClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7D6E8))(this);
	}
	template <typename T = void> T _OnDrawAllBtnClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7D948))(this);
	}
	template <typename T = void> T _OnWacthBtnClick() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7DB08))(this);
	}
	template <typename T = Il2CppString*> T GetStringByTime(int32_t duration) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F7DEF0))(this, duration);
	}
	template <typename T = void> T AniSkipClick(bool isPlay) {
		return ((T (*)(LuckyBoardController*, bool))(Il2CppBase() + 0x1F7D8A0))(this, isPlay);
	}
	template <typename T = void> T SetLuckyCouponNum() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F759B8))(this);
	}
	template <typename T = void> T SetAdBtnState() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F75C3C))(this);
	}
	template <typename T = int32_t> T GetBuyNum(int32_t idx) {
		return ((T (*)(LuckyBoardController*, int32_t))(Il2CppBase() + 0x1F78ADC))(this, idx);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LuckyBoardController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1F7E078))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = int32_t> static T WillShowm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F7E1E0))(0, x, y);
	}
	template <typename T = bool> static T RefreshBtnPricem__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F7E22C))(0, x);
	}
	template <typename T = int32_t> static T OnNotifyLuckyBoardInfom__2(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F7E314))(0, x, y);
	}
	template <typename T = void> T OnPayResponsem__3() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E360))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E36C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E37C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E38C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(LuckyBoardController*))(Il2CppBase() + 0x1F7E394))(this);
	}

};

}
