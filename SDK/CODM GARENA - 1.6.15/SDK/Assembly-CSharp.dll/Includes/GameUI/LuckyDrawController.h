#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyDrawController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyDrawController"));
	}

	template <typename T = uintptr_t> static T& CachShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyBoxInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& CameraParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& showSpecialEffct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& SHAKE_COUNT_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _curSelectIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& aniTimer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& endIdx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& SPEED() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& counter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& MAX_COUNTER() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& minEndCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewardList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _records() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& hasSamePrice() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<int32_t>*> T& shakeIdx() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<int32_t>*> T& cantShakeIdx() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<int32_t>*> T& curSample() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& NoResultStep() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& shakeFinishValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& classCount1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& classCount2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& classCount3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& classCount4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& endSpeed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& shakeCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& outTimeShakeCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& step() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& lastShakeIndex() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& hasNoResult() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& DefalutBtnBgName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& _endTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& timeStr() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& timeStrEndInNdays() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& luckyboxItemID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& isAnimPlay() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& luckydrawSkinConf() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0xC0);
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
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToTenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPayResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawToPay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawRewardOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawRewardItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawShowSpecialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawBuySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDownloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCantAniList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefalutSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNextSelctAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreSetLuckyDrawGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyDrawGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyDrawRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClosePopWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnVideoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnWeaponVideoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponVideoBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOpenLuckyBoxClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOpenPopWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllDrawAniEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadLoadoutItemDetailPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F7F734))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F7F808))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F7F944))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F7FF9C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8040C))(this);
	}
	template <typename T = void> T OnBtnGoToClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F84604))(this);
	}
	template <typename T = void> T OnBtnGoToTenClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F85184))(this);
	}
	template <typename T = void> T GoToDraw(int32_t idx) {
		return ((T (*)(LuckyDrawController*, int32_t))(Il2CppBase() + 0x1F846DC))(this, idx);
	}
	template <typename T = void> T OnPayResponse(uintptr_t msg) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F8525C))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawToPay(uintptr_t obj) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F8532C))(this, obj);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F85478))(this, message);
	}
	template <typename T = void> T OnNotifyLuckDrawRewardOpen(uintptr_t msg) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F857E4))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawRewardItemClick(uintptr_t msg) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F85B58))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawShowSpecialEffect(uintptr_t msg) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F85D6C))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawBuySuccess(uintptr_t msg) {
		return ((T (*)(LuckyDrawController*, uintptr_t))(Il2CppBase() + 0x1F85FB0))(this, msg);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(LuckyDrawController*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F859D4))(this, boxId, source);
	}
	template <typename T = void> T UpdateSelct(int32_t idx) {
		return ((T (*)(LuckyDrawController*, int32_t))(Il2CppBase() + 0x1F82C34))(this, idx);
	}
	template <typename T = void> T OnResDownloaded() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F862CC))(this);
	}
	template <typename T = void> T UpdateCantAniList() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F864F0))(this);
	}
	template <typename T = void> T RefreshSkin() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F80CF0))(this);
	}
	template <typename T = void> T ResetEfx() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F86B5C))(this);
	}
	template <typename T = void> T ResetDefalutSkin() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F86780))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F86DD4))(this);
	}
	template <typename T = void> T RefreshPrice() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F81460))(this);
	}
	template <typename T = void> T DisableBtn(uintptr_t btn, uintptr_t spriBg, bool enable) {
		return ((T (*)(LuckyDrawController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1F872A0))(this, btn, spriBg, enable);
	}
	template <typename T = void> T RefreshRewards() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F82A18))(this);
	}
	template <typename T = void> T BeginAnimation(int32_t endIndex) {
		return ((T (*)(LuckyDrawController*, int32_t))(Il2CppBase() + 0x1F87464))(this, endIndex);
	}
	template <typename T = void> T SetNextSelctAnimation() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F875BC))(this);
	}
	template <typename T = void> T PreSetLuckyDrawGoods() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F88034))(this);
	}
	template <typename T = void> T SetLuckyDrawGoods() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F87A70))(this);
	}
	template <typename T = void> T ShowLuckyDrawRewards() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F889A0))(this);
	}
	template <typename T = void> T DoShake() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F88348))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LuckyDrawController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F88D24))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LuckyDrawController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F88E08))(this, list, controller, index);
	}
	template <typename T = void> T OnBtnClosePopWindowClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F88F00))(this);
	}
	template <typename T = void> T OnBtnVideoClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F891C8))(this);
	}
	template <typename T = void> T OnBtnWeaponVideoClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F89A20))(this);
	}
	template <typename T = void> T CheckWeaponVideoBtn(uint32_t CacheItemId) {
		return ((T (*)(LuckyDrawController*, uint32_t))(Il2CppBase() + 0x1F86080))(this, CacheItemId);
	}
	template <typename T = void> T OnBtnOpenLuckyBoxClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8A0B0))(this);
	}
	template <typename T = void> T OnBtnOpenPopWindowClick() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8A2A0))(this);
	}
	template <typename T = void> T CloseAllDrawAniEfx() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F844AC))(this);
	}
	template <typename T = float> T GetLoadLoadoutItemDetailPosX() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8A7AC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8A938))(this);
	}
	template <typename T = int32_t> static T WillShowm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F8AB58))(0, x, y);
	}
	template <typename T = bool> static T GoToDrawm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F8ABA4))(0, x);
	}
	template <typename T = void> T OnNotifyLuckDrawToPaym__2() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8ABD8))(this);
	}
	template <typename T = int32_t> static T OnNotifyLuckyDrawInfom__3(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F8ABE0))(0, x, y);
	}
	template <typename T = bool> static T DoShakem__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F8AC2C))(0, x);
	}
	template <typename T = void> T OnBtnClosePopWindowClickm__5() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AC60))(this);
	}
	template <typename T = void> T OnBtnClosePopWindowClickm__6() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AC98))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AD84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AD8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AD94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8AD9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8ADA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LuckyDrawController*))(Il2CppBase() + 0x1F8ADAC))(this);
	}

};

}
