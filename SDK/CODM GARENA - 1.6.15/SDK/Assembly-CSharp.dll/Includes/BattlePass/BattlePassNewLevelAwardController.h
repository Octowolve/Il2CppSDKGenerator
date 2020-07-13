#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewLevelAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewLevelAwardController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mNotifyClick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLastAwardItem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& mAssignalFreshTable() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mParentType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& SCROLLVIEWOFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mIsPlayAnim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mStartLv() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mStartExp() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mEndLv() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& mEndExp() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& mForceMove() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mFinishCallBack() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewItemPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewItemPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssignalFreshTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FreshTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIFlowTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GridAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableDragBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewStartDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewEndDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragOutRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDragOutLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayProgressAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimProgressPosAndSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgressWidth_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgressWidth_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAniProgress_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAniProgress_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLastAwardProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProgressTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpToWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMoveScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProgressOutScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemSideAlready() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMoveItemSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScrollViewEndX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = int32_t> T GetViewItemPanelDepth() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C17D44))(this);
	}
	template <typename T = uintptr_t> T GetItemScrollView() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C17EF4))(this);
	}
	template <typename T = void> T SetViewItemPanelDepth(int32_t depth) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t))(Il2CppBase() + 0x2C1803C))(this, depth);
	}
	template <typename T = void> T SetAssignalFreshTable(bool flag) {
		return ((T (*)(BattlePassNewLevelAwardController*, bool))(Il2CppBase() + 0x2C181F4))(this, flag);
	}
	template <typename T = void> T SetParentType(uintptr_t type) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t))(Il2CppBase() + 0x2C16794))(this, type);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C182CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C183A0))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C18564))(this);
	}
	template <typename T = void> T FreshTable(bool need_reposition, bool flow_table, int32_t level, bool bLast, int32_t style) {
		return ((T (*)(BattlePassNewLevelAwardController*, bool, bool, int32_t, bool, int32_t))(Il2CppBase() + 0x2C187C0))(this, need_reposition, flow_table, level, bLast, style);
	}
	template <typename T = uintptr_t> T GetUIFlowTable() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C17A68))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C18C70))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C192EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C19438))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C19B74))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C1A298))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t, int32_t))(Il2CppBase() + 0x2C1A450))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2C1A544))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t))(Il2CppBase() + 0x2C1AA2C))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassNewLevelAwardController*, uintptr_t, int32_t))(Il2CppBase() + 0x2C1AB80))(this, table, row);
	}
	template <typename T = void> T GridAdapt() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C18DEC))(this);
	}
	template <typename T = void> T SetEnableDragBtn(bool value) {
		return ((T (*)(BattlePassNewLevelAwardController*, bool))(Il2CppBase() + 0x2C1AC74))(this, value);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1AF20))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B074))(this);
	}
	template <typename T = void> T OnScrollViewStartDrag() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B1C4))(this);
	}
	template <typename T = void> T OnScrollViewEndDrag() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B2D0))(this);
	}
	template <typename T = void> T OnScrollViewDragOutRight() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B464))(this);
	}
	template <typename T = void> T OnScrollViewDragOutLeft() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B560))(this);
	}
	template <typename T = void> T ResetAnimData() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C19134))(this);
	}
	template <typename T = void> T PlayProgressAnim(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp, uintptr_t callback, bool forceMove) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2C17078))(this, startLv, startExp, endLv, endExp, callback, forceMove);
	}
	template <typename T = void> T SetAnimProgressPosAndSize() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1B664))(this);
	}
	template <typename T = float> T GetProgressWidth_1(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C1C380))(this, startLv, startExp, endLv, endExp);
	}
	template <typename T = float> T GetProgressWidth_2(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C1C588))(this, startLv, startExp, endLv, endExp);
	}
	template <typename T = void> T PlayAniProgress_1(int32_t startLv, int32_t startExp, float progressWidth, float dur, bool bReachHighest) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, float, float, bool))(Il2CppBase() + 0x2C1C78C))(this, startLv, startExp, progressWidth, dur, bReachHighest);
	}
	template <typename T = void> T PlayAniProgress_2(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp, float dur) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t, float))(Il2CppBase() + 0x2C1CAA0))(this, startLv, startExp, endLv, endExp, dur);
	}
	template <typename T = void> T PlayLastAwardProgress(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp, float progressWidth, float pos_x, float dur) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t, float, float, float))(Il2CppBase() + 0x2C1D6B8))(this, startLv, startExp, endLv, endExp, progressWidth, pos_x, dur);
	}
	template <typename T = void> T ProgressTween(float pos_x, float width, float dur, uintptr_t AniProgress, uintptr_t AniEffect) {
		return ((T (*)(BattlePassNewLevelAwardController*, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C1CDCC))(this, pos_x, width, dur, AniProgress, AniEffect);
	}
	template <typename T = float> T GetExpToWidth(int32_t startLv, int32_t startExp, int32_t endLv, int32_t endExp) {
		return ((T (*)(BattlePassNewLevelAwardController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C1BC1C))(this, startLv, startExp, endLv, endExp);
	}
	template <typename T = void> T CheckMoveScrollView(float progress_now) {
		return ((T (*)(BattlePassNewLevelAwardController*, float))(Il2CppBase() + 0x2C1DAE8))(this, progress_now);
	}
	template <typename T = bool> T CheckProgressOutScreen(float progress_now) {
		return ((T (*)(BattlePassNewLevelAwardController*, float))(Il2CppBase() + 0x2C1DE08))(this, progress_now);
	}
	template <typename T = bool> T IsItemSideAlready() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E044))(this);
	}
	template <typename T = void> T CheckMoveItemSide() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E1EC))(this);
	}
	template <typename T = void> T MoveScrollView(float pos_x) {
		return ((T (*)(BattlePassNewLevelAwardController*, float))(Il2CppBase() + 0x2C1D458))(this, pos_x);
	}
	template <typename T = float> T GetScrollViewEndX() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1D1A4))(this);
	}
	template <typename T = void> T PlayAnimEnd() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1C1B8))(this);
	}
	template <typename T = void> T CheckCallBack() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E3C0))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E528))(this);
	}
	template <typename T = void> T OnScrollViewEndDragm__1() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E6F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassNewLevelAwardController*))(Il2CppBase() + 0x2C1E700))(this);
	}

};

}
