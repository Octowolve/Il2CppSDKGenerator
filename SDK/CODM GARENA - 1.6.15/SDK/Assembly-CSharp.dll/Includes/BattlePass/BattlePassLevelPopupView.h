#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelPopupView"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PreLevelLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& PreLevelLabel_1() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CurLevelLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CurLevelLable_1() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NormalBgObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& PlusBgObj() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& TireUpLable() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& TireUpLable_1() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& NormalLevelLable() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& plusLevelLable() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& NormalObj() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& PlusObj() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelTurnToMail() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BattlePass() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_CacheGiftBag() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& low4Pos() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& big4Pos() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector3> T& finalLowPos() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& finalbigPos() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& gridXoffset() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& gridOffsetIndex() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& ifBigger4Item() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& getAwardCount() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& willgetAwardCount() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& perLineNum() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& NormalScrollViewScrollPostion() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& PlusScrollViewScrollPostion() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& isDrugMoving_Normal() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& isDrugMoving_Plus() {
		return *(T*)((uintptr_t)this + 0x149);
	}
	template <typename T = bool> T& needShowDecompose() {
		return *(T*)((uintptr_t)this + 0x14A);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GridChilds() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& onOpen() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& showChildIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& showtime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& closeTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& closeIndex() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& haveInvokeCloseAnim() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& checkIndex() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> static T& SHOW_TIME_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& SoundPlayTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& SoundPlayTimeCounter() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& delay_move() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& isMoveUpOver() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& animStep() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& isShowing3DScene() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& Delay() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& firstLineItems() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SecondLineItem() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalOrPlus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurTier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWillGetAwards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateChildObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBattlePassItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUpTiersSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_myclose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_myWillGetClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCommonCloseTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show3DScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTurnToMailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGotScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWillGot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusScrollViewBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNomalScrollViewBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWillGetTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_mergeTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_mergeTween_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlphaTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPostionTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuyBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = void> T SetNormalOrPlus(bool IsOpenVip) {
		return ((T (*)(BattlePassLevelPopupView*, bool))(Il2CppBase() + 0x2C035E4))(this, IsOpenVip);
	}
	template <typename T = void> T SetCurTier(Il2CppString* CurLevel) {
		return ((T (*)(BattlePassLevelPopupView*, Il2CppString*))(Il2CppBase() + 0x2C02ECC))(this, CurLevel);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C07848))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C07A34))(this);
	}
	template <typename T = void> T InitData(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, bool isTurnToMail) {
		return ((T (*)(BattlePassLevelPopupView*, Il2CppDictionary<uintptr_t, int32_t>*, bool))(Il2CppBase() + 0x2C05254))(this, receiveItemList, isTurnToMail);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C08738))(this);
	}
	template <typename T = void> T SetWillGetAwards(Il2CppList<uintptr_t>* awardList) {
		return ((T (*)(BattlePassLevelPopupView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2C05A68))(this, awardList);
	}
	template <typename T = void> T GenerateChildObject(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, uintptr_t index, Il2CppDictionary<uint32_t, uintptr_t>* refreshCoin) {
		return ((T (*)(BattlePassLevelPopupView*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t, Il2CppDictionary<uint32_t, uintptr_t>*))(Il2CppBase() + 0x2C088E4))(this, receiveItemList, index, refreshCoin);
	}
	template <typename T = void> T ShowBattlePassItem(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList) {
		return ((T (*)(BattlePassLevelPopupView*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x2C07FD8))(this, receiveItemList);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C09204))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0920C))(this);
	}
	template <typename T = void> T SetOpenInit() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C09160))(this);
	}
	template <typename T = void> T PlayUpTiersSound() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C07ECC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BattlePassLevelPopupView*, float))(Il2CppBase() + 0x2C092BC))(this, dt);
	}
	template <typename T = void> T myclose() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0B2E8))(this);
	}
	template <typename T = void> T myWillGetClose() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0AC24))(this);
	}
	template <typename T = void> T PlayCommonCloseTween() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0A9C0))(this);
	}
	template <typename T = void> T Show3DScene(int32_t index) {
		return ((T (*)(BattlePassLevelPopupView*, int32_t))(Il2CppBase() + 0x2C09970))(this, index);
	}
	template <typename T = void> T DelayCall() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0B5E8))(this);
	}
	template <typename T = void> T SetTurnToMailTip(bool turnToMail) {
		return ((T (*)(BattlePassLevelPopupView*, bool))(Il2CppBase() + 0x2C08644))(this, turnToMail);
	}
	template <typename T = void> T SetGotScrollView() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C09FFC))(this);
	}
	template <typename T = void> T SetWillGot() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0A54C))(this);
	}
	template <typename T = void> T SetPlusScrollViewBtnActive(bool isLeft, bool isRight) {
		return ((T (*)(BattlePassLevelPopupView*, bool, bool))(Il2CppBase() + 0x2C0B1A4))(this, isLeft, isRight);
	}
	template <typename T = void> T SetNomalScrollViewBtnActive(bool isLeft, bool isRight) {
		return ((T (*)(BattlePassLevelPopupView*, bool, bool))(Il2CppBase() + 0x2C0B060))(this, isLeft, isRight);
	}
	template <typename T = void> T PlayWillGetTween() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0B69C))(this);
	}
	template <typename T = void> T mergeTween() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0B7C4))(this);
	}
	template <typename T = void> T mergeTween_1() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C114))(this);
	}
	template <typename T = void> T SetAlphaTween(uintptr_t alpha, float from, float to, float duration) {
		return ((T (*)(BattlePassLevelPopupView*, uintptr_t, float, float, float))(Il2CppBase() + 0x2C087D8))(this, alpha, from, to, duration);
	}
	template <typename T = void> T SetPostionTween(uintptr_t pos, Il2CppVector3 from, Il2CppVector3 to, float duration) {
		return ((T (*)(BattlePassLevelPopupView*, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x2C0BFEC))(this, pos, from, to, duration);
	}
	template <typename T = void> T SetBtnState(bool isShow) {
		return ((T (*)(BattlePassLevelPopupView*, bool))(Il2CppBase() + 0x2C07AF8))(this, isShow);
	}
	template <typename T = void> T SetLevel(int32_t preLv, int32_t curLv) {
		return ((T (*)(BattlePassLevelPopupView*, int32_t, int32_t))(Il2CppBase() + 0x2C0349C))(this, preLv, curLv);
	}
	template <typename T = void> T SetBtnActive() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C07D7C))(this);
	}
	template <typename T = bool> T CheckBuyBtnShow() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C710))(this);
	}
	template <typename T = void> T Tickm__0() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C7F4))(this);
	}
	template <typename T = void> T mergeTween_1m__1() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C814))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C81C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BattlePassLevelPopupView*))(Il2CppBase() + 0x2C0C824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BattlePassLevelPopupView*, float))(Il2CppBase() + 0x2C0C82C))(this, P0);
	}

};

}
