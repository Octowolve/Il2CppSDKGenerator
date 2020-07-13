#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIScrollView"));
	}

	template <typename T = void*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& movement() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& dragEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& restrictWithinPanel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& constrainOnDrag() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& disableDragIfFits() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& smoothDragStart() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& iOSDragEmulation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& scrollWheelFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& momentumAmount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& dampenStrength() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& horizontalScrollBar() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& verticalScrollBar() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& showScrollBars() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& customMovement() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& contentPivot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& onDragStarted() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onDragFinished() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& onMomentumMove() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onStoppedMoving() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& onDragExcessBounds() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& onDragInverseExcessBounds() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& maxOffsetValue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector2> T& relativePositionOnReset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mPlane() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& mLastPos() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& mMomentum() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& mScroll() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mBounds() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& mCalculatedBounds() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& mShouldMove() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& mIgnoreCallbacks() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = int32_t> T& mDragID() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector2> T& mDragStartOffset() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& mDragStarted() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& mAutoSnap() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = bool> T& mAutoSnapDirection() {
		return *(T*)((uintptr_t)this + 0xDB);
	}
	template <typename T = bool> T& IsCustomPos() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& CustomPos() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& NumChildsWaiting() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onRefreshViewNotify() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& centerOnChild() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_WrapContent() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckScrollbars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestrictWithinBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RestrictWithinBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomMovePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableSpring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScrollbars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateScrollbars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_UpdateScrollbars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDragAmount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvalidateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveRelative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveAbsolute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Scroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_panel() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F7590C))(this);
	}
	template <typename T = bool> T get_isDragging() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F75914))(this);
	}
	template <typename T = uintptr_t> T get_bounds() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9DD9C))(this);
	}
	template <typename T = bool> T get_canMoveHorizontally() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9DE70))(this);
	}
	template <typename T = bool> T get_canMoveVertically() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9DEAC))(this);
	}
	template <typename T = bool> T get_shouldMoveHorizontally() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9DEE8))(this);
	}
	template <typename T = bool> T get_shouldMoveVertically() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E044))(this);
	}
	template <typename T = bool> T get_shouldMove() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E1A0))(this);
	}
	template <typename T = Il2CppVector3> T get_currentMomentum() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E468))(this);
	}
	template <typename T = void> T set_currentMomentum(Il2CppVector3 value) {
		return ((T (*)(UIScrollView*, Il2CppVector3))(Il2CppBase() + 0x2F9E47C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E490))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E75C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9EC54))(this);
	}
	template <typename T = void> T CheckScrollbars() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9E8B8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9ED44))(this);
	}
	template <typename T = bool> T RestrictWithinBounds(bool instant) {
		return ((T (*)(UIScrollView*, bool))(Il2CppBase() + 0x2F9EE7C))(this, instant);
	}
	template <typename T = void> T set_AutoSnap(bool value) {
		return ((T (*)(UIScrollView*, bool))(Il2CppBase() + 0x2F9F738))(this, value);
	}
	template <typename T = void> T set_AutoSnapDirection(bool value) {
		return ((T (*)(UIScrollView*, bool))(Il2CppBase() + 0x2F9F740))(this, value);
	}
	template <typename T = bool> T RestrictWithinBounds_1(bool instant, bool horizontal, bool vertical, bool bForce) {
		return ((T (*)(UIScrollView*, bool, bool, bool, bool))(Il2CppBase() + 0x2F9EF74))(this, instant, horizontal, vertical, bForce);
	}
	template <typename T = void> T SetCustomMovePos(Il2CppVector3 pos) {
		return ((T (*)(UIScrollView*, Il2CppVector3))(Il2CppBase() + 0x2F9F938))(this, pos);
	}
	template <typename T = void> T DisableSpring() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9F7D8))(this);
	}
	template <typename T = float> T get_ProgressX() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9FA40))(this);
	}
	template <typename T = float> T get_ProgressY() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F9FDBC))(this);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2FA0138))(this);
	}
	template <typename T = void> T UpdateScrollbars() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F74C90))(this);
	}
	template <typename T = void> T UpdateScrollbars_1(bool recalculateBounds) {
		return ((T (*)(UIScrollView*, bool))(Il2CppBase() + 0x2FA0158))(this, recalculateBounds);
	}
	template <typename T = void> T UpdateScrollbars_2(uintptr_t slider, float contentMin, float contentMax, float contentSize, float viewSize, bool inverted) {
		return ((T (*)(UIScrollView*, uintptr_t, float, float, float, float, bool))(Il2CppBase() + 0x2FA09EC))(this, slider, contentMin, contentMax, contentSize, viewSize, inverted);
	}
	template <typename T = void> T SetDragAmount(float x, float y, bool updateScrollbars) {
		return ((T (*)(UIScrollView*, float, float, bool))(Il2CppBase() + 0x2FA0E3C))(this, x, y, updateScrollbars);
	}
	template <typename T = void> T InvalidateBounds() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F7122C))(this);
	}
	template <typename T = void> T LateResetScrollView() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2FA134C))(this);
	}
	template <typename T = void> T ResetPosition() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F71300))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2F6C064))(this);
	}
	template <typename T = void> T OnScrollBar() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2FA1440))(this);
	}
	template <typename T = void> T MoveRelative(Il2CppVector3 relative) {
		return ((T (*)(UIScrollView*, Il2CppVector3))(Il2CppBase() + 0x2FA1654))(this, relative);
	}
	template <typename T = void> T MoveAbsolute(Il2CppVector3 absolute) {
		return ((T (*)(UIScrollView*, Il2CppVector3))(Il2CppBase() + 0x2FA17F8))(this, absolute);
	}
	template <typename T = void> T Press(bool pressed) {
		return ((T (*)(UIScrollView*, bool))(Il2CppBase() + 0x2FA19A4))(this, pressed);
	}
	template <typename T = void> T Drag() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2FA2224))(this);
	}
	template <typename T = void> T Scroll(float delta) {
		return ((T (*)(UIScrollView*, float))(Il2CppBase() + 0x2FA2C84))(this, delta);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UIScrollView*))(Il2CppBase() + 0x2FA2EB4))(this);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UIScrollView*, Il2CppVector2))(Il2CppBase() + 0x2FA3890))(this, delta);
	}

};

}
