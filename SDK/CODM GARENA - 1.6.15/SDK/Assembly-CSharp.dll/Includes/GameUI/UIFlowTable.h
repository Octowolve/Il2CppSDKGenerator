#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowTable"));
	}

	template <typename T = uintptr_t> T& ScrollBar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Group() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& gradientCoefficient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCellRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mFirstTime() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = float> T& mPanelSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mHeightSum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Patch() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mPatchedHeightSum() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& sumHeights() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& FirstRowPositionCallback() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isTopAnchor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<float>*> T& mHeights() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<float>*> T& mOffsets() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& mHeightNumber() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& mRangeStart() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mRangeEnd() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mRollPool() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRolls() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mReusedRevert() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FloatRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FloatByOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedFloatByOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLastCellCanSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentFirstRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLastRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceToConstrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRowHeights() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRangeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRangeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVisibleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWrapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertOffset2Position() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReusedNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = bool> T ValidateScroll() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE3D44))(this);
	}
	template <typename T = void> T UpdateScrollView() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE3FBC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE40C8))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE4278))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE4310))(this);
	}
	template <typename T = void> T OnMove(uintptr_t panel) {
		return ((T (*)(UIFlowTable*, uintptr_t))(Il2CppBase() + 0x3AE43D4))(this, panel);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE4490))(this);
	}
	template <typename T = uintptr_t> T CreateCell(int32_t row, uintptr_t assetID, bool active) {
		return ((T (*)(UIFlowTable*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3AE4528))(this, row, assetID, active);
	}
	template <typename T = void> T OnWrapCell(uintptr_t cell, int32_t row) {
		return ((T (*)(UIFlowTable*, uintptr_t, int32_t))(Il2CppBase() + 0x3AE48CC))(this, cell, row);
	}
	template <typename T = void> T Refresh(bool resetPosition) {
		return ((T (*)(UIFlowTable*, bool))(Il2CppBase() + 0x3AE4A90))(this, resetPosition);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE525C))(this);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE531C))(this, deltaTime);
	}
	template <typename T = void> T OnScrollBar() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE56E0))(this);
	}
	template <typename T = void> T UpdateScrollBar(float offset) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE5824))(this, offset);
	}
	template <typename T = void> T UpdateScrollBarView() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE4F6C))(this);
	}
	template <typename T = bool> T get_Patch() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE59D8))(this);
	}
	template <typename T = void> T set_Patch(bool value) {
		return ((T (*)(UIFlowTable*, bool))(Il2CppBase() + 0x3AE59E0))(this, value);
	}
	template <typename T = void> T FloatRow(int32_t row, int32_t style) {
		return ((T (*)(UIFlowTable*, int32_t, int32_t))(Il2CppBase() + 0x3AE59E8))(this, row, style);
	}
	template <typename T = void> T FloatByOffset(float offset) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE5D38))(this, offset);
	}
	template <typename T = void> T FixedFloatByOffset(float offset) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE5E34))(this, offset);
	}
	template <typename T = void> T SetHighlight(int32_t row, uintptr_t assetID) {
		return ((T (*)(UIFlowTable*, int32_t, uintptr_t))(Il2CppBase() + 0x3AE5F58))(this, row, assetID);
	}
	template <typename T = bool> T IsLastCellCanSee() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE6328))(this);
	}
	template <typename T = bool> T IsOverSize() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE658C))(this);
	}
	template <typename T = int32_t> T GetCurrentFirstRow() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE53FC))(this);
	}
	template <typename T = int32_t> T GetCurrentLastRow() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE669C))(this);
	}
	template <typename T = void> T ForceToConstrain() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE699C))(this);
	}
	template <typename T = void> T RefreshRowHeights() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE4C78))(this);
	}
	template <typename T = int32_t> T GetRangeStart() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE6C0C))(this);
	}
	template <typename T = int32_t> T GetRangeEnd() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE6CAC))(this);
	}
	template <typename T = void> T UpdateVisibleRange(float start, float end) {
		return ((T (*)(UIFlowTable*, float, float))(Il2CppBase() + 0x3AE6D4C))(this, start, end);
	}
	template <typename T = float> T GetCellOffset(int32_t row) {
		return ((T (*)(UIFlowTable*, int32_t))(Il2CppBase() + 0x3AE5C00))(this, row);
	}
	template <typename T = void> T OnWrapStart() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE6EB4))(this);
	}
	template <typename T = Il2CppVector3> T ConvertOffset2Position(float offset) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE6F70))(this, offset);
	}
	template <typename T = void> T WrapCell(int32_t row, bool forceNew) {
		return ((T (*)(UIFlowTable*, int32_t, bool))(Il2CppBase() + 0x3AE70DC))(this, row, forceNew);
	}
	template <typename T = void> T WrapContent(bool remain) {
		return ((T (*)(UIFlowTable*, bool))(Il2CppBase() + 0x3AE74C4))(this, remain);
	}
	template <typename T = void> T WrapPosition(float offset) {
		return ((T (*)(UIFlowTable*, float))(Il2CppBase() + 0x3AE7AF8))(this, offset);
	}
	template <typename T = uintptr_t> T CellList(uintptr_t assetID) {
		return ((T (*)(UIFlowTable*, uintptr_t))(Il2CppBase() + 0x3AE618C))(this, assetID);
	}
	template <typename T = void> T ReusedStart() {
		return ((T (*)(UIFlowTable*))(Il2CppBase() + 0x3AE7890))(this);
	}
	template <typename T = void> T ReusedEnd(bool culling) {
		return ((T (*)(UIFlowTable*, bool))(Il2CppBase() + 0x3AE79C0))(this, culling);
	}
	template <typename T = bool> T ReusedNext(int32_t row, uintptr_t assetID, uintptr_t* cell) {
		return ((T (*)(UIFlowTable*, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3AE7330))(this, row, assetID, cell);
	}
	template <typename T = Il2CppVector3> T GetCellPos(int32_t row) {
		return ((T (*)(UIFlowTable*, int32_t))(Il2CppBase() + 0x3AE7DB8))(this, row);
	}

};

}
