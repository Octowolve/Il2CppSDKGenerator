#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPCatSettlementRankWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPCatSettlementRankWindowView"));
	}

	template <typename T = uintptr_t> T& LableLostOrDraw() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelModel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LabelMap() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& IsRepositioned() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelIDCollectionAdd() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ExpBufRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BtnXP() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BtnBP() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& SpriteRoleBuf() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& SpriteGoldBuf() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BufGrid() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CatRankList() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BG_Cat() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BG_Inf() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& GridRoot_Cat() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& GridRoot_Inf() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& PlayerItemGrid() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& expBuffView() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& playerRankItemViewDic() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettlementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeDiff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckPickUpObjPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerInfoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayAgainState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(PVPCatSettlementRankWindowView*))(Il2CppBase() + 0x3B3ECB0))(this);
	}
	template <typename T = void> T SetSettlementInfo(uintptr_t ds) {
		return ((T (*)(PVPCatSettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3B3BE14))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(PVPCatSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B3C98C))(this, ds, isCanCreatePlayAgain);
	}
	template <typename T = void> T SetModeDiff() {
		return ((T (*)(PVPCatSettlementRankWindowView*))(Il2CppBase() + 0x3B3ED4C))(this);
	}
	template <typename T = void> T CheckPickUpObjPos() {
		return ((T (*)(PVPCatSettlementRankWindowView*))(Il2CppBase() + 0x3B3EAF8))(this);
	}
	template <typename T = void> T _CheckPickUpObjPos(uintptr_t CheckObj, uintptr_t LeftObj, uintptr_t RightObj) {
		return ((T (*)(PVPCatSettlementRankWindowView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B3F118))(this, CheckObj, LeftObj, RightObj);
	}
	template <typename T = void> T ShowPlayerInfoState(bool Show) {
		return ((T (*)(PVPCatSettlementRankWindowView*, bool))(Il2CppBase() + 0x3B3E288))(this, Show);
	}
	template <typename T = void> T RefreshPlayAgainState(uintptr_t ds, bool isCanCreatePlayAgain) {
		return ((T (*)(PVPCatSettlementRankWindowView*, uintptr_t, bool))(Il2CppBase() + 0x3B3E564))(this, ds, isCanCreatePlayAgain);
	}

};

}
