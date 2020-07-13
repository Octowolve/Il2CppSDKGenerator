#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRankWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRankWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelModeMapName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LabelMode() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& labelMap() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelExpAddBG() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsRepositioned() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelIDCollectionAdd() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& GoTop10() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& GoOthers() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BtnXP() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BtnBP() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& SpriteRoleBuf() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& SpriteGoldBuf() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& BufGrid() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& expBuffView() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerItemList() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& PickUpBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ShowBtn() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShowObjs() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PickUpObjs() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& PickUpSelf() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LeftLimitObj() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& RightLimitObj() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& bAnimationPlayed() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& playerRankItemViewDic() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& FX1() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& FX2() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& BRTDMRoot() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& BRTDMMatchResult() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SpriteCampRebel() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& SpriteCampRegular() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& cardTemplate() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& ShowState() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& IsSinglePlayer() {
		return *(T*)((uintptr_t)this + 0x169);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettlementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerInfoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayAgainState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRTDMInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(BRSettlementRankWindowView*))(Il2CppBase() + 0x3C2A268))(this);
	}
	template <typename T = void> T SetSettlementInfo(uintptr_t ds) {
		return ((T (*)(BRSettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3C25DF4))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(BRSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3C2739C))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T CheckPickUpObjPos() {
		return ((T (*)(BRSettlementRankWindowView*))(Il2CppBase() + 0x3C2A050))(this);
	}
	template <typename T = void> T _CheckPickUpObjPos(uintptr_t CheckObj, uintptr_t LeftObj, uintptr_t RightObj) {
		return ((T (*)(BRSettlementRankWindowView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C2A368))(this, CheckObj, LeftObj, RightObj);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSettlementRankWindowView*))(Il2CppBase() + 0x3C2A830))(this);
	}
	template <typename T = void> T ShowPlayerInfoState(bool Show) {
		return ((T (*)(BRSettlementRankWindowView*, bool))(Il2CppBase() + 0x3C29358))(this, Show);
	}
	template <typename T = void> T RefreshPlayAgainState(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(BRSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3C29ABC))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T SetBRTDMInfo(uintptr_t ds) {
		return ((T (*)(BRSettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3C26F7C))(this, ds);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRSettlementRankWindowView*))(Il2CppBase() + 0x3C2ABB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRSettlementRankWindowView*))(Il2CppBase() + 0x3C2ABB8))(this);
	}

};

}
