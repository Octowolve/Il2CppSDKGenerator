#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyValueDrawController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyValueDrawController"));
	}

	template <typename T = uintptr_t> static T& CachShopItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyBoxInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& showSpecialEffct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& CameraParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& SHAKE_COUNT_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewardList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& aniTimer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& endIdx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _curSelectIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& SPEED() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& counter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& MAX_COUNTER() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& minEndCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& hasLuckyValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<int32_t>*> T& shakeIdx() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& NoResultStep() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& shakeFinishValue() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& classCount1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& classCount2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& classCount3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& classCount4() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& shakeCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& outTimeShakeCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& step() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& lastShakeIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& hasNoResult() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& DefalutBtnBgName() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _endTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& timeStr() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& timeStrEndInNdays() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& luckydrawSkinConf() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isAnimPlay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToTenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPayResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawToPay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckyDrawInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawRewardOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawRewardItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawShowSpecialEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLuckDrawBuySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefalutSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPropRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNextSelctAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreSetLuckyDrawGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyDrawGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyDrawRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEndSelctAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClosePopWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnVideoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOpenPopWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadLoadoutItemDetailPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F94BDC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F94CB0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F94DEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F95370))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F95720))(this);
	}
	template <typename T = void> T OnBtnGoToClick() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F99870))(this);
	}
	template <typename T = void> T OnBtnGoToTenClick() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9A0F0))(this);
	}
	template <typename T = void> T GoToDraw(int32_t idx) {
		return ((T (*)(LuckyValueDrawController*, int32_t))(Il2CppBase() + 0x1F99948))(this, idx);
	}
	template <typename T = void> T OnPayResponse(uintptr_t msg) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9A1C8))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawToPay(uintptr_t obj) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9A298))(this, obj);
	}
	template <typename T = void> T OnNotifyLuckyDrawInfo(uintptr_t message) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9A3E4))(this, message);
	}
	template <typename T = void> T OnNotifyLuckDrawRewardOpen(uintptr_t msg) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9A750))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawRewardItemClick(uintptr_t msg) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9AAC0))(this, msg);
	}
	template <typename T = void> T OnNotifyLuckDrawShowSpecialEffect(uintptr_t obj) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9ACD4))(this, obj);
	}
	template <typename T = void> T OnNotifyLuckDrawBuySuccess(uintptr_t msg) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t))(Il2CppBase() + 0x1F9AE30))(this, msg);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(LuckyValueDrawController*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F9A93C))(this, boxId, source);
	}
	template <typename T = void> T UpdateSelct(int32_t idx) {
		return ((T (*)(LuckyValueDrawController*, int32_t))(Il2CppBase() + 0x1F98610))(this, idx);
	}
	template <typename T = void> T RefreshSkin() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F96164))(this);
	}
	template <typename T = void> T ResetDefalutSkin() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9AF00))(this);
	}
	template <typename T = void> T RefreshPrice() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F96870))(this);
	}
	template <typename T = void> T RefreshProgressBar() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F97BC0))(this);
	}
	template <typename T = void> T RefreshRewards() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9830C))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9B2DC))(this);
	}
	template <typename T = void> T CalcPropRate() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F98520))(this);
	}
	template <typename T = void> T BeginAnimation(int32_t endIndex) {
		return ((T (*)(LuckyValueDrawController*, int32_t))(Il2CppBase() + 0x1F9B7A8))(this, endIndex);
	}
	template <typename T = void> T SetNextSelctAnimation() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9B900))(this);
	}
	template <typename T = void> T PreSetLuckyDrawGoods() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9C218))(this);
	}
	template <typename T = void> T SetLuckyDrawGoods() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9BD04))(this);
	}
	template <typename T = void> T ShowLuckyDrawRewards() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9C798))(this);
	}
	template <typename T = void> T DoShake() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9C52C))(this);
	}
	template <typename T = void> T SetEndSelctAnimation() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9CB1C))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F9CDA0))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LuckyValueDrawController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F9CE84))(this, list, controller, index);
	}
	template <typename T = void> T OnBtnClosePopWindowClick() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9CF7C))(this);
	}
	template <typename T = void> T OnBtnVideoClick() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9D244))(this);
	}
	template <typename T = void> T OnBtnOpenPopWindowClick() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9D844))(this);
	}
	template <typename T = float> T GetLoadLoadoutItemDetailPosX() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9DD50))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9DEDC))(this);
	}
	template <typename T = int32_t> static T WillShowm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F9E0EC))(0, x, y);
	}
	template <typename T = void> T OnNotifyLuckDrawToPaym__1() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E138))(this);
	}
	template <typename T = int32_t> static T OnNotifyLuckyDrawInfom__2(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F9E140))(0, x, y);
	}
	template <typename T = void> T OnBtnClosePopWindowClickm__3() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E18C))(this);
	}
	template <typename T = void> T OnBtnClosePopWindowClickm__4() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E1C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LuckyValueDrawController*))(Il2CppBase() + 0x1F9E2D8))(this);
	}

};

}
