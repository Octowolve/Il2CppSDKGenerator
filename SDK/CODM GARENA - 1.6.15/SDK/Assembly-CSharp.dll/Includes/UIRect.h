#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIRect"));
	}

	template <typename T = uintptr_t> T& leftAnchor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& rightAnchor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bottomAnchor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& topAnchor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& updateAnchors() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mGo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& mChildren() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mChanged() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mParentFound() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& mUpdateAnchors() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = int32_t> T& mUpdateFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mAnchorsCached() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mParent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mRootSet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& WaitingForProcess() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& onAfterProcessed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& NeedDoEnableBeforeFrame() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& WaitingForDoEnable() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& ToDoEnableRectList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FrameSlice_LastFrameIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& FrameSliceForOpenUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& FrameSlice_LastFrameEnqueuedCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& FrameSlice_LeastProcessCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& FrameSlice_ResetLeastProcessCountFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& FRAME_SLICE_FOR_FRAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FRAME_SLICE_LEAST_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& rectAnchorAlwaysUpdateEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = float> T& finalAlpha() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> T& mEnabled() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mOpenFrameSliceThisTime() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = float> T& m_FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_FadeOutDuration() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_FadeOutStartAlpha() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& NumAnchorsWaiting() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invalidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSides() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnableInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FrameSlicedDoEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUpdateFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchorsInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRectToUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix5_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScreenRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAndUpdateAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindCameraFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParentHasChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAfterProcessedInFrameSlice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseFrameSliceThisTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseFrameSliceThisTimeWithChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = void*> T get_ChildrenRects() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F94D00))(this);
	}
	template <typename T = uintptr_t> T get_cachedGameObject() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F707A4))(this);
	}
	template <typename T = uintptr_t> T get_cachedTransform() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F5AD4C))(this);
	}
	template <typename T = uintptr_t> T get_anchorCamera() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F6B1D4))(this);
	}
	template <typename T = bool> T get_isFullyAnchored() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F5A294))(this);
	}
	template <typename T = bool> T get_isAnchoredHorizontally() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F553E8))(this);
	}
	template <typename T = bool> T get_isAnchoredVertically() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F55540))(this);
	}
	template <typename T = bool> T get_canBeAnchored() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F94DB0))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F6E268))(this);
	}
	template <typename T = uintptr_t> T get_root() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F5AE1C))(this);
	}
	template <typename T = bool> T get_isAnchored() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F6E794))(this);
	}
	template <typename T = float> T get_alpha() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(UIRect*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T CalculateFinalAlpha(int32_t frameID) {
		return ((T (*)(UIRect*, int32_t))(Il2CppBase() + 0x0))(this, frameID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_localCorners() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_worldCorners() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_cameraRayDistance() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F6CFA4))(this);
	}
	template <typename T = void> T Invalidate(bool includeChildren) {
		return ((T (*)(UIRect*, bool))(Il2CppBase() + 0x2F6DF38))(this, includeChildren);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSides(uintptr_t relativeTo) {
		return ((T (*)(UIRect*, uintptr_t))(Il2CppBase() + 0x2F6DA18))(this, relativeTo);
	}
	template <typename T = Il2CppVector3> T GetLocalPos(uintptr_t ac, uintptr_t trans) {
		return ((T (*)(UIRect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F727C4))(this, ac, trans);
	}
	template <typename T = bool> T get_RectEnabled() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F75938))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F94DB8))(this);
	}
	template <typename T = void> T DoEnableInternal() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F5A550))(this);
	}
	template <typename T = void> static T FrameSlicedDoEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F951A0))(0);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F70F90))(this);
	}
	template <typename T = void> T SetUpdateFrame(int32_t frame) {
		return ((T (*)(UIRect*, int32_t))(Il2CppBase() + 0x2F5999C))(this, frame);
	}
	template <typename T = void> T FadeOut(float fadeTime) {
		return ((T (*)(UIRect*, float))(Il2CppBase() + 0x2F957E0))(this, fadeTime);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F71858))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F95970))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F7006C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F95A68))(this);
	}
	template <typename T = bool> T UpdateFadeOut() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F95B64))(this);
	}
	template <typename T = void> T UpdateRect() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F95D04))(this);
	}
	template <typename T = void> T DelayUpdateAnchors() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F969C4))(this);
	}
	template <typename T = void> T UpdateAnchorsInternal(int32_t frame) {
		return ((T (*)(UIRect*, int32_t))(Il2CppBase() + 0x2F95E84))(this, frame);
	}
	template <typename T = void> T UpdateAnchors() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F96ABC))(this);
	}
	template <typename T = void> T OnAnchor() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAnchor(uintptr_t t) {
		return ((T (*)(UIRect*, uintptr_t))(Il2CppBase() + 0x2F96E54))(this, t);
	}
	template <typename T = void> T SetRectToUpdate() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F96F7C))(this);
	}
	template <typename T = void> T SetAnchor_1(uintptr_t go) {
		return ((T (*)(UIRect*, uintptr_t))(Il2CppBase() + 0x2F970B8))(this, go);
	}
	template <typename T = void> T SetAnchor_2(uintptr_t go, int32_t left, int32_t bottom, int32_t right, int32_t top) {
		return ((T (*)(UIRect*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2F97250))(this, go, left, bottom, right, top);
	}
	template <typename T = void> T SetAnchor_3(uintptr_t go, float left, float bottom, float right, float top) {
		return ((T (*)(UIRect*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x2F97494))(this, go, left, bottom, right, top);
	}
	template <typename T = void> T SetAnchor_4(uintptr_t go, float left, int32_t leftOffset, float bottom, int32_t bottomOffset, float right, int32_t rightOffset, float top, int32_t topOffset) {
		return ((T (*)(UIRect*, uintptr_t, float, int32_t, float, int32_t, float, int32_t, float, int32_t))(Il2CppBase() + 0x2F976E8))(this, go, left, leftOffset, bottom, bottomOffset, right, rightOffset, top, topOffset);
	}
	template <typename T = void> T SetAnchor_5(float left, int32_t leftOffset, float bottom, int32_t bottomOffset, float right, int32_t rightOffset, float top, int32_t topOffset) {
		return ((T (*)(UIRect*, float, int32_t, float, int32_t, float, int32_t, float, int32_t))(Il2CppBase() + 0x2F9795C))(this, left, leftOffset, bottom, bottomOffset, right, rightOffset, top, topOffset);
	}
	template <typename T = void> T SetScreenRect(int32_t left, int32_t top, int32_t width, int32_t height) {
		return ((T (*)(UIRect*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2F97B74))(this, left, top, width, height);
	}
	template <typename T = void> T ResetAnchors() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F75520))(this);
	}
	template <typename T = void> T ResetAndUpdateAnchors() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F97EB4))(this);
	}
	template <typename T = void> T SetRect(float x, float y, float width, float height) {
		return ((T (*)(UIRect*, float, float, float, float))(Il2CppBase() + 0x0))(this, x, y, width, height);
	}
	template <typename T = void> T FindCameraFor(uintptr_t ap) {
		return ((T (*)(UIRect*, uintptr_t))(Il2CppBase() + 0x2F97CA4))(this, ap);
	}
	template <typename T = void> T ParentHasChanged() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F7040C))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F69568))(this);
	}
	template <typename T = void> T ForceUpdate(bool recursive) {
		return ((T (*)(UIRect*, bool))(Il2CppBase() + 0x2F97F90))(this, recursive);
	}
	template <typename T = void> T AddAfterProcessedInFrameSlice(uintptr_t action) {
		return ((T (*)(UIRect*, uintptr_t))(Il2CppBase() + 0x2F94FA0))(this, action);
	}
	template <typename T = void> T CloseFrameSliceThisTime() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F9806C))(this);
	}
	template <typename T = void> T CloseFrameSliceThisTimeWithChildren() {
		return ((T (*)(UIRect*))(Il2CppBase() + 0x2F98140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate(bool P0) {
		return ((T (*)(UIRect*, bool))(Il2CppBase() + 0x2F98440))(this, P0);
	}

};

}
