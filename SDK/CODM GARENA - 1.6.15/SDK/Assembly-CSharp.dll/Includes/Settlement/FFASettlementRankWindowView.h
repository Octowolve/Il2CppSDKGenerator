#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class FFASettlementRankWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "FFASettlementRankWindowView"));
	}

	template <typename T = uintptr_t> T& GoTop3() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& GoOthers() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelRank() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LabelModeMapName() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& LabelModel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelMap() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& IsRepositioned() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BtnXP() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BtnBP() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& LabelIDCollectionAdd() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& ExpBufRoot() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& PlayerItemWeitht() {
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
	template <typename T = Il2CppArray<uintptr_t>*> T& RankList() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& expBuffView() {
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
	template <typename T = bool> T& ShowState() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& IsSinglePlayer() {
		return *(T*)((uintptr_t)this + 0x155);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettlementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerInfoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayAgainState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(FFASettlementRankWindowView*))(Il2CppBase() + 0x3B2641C))(this);
	}
	template <typename T = void> T SetSettlementInfo(uintptr_t ds) {
		return ((T (*)(FFASettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3B22648))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(FFASettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B23550))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T CheckPickUpObjPos() {
		return ((T (*)(FFASettlementRankWindowView*))(Il2CppBase() + 0x3B261DC))(this);
	}
	template <typename T = void> T _CheckPickUpObjPos(uintptr_t CheckObj, uintptr_t LeftObj, uintptr_t RightObj) {
		return ((T (*)(FFASettlementRankWindowView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B2651C))(this, CheckObj, LeftObj, RightObj);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(FFASettlementRankWindowView*))(Il2CppBase() + 0x3B269E4))(this);
	}
	template <typename T = void> T ShowPlayerInfoState(bool Show) {
		return ((T (*)(FFASettlementRankWindowView*, bool))(Il2CppBase() + 0x3B254DC))(this, Show);
	}
	template <typename T = void> T RefreshPlayAgainState(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(FFASettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B25C48))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = bool> static T SetPlayerInfom__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B26D6C))(0, s);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(FFASettlementRankWindowView*))(Il2CppBase() + 0x3B26D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(FFASettlementRankWindowView*))(Il2CppBase() + 0x3B26DA4))(this);
	}

};

}
