#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPanel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& onGeometryUpdated() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& showInPanelTool() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& generateNormals() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& generateUV2() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = uintptr_t> T& shadowMode() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& widgetsAreStatic() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& cullWhileDragging() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& alwaysOnScreen() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = bool> T& anchorOffset() {
		return *(T*)((uintptr_t)this + 0x87);
	}
	template <typename T = bool> T& softBorderPadding() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& renderQueue() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& startingRenderQueue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& widgets() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& drawCalls() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& worldToLocal() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& drawCallClipRange() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& onClipMove() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& onCreateMaterial() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& onCreateDrawCall() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& mClipTexture() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& mAlpha() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& mClipping() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& mClipRange() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector2> T& mClipSoftness() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& mDepth() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& mSortingOrder() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& mSortingLayerName() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& mRebuild() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& mResized() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = Il2CppVector2> T& mClipOffset() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& mMatrixFrame() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& mAlphaFrameID() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& mLayer() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mTemp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector2> T& mMin() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppVector2> T& mMax() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& mSortWidgets() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& mUpdateScroll() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = bool> static T& drawCallCachedTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& mCachedStartingRQ() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& mDrawCallsChanged() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> static T& UpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& mUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& EnableSlicedFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& SlicedFrame() {
		return *(T*)((uintptr_t)this + 0x159);
	}
	template <typename T = bool> T& NeedCheckDrawCallQueue() {
		return *(T*)((uintptr_t)this + 0x15A);
	}
	template <typename T = bool> T& useSortingOrder() {
		return *(T*)((uintptr_t)this + 0x15B);
	}
	template <typename T = uintptr_t> T& mParentPanel() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mCorners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& mUpdateFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& UseDynamicDrawCallInsert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> T& mHasMoved() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& mOnRender() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& mForced() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& TempDCList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> static T& TempDCIndexList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvalidateClipping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invalidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateFinalAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Affects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildAllDrawCalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDirty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParentHasChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnableInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleSlicedFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdateScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransformMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticLateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCallQueueCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillAllDrawCalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillDrawCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDrawCalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindDrawCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDrawCallForInsert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertNewDrawCallToDcList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SliceOldDrawCallToInsertNewL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SliceOldDrawCallToInsertNewR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateConstrainOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainTargetToBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConstrainTargetToBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFontRebuilt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceHideFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillDirtyDrawCalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCallQueueDebugTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}

	template <typename T = Il2CppString*> T get_sortingLayerName() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F69E68))(this);
	}
	template <typename T = void> T set_sortingLayerName(Il2CppString* value) {
		return ((T (*)(UIPanel*, Il2CppString*))(Il2CppBase() + 0x2F69E70))(this, value);
	}
	template <typename T = int32_t> static T get_nextUnusedDepth() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F6A63C))(0);
	}
	template <typename T = bool> T get_canBeAnchored() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6A83C))(this);
	}
	template <typename T = float> T get_alpha() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6A84C))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(UIPanel*, float))(Il2CppBase() + 0x2F6A854))(this, value);
	}
	template <typename T = int32_t> T get_depth() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6A834))(this);
	}
	template <typename T = void> T set_depth(int32_t value) {
		return ((T (*)(UIPanel*, int32_t))(Il2CppBase() + 0x2F6AA08))(this, value);
	}
	template <typename T = int32_t> T get_sortingOrder() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6ABE8))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(UIPanel*, int32_t))(Il2CppBase() + 0x2F6ABF0))(this, value);
	}
	template <typename T = int32_t> static T CompareFunc(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F6ACFC))(0, a, b);
	}
	template <typename T = float> T get_width() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6AF28))(this);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B0B0))(this);
	}
	template <typename T = bool> T get_halfPixelOffset() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B0D4))(this);
	}
	template <typename T = bool> T get_usedForUI() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B0DC))(this);
	}
	template <typename T = Il2CppVector3> T get_drawCallOffset() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B1FC))(this);
	}
	template <typename T = uintptr_t> T get_clipping() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B6C0))(this);
	}
	template <typename T = void> T set_clipping(uintptr_t value) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6B6C8))(this, value);
	}
	template <typename T = uintptr_t> T get_parentPanel() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B6EC))(this);
	}
	template <typename T = int32_t> T get_clipCount() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B6F4))(this);
	}
	template <typename T = bool> T get_hasClipping() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B7DC))(this);
	}
	template <typename T = bool> T get_hasCumulativeClipping() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B7F0))(this);
	}
	template <typename T = bool> T get_clipsChildren() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B808))(this);
	}
	template <typename T = Il2CppVector2> T get_clipOffset() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B820))(this);
	}
	template <typename T = void> T set_clipOffset(Il2CppVector2 value) {
		return ((T (*)(UIPanel*, Il2CppVector2))(Il2CppBase() + 0x2F6B834))(this, value);
	}
	template <typename T = void> T InvalidateClipping() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B97C))(this);
	}
	template <typename T = uintptr_t> T get_clipTexture() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6BCD0))(this);
	}
	template <typename T = void> T set_clipTexture(uintptr_t value) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6BCD8))(this, value);
	}
	template <typename T = uintptr_t> T get_clipRange() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6BD94))(this);
	}
	template <typename T = void> T set_clipRange(uintptr_t value) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6BDB4))(this, value);
	}
	template <typename T = uintptr_t> T get_baseClipRegion() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6BDA4))(this);
	}
	template <typename T = void> T set_baseClipRegion(uintptr_t value) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6BDD4))(this, value);
	}
	template <typename T = uintptr_t> T get_finalClipRegion() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6C34C))(this);
	}
	template <typename T = Il2CppVector2> T get_clipSoftness() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6C3DC))(this);
	}
	template <typename T = void> T set_clipSoftness(Il2CppVector2 value) {
		return ((T (*)(UIPanel*, Il2CppVector2))(Il2CppBase() + 0x2F6C3F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_localCorners() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6C43C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_worldCorners() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6C7C0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSides(uintptr_t relativeTo) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6D2F0))(this, relativeTo);
	}
	template <typename T = void> T Invalidate(bool includeChildren) {
		return ((T (*)(UIPanel*, bool))(Il2CppBase() + 0x2F6DE50))(this, includeChildren);
	}
	template <typename T = float> T CalculateFinalAlpha(int32_t frameID) {
		return ((T (*)(UIPanel*, int32_t))(Il2CppBase() + 0x2F6E0C8))(this, frameID);
	}
	template <typename T = void> T SetRect(float x, float y, float width, float height) {
		return ((T (*)(UIPanel*, float, float, float, float))(Il2CppBase() + 0x2F6E36C))(this, x, y, width, height);
	}
	template <typename T = bool> T IsVisible(Il2CppVector3 a, Il2CppVector3 b, Il2CppVector3 c, Il2CppVector3 d) {
		return ((T (*)(UIPanel*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2F6EF50))(this, a, b, c, d);
	}
	template <typename T = bool> T IsVisible_1(Il2CppVector3 worldPos) {
		return ((T (*)(UIPanel*, Il2CppVector3))(Il2CppBase() + 0x2F6F6C8))(this, worldPos);
	}
	template <typename T = bool> T IsVisible_2(uintptr_t w) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6F864))(this, w);
	}
	template <typename T = bool> T Affects(uintptr_t w) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F6FAEC))(this, w);
	}
	template <typename T = void> T RebuildAllDrawCalls() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6FD4C))(this);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6FE20))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6FF98))(this);
	}
	template <typename T = void> T FindParent() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F70160))(this);
	}
	template <typename T = void> T ParentHasChanged() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F70330))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F706B0))(this);
	}
	template <typename T = void> T DoEnableInternal() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F70874))(this);
	}
	template <typename T = void> T ToggleSlicedFrame(bool open) {
		return ((T (*)(UIPanel*, bool))(Il2CppBase() + 0x2F7098C))(this, open);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F70A64))(this);
	}
	template <typename T = void> T LateUpdateScrollView() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F71104))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F714EC))(this);
	}
	template <typename T = void> T UpdateTransformMatrix() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6F488))(this);
	}
	template <typename T = void> T OnAnchor() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F71A48))(this);
	}
	template <typename T = void> static T StaticLateUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F72BEC))(0);
	}
	template <typename T = bool> T DrawCallQueueCheck() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F73460))(this);
	}
	template <typename T = void> T UpdateSelf() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7320C))(this);
	}
	template <typename T = void> T SortWidgets() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F74D74))(this);
	}
	template <typename T = void> T FillAllDrawCalls() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F73F50))(this);
	}
	template <typename T = bool> T FillDrawCall(uintptr_t dc) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F75070))(this, dc);
	}
	template <typename T = void> T UpdateDrawCalls(int32_t sortOrder) {
		return ((T (*)(UIPanel*, int32_t))(Il2CppBase() + 0x2F69FC8))(this, sortOrder);
	}
	template <typename T = void> T UpdateLayers() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F736A8))(this);
	}
	template <typename T = void> T UpdateWidgets() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F73A24))(this);
	}
	template <typename T = uintptr_t> T FindDrawCall(uintptr_t w) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F75940))(this, w);
	}
	template <typename T = uintptr_t> T CreateDrawCallForInsert(uintptr_t mat, uintptr_t tex, uintptr_t sdr, int32_t depthStart, int32_t depthEnd) {
		return ((T (*)(UIPanel*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2F793C8))(this, mat, tex, sdr, depthStart, depthEnd);
	}
	template <typename T = uintptr_t> T InsertNewDrawCallToDcList(uintptr_t w, int32_t index, uintptr_t mat, uintptr_t tex, uintptr_t sdr, int32_t depthStart, int32_t depthEnd) {
		return ((T (*)(UIPanel*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2F785C8))(this, w, index, mat, tex, sdr, depthStart, depthEnd);
	}
	template <typename T = uintptr_t> T SliceOldDrawCallToInsertNewL(int32_t oldDcIndex, uintptr_t w, uintptr_t mat, uintptr_t tex, uintptr_t sdr, int32_t depthStart, int32_t depthEnd) {
		return ((T (*)(UIPanel*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2F787B8))(this, oldDcIndex, w, mat, tex, sdr, depthStart, depthEnd);
	}
	template <typename T = uintptr_t> T SliceOldDrawCallToInsertNewR(int32_t oldDcIndex, uintptr_t w, uintptr_t mat, uintptr_t tex, uintptr_t sdr, int32_t depthStart, int32_t depthEnd) {
		return ((T (*)(UIPanel*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2F78DC0))(this, oldDcIndex, w, mat, tex, sdr, depthStart, depthEnd);
	}
	template <typename T = void> T AddWidget(uintptr_t w) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F79638))(this, w);
	}
	template <typename T = void> T RemoveWidget(uintptr_t w) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F798E8))(this, w);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F79AA8))(this);
	}
	template <typename T = Il2CppVector3> T CalculateConstrainOffset(Il2CppVector2 min, Il2CppVector2 max) {
		return ((T (*)(UIPanel*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x2F79B7C))(this, min, max);
	}
	template <typename T = bool> T ConstrainTargetToBounds(uintptr_t target, uintptr_t targetBounds, bool immediate) {
		return ((T (*)(UIPanel*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2F79D90))(this, target, targetBounds, immediate);
	}
	template <typename T = bool> T ConstrainTargetToBounds_1(uintptr_t target, bool immediate) {
		return ((T (*)(UIPanel*, uintptr_t, bool))(Il2CppBase() + 0x2F7A2AC))(this, target, immediate);
	}
	template <typename T = uintptr_t> static T Find(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F7A3F8))(0, trans);
	}
	template <typename T = uintptr_t> static T Find_1(uintptr_t trans, bool createIfMissing) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2F7A77C))(0, trans, createIfMissing);
	}
	template <typename T = uintptr_t> static T Find_2(uintptr_t trans, bool createIfMissing, int32_t layer) {
		return ((T (*)(void *, uintptr_t, bool, int32_t))(Il2CppBase() + 0x2F7A500))(0, trans, createIfMissing, layer);
	}
	template <typename T = Il2CppVector2> T GetWindowSize() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6B49C))(this);
	}
	template <typename T = Il2CppVector2> T GetViewSize() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F6AF4C))(this);
	}
	template <typename T = void> static T OnFontRebuilt() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F59440))(0);
	}
	template <typename T = void> T ForceHideFrame() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AA04))(this);
	}
	template <typename T = void> T FillDirtyDrawCalls() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F74994))(this);
	}
	template <typename T = void> T DrawCallQueueDebugTest() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7ABE0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetSides(uintptr_t P0) {
		return ((T (*)(UIPanel*, uintptr_t))(Il2CppBase() + 0x2F7AFD0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Invalidate(bool P0) {
		return ((T (*)(UIPanel*, bool))(Il2CppBase() + 0x2F7AFD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AFD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ParentHasChanged() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AFDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoEnableInternal() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AFE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInit() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AFE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(UIPanel*))(Il2CppBase() + 0x2F7AFE8))(this);
	}

};

}
