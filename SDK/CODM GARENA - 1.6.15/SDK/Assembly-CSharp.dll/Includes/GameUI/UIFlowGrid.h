#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowGrid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowGrid"));
	}

	template <typename T = uintptr_t> T& ScrollBar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCellRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& mPanelSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsHorizontal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mIgnoreCallBack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<float>*> T& mRangeOffsets() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& mRangeRowNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<float>*> T& mRangeHeights() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& mRangeColNumbers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppList<float>*>*> T& mRangeColCenters() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& mRangeHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mRangeColNumber() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<float>*> T& mRangeWidths() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<int32_t>*> T& mRangeRowNumbers() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<Il2CppList<float>*>*> T& mRangeRowCenters() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mRangeWidth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mRangeRowStart() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mRangeRowEnd() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& mRangeColStart() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& mRangeColEnd() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& mWrapFirstStarted() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mWrapCellPools() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWrapCellPoolList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWrapCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindUsingCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FloatRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCellCanSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGridRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVisibleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRowOffsetFromPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColumeOffsetFromPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPositionFromPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWrapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWrapCellPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = bool> T ValidateScroll() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADCFFC))(this);
	}
	template <typename T = void> T UpdateScrollView() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADD21C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADD328))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADD4D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADD570))(this);
	}
	template <typename T = void> T OnMove(uintptr_t panel) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADD634))(this, panel);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADD6F0))(this);
	}
	template <typename T = uintptr_t> T CreateCell(uintptr_t path, uintptr_t assetID, bool active) {
		return ((T (*)(UIFlowGrid*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3ADD788))(this, path, assetID, active);
	}
	template <typename T = void> T OnWrapCell(uintptr_t cell, uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ADDABC))(this, cell, path);
	}
	template <typename T = void> T Refresh(bool resetPosition) {
		return ((T (*)(UIFlowGrid*, bool))(Il2CppBase() + 0x3ADDC90))(this, resetPosition);
	}
	template <typename T = uintptr_t> T FindUsingCell(uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADED34))(this, path);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADF148))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(UIFlowGrid*, float))(Il2CppBase() + 0x3ADF208))(this, deltaTime);
	}
	template <typename T = void> T OnScrollBar() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADF2A8))(this);
	}
	template <typename T = void> T UpdateScrollBar(float offset, bool restricted) {
		return ((T (*)(UIFlowGrid*, float, bool))(Il2CppBase() + 0x3ADF40C))(this, offset, restricted);
	}
	template <typename T = void> T UpdateScrollBarView() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADEB18))(this);
	}
	template <typename T = void> T FloatRow(uintptr_t path, int32_t style) {
		return ((T (*)(UIFlowGrid*, uintptr_t, int32_t))(Il2CppBase() + 0x3ADF788))(this, path, style);
	}
	template <typename T = void> T CheckCellCanSee(uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADFD1C))(this, path);
	}
	template <typename T = void> T RefreshGridRange() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3ADDE14))(this);
	}
	template <typename T = void> T UpdateVisibleRange(float start, float end) {
		return ((T (*)(UIFlowGrid*, float, float))(Il2CppBase() + 0x3AE002C))(this, start, end);
	}
	template <typename T = float> T GetRowOffsetFromPath(uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADFA18))(this, path);
	}
	template <typename T = float> T GetColumeOffsetFromPath(uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADFB74))(this, path);
	}
	template <typename T = Il2CppVector3> T GetPositionFromPath(uintptr_t path) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3AE0350))(this, path);
	}
	template <typename T = void> T OnWrapStart() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3AE06E4))(this);
	}
	template <typename T = void> T WrapCell(uintptr_t path, bool forceNew) {
		return ((T (*)(UIFlowGrid*, uintptr_t, bool))(Il2CppBase() + 0x3AE07A0))(this, path, forceNew);
	}
	template <typename T = void> T WrapContent(bool remain) {
		return ((T (*)(UIFlowGrid*, bool))(Il2CppBase() + 0x3AE0B48))(this, remain);
	}
	template <typename T = void> T ScrollOffset(float offset, float offsetWidth) {
		return ((T (*)(UIFlowGrid*, float, float))(Il2CppBase() + 0x3AE1398))(this, offset, offsetWidth);
	}
	template <typename T = uintptr_t> T GetWrapCellPool(uintptr_t assetID) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3ADEEC0))(this, assetID);
	}
	template <typename T = void> T ReusedStart() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3AE1084))(this);
	}
	template <typename T = void> T ReusedEnd() {
		return ((T (*)(UIFlowGrid*))(Il2CppBase() + 0x3AE126C))(this);
	}
	template <typename T = bool> T ReusedNext(uintptr_t path, uintptr_t assetID, uintptr_t* cell) {
		return ((T (*)(UIFlowGrid*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3AE0A0C))(this, path, assetID, cell);
	}
	template <typename T = void> T CreateCellm__0(uintptr_t p) {
		return ((T (*)(UIFlowGrid*, uintptr_t))(Il2CppBase() + 0x3AE1EDC))(this, p);
	}

};

}
