#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankPointBuffView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankPointBuffView"));
	}

	template <typename T = uintptr_t> T& RootrankPoint() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BtnIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ObjTips() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RankBuffViewTf() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TipsBg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& TipsBg_Height() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& FeaturedMode_Item_With() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BasicXPTF() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_RefreshTimestamp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& RankDetail_Vector3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& RoomTeam_Vector3() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mRankedMatchDataStore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RankActvItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RankActvItemWidget() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankActvModeList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& ActvCount() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& RanKActv_Item_Height_1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& RanKActv_Item_Height_2() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ModeTypeItem() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& KeyModeTypeItem() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& KeyModeTypeWidget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RankFeaturedModeItemList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& NeedItemCount() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& CellCount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& featuredModeList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ModeGrid() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& InitKeyMode_Item_Height() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTipPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshResetTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankActvAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RankAddListSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnlyInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankKeyModeTypeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankModeCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_RankedMatchDataStore() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x434484C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x43448FC))(this);
	}
	template <typename T = void> T SetBuffInfo(bool IsLobby) {
		return ((T (*)(LobbyRankPointBuffView*, bool))(Il2CppBase() + 0x43449AC))(this, IsLobby);
	}
	template <typename T = void> T OnBtnTipPress(uintptr_t obj, bool Press) {
		return ((T (*)(LobbyRankPointBuffView*, uintptr_t, bool))(Il2CppBase() + 0x4345040))(this, obj, Press);
	}
	template <typename T = void> T RefreshResetTimestamp() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x4345204))(this);
	}
	template <typename T = void> T SetTimer() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x4345378))(this);
	}
	template <typename T = void> T RefreshUIState() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x4345158))(this);
	}
	template <typename T = void> T GetRankActvAddition() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x4345794))(this);
	}
	template <typename T = int32_t> T RankAddListSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(LobbyRankPointBuffView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4346D60))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOnlyInfoList(Il2CppList<uintptr_t>* InfoList) {
		return ((T (*)(LobbyRankPointBuffView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x43465F4))(this, InfoList);
	}
	template <typename T = void> T GetRankKeyModeTypeInfo() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x4345558))(this);
	}
	template <typename T = void> T SetUIHeight(bool isActv, int32_t count) {
		return ((T (*)(LobbyRankPointBuffView*, bool, int32_t))(Il2CppBase() + 0x4346AC0))(this, isActv, count);
	}
	template <typename T = void> T SetUIPosition() {
		return ((T (*)(LobbyRankPointBuffView*))(Il2CppBase() + 0x43474E8))(this);
	}
	template <typename T = void> T SetRankModeCell(int32_t needCount) {
		return ((T (*)(LobbyRankPointBuffView*, int32_t))(Il2CppBase() + 0x4346EC8))(this, needCount);
	}
	template <typename T = void> static T SetTimerm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x43478B0))(0);
	}
	template <typename T = bool> static T GetRankActvAdditionm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43478B4))(0, it);
	}
	template <typename T = bool> static T GetOnlyInfoListm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43478EC))(0, it);
	}
	template <typename T = bool> static T GetOnlyInfoListm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4347924))(0, it);
	}

};

}
