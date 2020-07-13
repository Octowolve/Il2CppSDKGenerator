#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UILuckyBoxAwardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UILuckyBoxAwardsView"));
	}

	template <typename T = uintptr_t> T& TurnToMailLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& DetailBtnGroup() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BuyMoreBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& DetailBtnGroupUIGrid() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& AgainBuyBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& AgainBuyBtnTextLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SingleAgainBuyBtnTextLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& AgainBuyBtnCurrencyIconSprite() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& AgainBuyBtnCurrencyPriceLabel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& AgainBuyContainer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SkipBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ItemGrid() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ItemScrollView() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& DecomposeRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& DecomposeSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& DecomposeLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& low5Pos() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& big5Pos() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& ifBigger5Item() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& perLineNum() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& MaxShowNum() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& needShowDecompose() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& NormalTweenScale() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& SpecialTweenScale() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& m_ShowSkipBtnNum() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GridChilds() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& onOpen() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& showChildIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& showtime() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> static T& SHOW_TIME_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SHOW_TIME_FAST_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mItemAppearDuration() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& SoundPlayTime() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& SoundPlayTimeCounter() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& animStep() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& isShowing3DScene() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateChildObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuickMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPropShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show3DScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSuiteTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTurnToMailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFCB4C))(this);
	}
	template <typename T = void> T InitData(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList) {
		return ((T (*)(UILuckyBoxAwardsView*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x3AFB9D8))(this, receiveItemList);
	}
	template <typename T = void> T GenerateChildObject(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, uintptr_t index, Il2CppDictionary<uint32_t, uintptr_t>* refreshCoin) {
		return ((T (*)(UILuckyBoxAwardsView*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t, Il2CppDictionary<uint32_t, uintptr_t>*))(Il2CppBase() + 0x3AFD2AC))(this, receiveItemList, index, refreshCoin);
	}
	template <typename T = void> T ShowCommon(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList) {
		return ((T (*)(UILuckyBoxAwardsView*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x3AFCBEC))(this, receiveItemList);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFE030))(this);
	}
	template <typename T = void> T set_ItemAppearDuration(float value) {
		return ((T (*)(UILuckyBoxAwardsView*, float))(Il2CppBase() + 0x3AFE038))(this, value);
	}
	template <typename T = float> T get_ItemAppearDuration() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFE040))(this);
	}
	template <typename T = void> T SetQuickMode(bool quick) {
		return ((T (*)(UILuckyBoxAwardsView*, bool))(Il2CppBase() + 0x3AFBF7C))(this, quick);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFE048))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(UILuckyBoxAwardsView*, float))(Il2CppBase() + 0x3AFE0F8))(this, dt);
	}
	template <typename T = void> T OnPropShowFinish() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFEC64))(this);
	}
	template <typename T = void> T ShowButton() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFED6C))(this);
	}
	template <typename T = void> T Show3DScene(int32_t index) {
		return ((T (*)(UILuckyBoxAwardsView*, int32_t))(Il2CppBase() + 0x3AFE56C))(this, index);
	}
	template <typename T = void> T CheckSuiteTutorial() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFC134))(this);
	}
	template <typename T = void> T ResetViewParam(bool gotoOther) {
		return ((T (*)(UILuckyBoxAwardsView*, bool))(Il2CppBase() + 0x3AFC4B8))(this, gotoOther);
	}
	template <typename T = void> T SetViewPosition(Il2CppVector3 pos) {
		return ((T (*)(UILuckyBoxAwardsView*, Il2CppVector3))(Il2CppBase() + 0x3AFEFB4))(this, pos);
	}
	template <typename T = void> T SetTurnToMailTip(bool turnToMail) {
		return ((T (*)(UILuckyBoxAwardsView*, bool))(Il2CppBase() + 0x3AFC598))(this, turnToMail);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFF0D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(UILuckyBoxAwardsView*))(Il2CppBase() + 0x3AFF0DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UILuckyBoxAwardsView*, float))(Il2CppBase() + 0x3AFF0E4))(this, P0);
	}

};

}
