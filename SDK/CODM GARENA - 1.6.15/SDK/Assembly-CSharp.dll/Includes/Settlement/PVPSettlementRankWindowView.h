#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementRankWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementRankWindowView"));
	}

	template <typename T = uintptr_t> T& GoWinRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& GoLostRoot() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LableLostOrDraw() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SpriteBule() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& SpriteRed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelModeMapName() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelModel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelMap() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& IsRepositioned() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& LabelIDCollectionAdd() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ExpBufRoot() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BtnXP() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& BtnBP() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& SpriteRoleBuf() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& SpriteGoldBuf() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& BufGrid() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& RedGrid() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& BlueGrid() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BlueInfoTable() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& RedInfoTable() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& BlueFlagNumLabel() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& RedFlagNumLabel() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& LabelScoreBlue() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LabelScoreRed() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& LeftFlagIcon() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& LeftBlueItemBG() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& LeftRedItemBG() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& LeftMyTeamLebal() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& RightFlagIcon() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& RightBlueItemBG() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& RightRedItemBG() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& RightMyTeamLebal() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListBlue_5() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListBlue_4() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListBlue_3() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListBlue_2() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListBlue_1() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankListRed() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShowOnceGOList() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& expBuffView() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& PickUpBtn() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& ShowBtn() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShowObjs() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PickUpObjs() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& PickUpSelfRed() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& PickUpSelfBlue() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& LeftLimitObj() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& RightLimitObj() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& bAnimationPlayed() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& bluePlayerRankItemViewDic() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& redPlayerRankItemViewDic() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& FX1() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& FX2() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& BlueColor() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& RedColor() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& BlueScoreLabelColor() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& RedScoreLabelColor() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& BlueBG() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& RedBG() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = bool> T& ShowState() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& IsSinglePlayer() {
		return *(T*)((uintptr_t)this + 0x201);
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

	template <typename T = void> T OnDisable() {
		return ((T (*)(PVPSettlementRankWindowView*))(Il2CppBase() + 0x3B4EEDC))(this);
	}
	template <typename T = void> T SetSettlementInfo(uintptr_t ds) {
		return ((T (*)(PVPSettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3B4A17C))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(PVPSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B4AE40))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T CheckPickUpObjPos() {
		return ((T (*)(PVPSettlementRankWindowView*))(Il2CppBase() + 0x3B4EB34))(this);
	}
	template <typename T = void> T _CheckPickUpObjPos(uintptr_t CheckObj, uintptr_t LeftObj, uintptr_t RightObj) {
		return ((T (*)(PVPSettlementRankWindowView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B4F12C))(this, CheckObj, LeftObj, RightObj);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PVPSettlementRankWindowView*))(Il2CppBase() + 0x3B4F60C))(this);
	}
	template <typename T = void> T ShowPlayerInfoState(bool Show) {
		return ((T (*)(PVPSettlementRankWindowView*, bool))(Il2CppBase() + 0x3B4DE00))(this, Show);
	}
	template <typename T = void> T RefreshPlayAgainState(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(PVPSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B4E5A0))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(PVPSettlementRankWindowView*))(Il2CppBase() + 0x3B4F994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PVPSettlementRankWindowView*))(Il2CppBase() + 0x3B4F99C))(this);
	}

};

}
