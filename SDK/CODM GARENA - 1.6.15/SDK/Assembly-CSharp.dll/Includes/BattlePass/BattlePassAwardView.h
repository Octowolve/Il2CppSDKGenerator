#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassAwardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassAwardView"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& AvatarAnim() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AnimRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PreLevelLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PreLevelLabel_1() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CurLevelLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CurLevelLable_1() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NormalBgObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PlusBgObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TireUpLable() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AvatarShowRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& AvatarShow() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& NotWeaponShowObj() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NotWeaponSprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& CallingItem() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& AwardItem() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& CoinSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& DiamondSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& RoleSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& HeadFrame() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& NormalLevelLable() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& plusLevelLable() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& NormalObj() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PlusObj() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& Continue_Btn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GotAwardAniRoot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& GotAwardShowScrollView() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& GotAwardShowAwardGrid() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& GotAwardModelRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& GotAwardScrollView() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& GotAwardGrid() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& GotAwardNormalLevel() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& GotAwardplusLevel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& GotAwardNormalObj() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& GotAwardPlusObj() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& NextBtn() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& WillAwardModelRoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& WillAwardScrollView() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& WillAwardGrid() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& PurchaseBtn() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& OKBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CenterOKBtn() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& WillGetTips() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppVector3> T& low4Pos() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& big4Pos() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& gridXoffset() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& gridOffsetIndex() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& ifBigger4Item() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> static T& perLineNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& needShowDecompose() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWillAwardList() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WillAwardItemList() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GridChilds() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GotAwardItems() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GotAwardItemList() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& IsShowingAwardAnim() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& showChildIndex() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& showtime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& checkIndex() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> static T& SHOW_TIME_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& SoundPlayTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& SoundPlayTimeCounter() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& isShowing3DScene() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalOrPlus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurTier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWillGetAwards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateChildObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBattlePassItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGotAwardScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUpTiersSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show3DScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGotAwardAnimShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterGotAwardModelShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterWillAwardModelShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGridChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGotAwardGridPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWillAwardGridPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGotAwardGridCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWillAwardGridCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollViewPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T SetNormalOrPlus(bool IsOpenVip) {
		return ((T (*)(BattlePassAwardView*, bool))(Il2CppBase() + 0x325E1F8))(this, IsOpenVip);
	}
	template <typename T = void> T SetCurTier(int32_t CurLevel) {
		return ((T (*)(BattlePassAwardView*, int32_t))(Il2CppBase() + 0x325D9F8))(this, CurLevel);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32650D0))(this);
	}
	template <typename T = void> T InitData(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, bool isTurnToMail) {
		return ((T (*)(BattlePassAwardView*, Il2CppDictionary<uintptr_t, int32_t>*, bool))(Il2CppBase() + 0x325EC5C))(this, receiveItemList, isTurnToMail);
	}
	template <typename T = void> T SetWillGetAwards(Il2CppList<uintptr_t>* willAwardList) {
		return ((T (*)(BattlePassAwardView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3261988))(this, willAwardList);
	}
	template <typename T = void> T GenerateChildObject(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, uintptr_t index, Il2CppDictionary<uint32_t, uintptr_t>* refreshCoin) {
		return ((T (*)(BattlePassAwardView*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t, Il2CppDictionary<uint32_t, uintptr_t>*))(Il2CppBase() + 0x3265E3C))(this, receiveItemList, index, refreshCoin);
	}
	template <typename T = void> T ShowBattlePassItem(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList) {
		return ((T (*)(BattlePassAwardView*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x32655AC))(this, receiveItemList);
	}
	template <typename T = void> T SetGotAwardScrollView() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32659A8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x326666C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3266674))(this);
	}
	template <typename T = void> T PlayUpTiersSound() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3265304))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BattlePassAwardView*, float))(Il2CppBase() + 0x3266754))(this, dt);
	}
	template <typename T = void> T Show3DScene(int32_t index) {
		return ((T (*)(BattlePassAwardView*, int32_t))(Il2CppBase() + 0x3266C14))(this, index);
	}
	template <typename T = void> T ResetView() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x325EE78))(this);
	}
	template <typename T = void> T EnterGotAwardAnimShow() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3265440))(this);
	}
	template <typename T = void> T EnterGotAwardModelShow() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32673D0))(this);
	}
	template <typename T = void> T EnterWillAwardModelShow() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x325F568))(this);
	}
	template <typename T = void> T SetAniLevel(int32_t preLv, int32_t curLv) {
		return ((T (*)(BattlePassAwardView*, int32_t, int32_t))(Il2CppBase() + 0x325E080))(this, preLv, curLv);
	}
	template <typename T = void> T ResetViewData() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32672D4))(this);
	}
	template <typename T = void> T SetBtnActive() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32651C0))(this);
	}
	template <typename T = void> T ClearGrid() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32627F8))(this);
	}
	template <typename T = void> T ClearGridChild(uintptr_t transform) {
		return ((T (*)(BattlePassAwardView*, uintptr_t))(Il2CppBase() + 0x3267D58))(this, transform);
	}
	template <typename T = void> T UpdateGotAwardGridPos() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x32677E0))(this);
	}
	template <typename T = void> T UpdateWillAwardGridPos() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3267A9C))(this);
	}
	template <typename T = void> T UpdateGotAwardGridCheck() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3262B3C))(this);
	}
	template <typename T = void> T UpdateWillAwardGridCheck() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3262D44))(this);
	}
	template <typename T = void> T ResetScrollViewPos(uintptr_t scrollView) {
		return ((T (*)(BattlePassAwardView*, uintptr_t))(Il2CppBase() + 0x326833C))(this, scrollView);
	}
	template <typename T = void> T Tickm__0() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x326860C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3268610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BattlePassAwardView*))(Il2CppBase() + 0x3268618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BattlePassAwardView*, float))(Il2CppBase() + 0x3268620))(this, P0);
	}

};

}
