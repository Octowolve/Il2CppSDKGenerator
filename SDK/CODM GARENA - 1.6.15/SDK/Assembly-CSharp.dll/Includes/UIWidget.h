#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWidget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWidget"));
	}

	template <typename T = uintptr_t> T& mColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mPivot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& mDepth() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onChange() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& onPostFill() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mOnRender() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& autoResizeBoxCollider() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& hideIfOffScreen() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = bool> T& considerChildren() {
		return *(T*)((uintptr_t)this + 0xAA);
	}
	template <typename T = uintptr_t> T& keepAspectRatio() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& aspectRatio() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& hitCheck() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& geometry() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& fillGeometry() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& mPlayMode() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& mDrawRegion() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& mLocalToPanel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& mIsVisibleByAlpha() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& mIsVisibleByPanel() {
		return *(T*)((uintptr_t)this + 0x115);
	}
	template <typename T = bool> T& mIsInFront() {
		return *(T*)((uintptr_t)this + 0x116);
	}
	template <typename T = float> T& mLastAlpha() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& mMoved() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mDrawCall() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCorners() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& mAlphaFrameID() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& mMatrixFrame() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDimensions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateFinalAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFinalAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invalidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCumulativeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullCompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PanelCompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalculateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDirty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFromPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParentHasChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpgradeFrom265() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteToBuffers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T get_onRender() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF0F0))(this);
	}
	template <typename T = void> T set_onRender(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FF0F8))(this, value);
	}
	template <typename T = uintptr_t> T get_drawCall() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF48C))(this);
	}
	template <typename T = void> T set_drawCall(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FF494))(this, value);
	}
	template <typename T = uintptr_t> T get_drawRegion() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF624))(this);
	}
	template <typename T = void> T set_drawRegion(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FF634))(this, value);
	}
	template <typename T = Il2CppVector2> T get_pivotOffset() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF804))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF828))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x41FC0F8))(this, value);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFA30))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x41FC408))(this, value);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FB70C))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FB71C))(this, value);
	}
	template <typename T = float> T get_alpha() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFA38))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(UIWidget*, float))(Il2CppBase() + 0x41FFA40))(this, value);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFA6C))(this);
	}
	template <typename T = bool> T get_hasVertices() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFB50))(this);
	}
	template <typename T = uintptr_t> T get_rawPivot() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFB78))(this);
	}
	template <typename T = void> T set_rawPivot(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FFB80))(this, value);
	}
	template <typename T = uintptr_t> T get_pivot() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF820))(this);
	}
	template <typename T = void> T set_pivot(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x41FFBC4))(this, value);
	}
	template <typename T = int32_t> T get_depth() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FFF08))(this);
	}
	template <typename T = void> T set_depth(int32_t value) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x41FFF10))(this, value);
	}
	template <typename T = int32_t> T get_raycastDepth() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42000A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_localCorners() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x420048C))(this);
	}
	template <typename T = Il2CppVector2> T get_localSize() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42006F0))(this);
	}
	template <typename T = Il2CppVector3> T get_localCenter() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42007B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_worldCorners() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x420085C))(this);
	}
	template <typename T = Il2CppVector3> T get_worldCenter() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4200AC8))(this);
	}
	template <typename T = uintptr_t> T get_drawingDimensions() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4200B34))(this);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4200DB4))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4200DBC))(this, value);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x420100C))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4201100))(this, value);
	}
	template <typename T = uintptr_t> T get_shader() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4201208))(this);
	}
	template <typename T = void> T set_shader(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x42012FC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_relativeSize() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4201404))(this);
	}
	template <typename T = bool> T get_hasBoxCollider() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x420141C))(this);
	}
	template <typename T = void> T SetDimensions(int32_t w, int32_t h) {
		return ((T (*)(UIWidget*, int32_t, int32_t))(Il2CppBase() + 0x41FF830))(this, w, h);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSides(uintptr_t relativeTo) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4201524))(this, relativeTo);
	}
	template <typename T = float> T CalculateFinalAlpha(int32_t frameID) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x42018F0))(this, frameID);
	}
	template <typename T = void> T UpdateFinalAlpha(int32_t frameID) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x42019B4))(this, frameID);
	}
	template <typename T = void> T Invalidate(bool includeChildren) {
		return ((T (*)(UIWidget*, bool))(Il2CppBase() + 0x4201B20))(this, includeChildren);
	}
	template <typename T = float> T CalculateCumulativeAlpha(int32_t frameID) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x4201CF4))(this, frameID);
	}
	template <typename T = void> T SetRect(float x, float y, float width, float height) {
		return ((T (*)(UIWidget*, float, float, float, float))(Il2CppBase() + 0x4201F34))(this, x, y, width, height);
	}
	template <typename T = void> T ResizeCollider() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x41FF6C8))(this);
	}
	template <typename T = int32_t> static T FullCompareFunc(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4202450))(0, left, right);
	}
	template <typename T = int32_t> static T PanelCompareFunc(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4202574))(0, left, right);
	}
	template <typename T = uintptr_t> T CalculateBounds() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42027B0))(this);
	}
	template <typename T = uintptr_t> T CalculateBounds_1(uintptr_t relativeParent) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4202860))(this, relativeParent);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4202BE0))(this);
	}
	template <typename T = void> T RemoveFromPanel() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4200E98))(this);
	}
	template <typename T = void> T MarkAsChanged() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4202D2C))(this);
	}
	template <typename T = uintptr_t> T CreatePanel() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42001E4))(this);
	}
	template <typename T = void> T CheckLayer() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4202F00))(this);
	}
	template <typename T = void> T ParentHasChanged() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4203100))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4203308))(this);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42033E0))(this);
	}
	template <typename T = void> T UpgradeFrom265() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42034B4))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x420367C))(this);
	}
	template <typename T = void> T OnAnchor() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4203720))(this);
	}
	template <typename T = void> T UpdateRect() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x42045BC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(UIWidget*, bool))(Il2CppBase() + 0x42046C4))(this, paused);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4204784))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4204834))(this);
	}
	template <typename T = bool> T UpdateVisibility(bool visibleByAlpha, bool visibleByPanel) {
		return ((T (*)(UIWidget*, bool, bool))(Il2CppBase() + 0x4201E40))(this, visibleByAlpha, visibleByPanel);
	}
	template <typename T = bool> T UpdateTransform(int32_t frame) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x42048E4))(this, frame);
	}
	template <typename T = void> T CheckGeometry() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4204AFC))(this);
	}
	template <typename T = bool> T UpdateGeometry(int32_t frame) {
		return ((T (*)(UIWidget*, int32_t))(Il2CppBase() + 0x4204BD4))(this, frame);
	}
	template <typename T = void> T WriteToBuffers(Il2CppList<Il2CppVector3>* v, Il2CppList<Il2CppVector2>* u, Il2CppList<uintptr_t>* c, Il2CppList<Il2CppVector3>* n, Il2CppList<uintptr_t>* t, Il2CppList<uintptr_t>* u2) {
		return ((T (*)(UIWidget*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x420524C))(this, v, u, c, n, t, u2);
	}
	template <typename T = void> T MakePixelPerfect() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205368))(this);
	}
	template <typename T = int32_t> T get_minWidth() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205720))(this);
	}
	template <typename T = int32_t> T get_minHeight() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205728))(this);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205730))(this);
	}
	template <typename T = void> T set_border(uintptr_t value) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4205748))(this, value);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(UIWidget*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x420574C))(this, verts, uvs, cols);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetSides(uintptr_t P0) {
		return ((T (*)(UIWidget*, uintptr_t))(Il2CppBase() + 0x4205808))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Invalidate(bool P0) {
		return ((T (*)(UIWidget*, bool))(Il2CppBase() + 0x4205810))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ParentHasChanged() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInit() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRect() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(UIWidget*))(Il2CppBase() + 0x4205840))(this);
	}

};

}
