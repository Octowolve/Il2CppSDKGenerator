#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICamera"));
	}

	template <typename T = void*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GetKeyDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& GetKeyUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& GetAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& GetAnyKeyDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& GetMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& GetTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& RemoveTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& onScreenResize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& eventsGoToColliders() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& eventReceiverMask() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& processEventsIn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& debug() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& useMouse() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& useTouch() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& allowMultiTouch() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = bool> T& useKeyboard() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& useController() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& stickyTooltip() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = float> T& tooltipDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& longPressTooltip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mouseDragThreshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mouseClickThreshold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& touchDragThreshold() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& touchClickThreshold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& rangeDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& horizontalAxisName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& verticalAxisName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& horizontalPanAxisName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& verticalPanAxisName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& scrollAxisName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& commandClick() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& submitKey0() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& submitKey1() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& cancelKey0() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& cancelKey1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& autoHideCursor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& onCustomInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> static T& showTooltips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> static T& ignoreAllEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D);
	}
	template <typename T = bool> static T& ignoreControllerInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E);
	}
	template <typename T = bool> static T& mDisableController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F);
	}
	template <typename T = Il2CppVector2> static T& mLastPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppVector3> static T& lastWorldPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& lastWorldRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& lastHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& currentCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& onSchemeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& mLastScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = int32_t> static T& currentTouchID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& mCurrentKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& currentTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& onTouchCurrentChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = bool> static T& mInputFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& mGenericHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& fallThrough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& onClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& onDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& onHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& onPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& onSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& onScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& onDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& onDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& onDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& onDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& onDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& onDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& onKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& onNavigate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& onPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& onTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& onMouseMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& controller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& activeTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = Il2CppList<int32_t>*> static T& mTouchIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = int32_t> static T& mWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = int32_t> static T& mHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& mTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> static T& mTooltipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = float> T& mNextRaycast() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> static T& isDragging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& mRayHitObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& mHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& mSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& mHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& mHits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mRayHits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& m2DPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = float> static T& mNextEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = int32_t> static T& mNotifying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> static T& mUsingTouchEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountInputSources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindRootRigidbody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Raycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Raycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHighlighted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindCameraForLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Notify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFakeTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOthers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSpecialLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpecialLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelNextTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTooltip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}

	template <typename T = bool> T get_stickyPress() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39AE6FC))(this);
	}
	template <typename T = bool> static T get_disableController() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AE704))(0);
	}
	template <typename T = void> static T set_disableController(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x39AE808))(0, value);
	}
	template <typename T = Il2CppVector2> static T get_lastTouchPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AE8BC))(0);
	}
	template <typename T = void> static T set_lastTouchPosition(Il2CppVector2 value) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x39AE97C))(0, value);
	}
	template <typename T = Il2CppVector2> static T get_lastEventPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AEA38))(0);
	}
	template <typename T = void> static T set_lastEventPosition(Il2CppVector2 value) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x39AED24))(0, value);
	}
	template <typename T = uintptr_t> static T get_first() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AEDE0))(0);
	}
	template <typename T = uintptr_t> static T get_currentScheme() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AA7C8))(0);
	}
	template <typename T = void> static T set_currentScheme(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39AEF64))(0, value);
	}
	template <typename T = uintptr_t> static T get_currentKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AF4E4))(0);
	}
	template <typename T = void> static T set_currentKey(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39AF118))(0, value);
	}
	template <typename T = uintptr_t> static T get_currentRay() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AF710))(0);
	}
	template <typename T = bool> static T get_inputHasFocus() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AF998))(0);
	}
	template <typename T = uintptr_t> static T get_genericEventHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AFB58))(0);
	}
	template <typename T = void> static T set_genericEventHandler(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39AFC08))(0, value);
	}
	template <typename T = uintptr_t> static T get_mouse0() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AFCBC))(0);
	}
	template <typename T = uintptr_t> static T get_mouse1() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AFD98))(0);
	}
	template <typename T = uintptr_t> static T get_mouse2() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AFE74))(0);
	}
	template <typename T = bool> T get_handlesEvents() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39AFF50))(this);
	}
	template <typename T = uintptr_t> T get_cachedCamera() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B0258))(this);
	}
	template <typename T = uintptr_t> static T get_tooltipObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B0374))(0);
	}
	template <typename T = bool> static T get_isOverUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B0424))(0);
	}
	template <typename T = bool> static T get_uiHasFocus() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B0F28))(0);
	}
	template <typename T = uintptr_t> static T get_hoveredObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x39A8148))(0);
	}
	template <typename T = void> static T set_hoveredObject(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B1A00))(0, value);
	}
	template <typename T = uintptr_t> static T get_controllerNavigationObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B35EC))(0);
	}
	template <typename T = void> static T set_controllerNavigationObject(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B3E40))(0, value);
	}
	template <typename T = uintptr_t> static T get_selectedObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B41B0))(0);
	}
	template <typename T = void> static T set_selectedObject(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B43C0))(0, value);
	}
	template <typename T = bool> static T IsPressed(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B5030))(0, go);
	}
	template <typename T = int32_t> static T get_touchCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B5420))(0);
	}
	template <typename T = int32_t> static T CountInputSources() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B54B8))(0);
	}
	template <typename T = int32_t> static T get_dragCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B58D8))(0);
	}
	template <typename T = uintptr_t> static T get_mainCameraInCurrentMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B5CA4))(0);
	}
	template <typename T = uintptr_t> static T get_mainCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B5F38))(0);
	}
	template <typename T = uintptr_t> static T get_eventHandler() {
		return ((T (*)(void *))(Il2CppBase() + 0x39B003C))(0);
	}
	template <typename T = int32_t> static T CompareFunc(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39B6048))(0, a, b);
	}
	template <typename T = uintptr_t> static T FindRootRigidbody(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B61E0))(0, trans);
	}
	template <typename T = void> static T Raycast(uintptr_t touch) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B641C))(0, touch);
	}
	template <typename T = bool> static T Raycast_1(Il2CppVector3 inPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x39B6728))(0, inPos);
	}
	template <typename T = bool> static T IsVisible(Il2CppVector3 worldPoint, uintptr_t go) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x39B8468))(0, worldPoint, go);
	}
	template <typename T = bool> static T IsVisible_1(uintptr_t de) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B8174))(0, de);
	}
	template <typename T = bool> static T IsHighlighted(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39A9F74))(0, go);
	}
	template <typename T = uintptr_t> static T FindCameraForLayer(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x39B3390))(0, layer);
	}
	template <typename T = int32_t> static T GetDirection(uintptr_t up, uintptr_t down) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39B8668))(0, up, down);
	}
	template <typename T = int32_t> static T GetDirection_1(uintptr_t up0, uintptr_t up1, uintptr_t down0, uintptr_t down1) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39B88F4))(0, up0, up1, down0, down1);
	}
	template <typename T = int32_t> static T GetDirection_2(Il2CppString* axis) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x39B8C60))(0, axis);
	}
	template <typename T = void> static T Notify(uintptr_t go, Il2CppString* funcName, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39B2BE8))(0, go, funcName, obj);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B8FF0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B947C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B96D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B9818))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B9C6C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39BA8F8))(this);
	}
	template <typename T = void> T ProcessEvents() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39B9DA0))(this);
	}
	template <typename T = void> T ProcessMouse() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39BB4D4))(this);
	}
	template <typename T = void> T ProcessTouches() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39BAC44))(this);
	}
	template <typename T = void> T ProcessFakeTouches() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39BE95C))(this);
	}
	template <typename T = void> T ProcessOthers() {
		return ((T (*)(UICamera*))(Il2CppBase() + 0x39BC930))(this);
	}
	template <typename T = void> T ProcessPress(bool pressed, float click, float drag) {
		return ((T (*)(UICamera*, bool, float, float))(Il2CppBase() + 0x39BF23C))(this, pressed, click, drag);
	}
	template <typename T = void> T ProcessRelease(bool isMouse, float drag) {
		return ((T (*)(UICamera*, bool, float))(Il2CppBase() + 0x39C128C))(this, isMouse, drag);
	}
	template <typename T = bool> T HasCollider(uintptr_t go) {
		return ((T (*)(UICamera*, uintptr_t))(Il2CppBase() + 0x39C2290))(this, go);
	}
	template <typename T = void> T RemoveSpecialLayer(Il2CppString* layerName) {
		return ((T (*)(UICamera*, Il2CppString*))(Il2CppBase() + 0x39C245C))(this, layerName);
	}
	template <typename T = void> T AddSpecialLayer(Il2CppString* layerName) {
		return ((T (*)(UICamera*, Il2CppString*))(Il2CppBase() + 0x39C25F8))(this, layerName);
	}
	template <typename T = void> T ProcessTouch(bool pressed, bool released) {
		return ((T (*)(UICamera*, bool, bool))(Il2CppBase() + 0x39BE258))(this, pressed, released);
	}
	template <typename T = void> static T CancelNextTooltip() {
		return ((T (*)(void *))(Il2CppBase() + 0x39C27B0))(0);
	}
	template <typename T = bool> static T ShowTooltip(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39B26A8))(0, go);
	}
	template <typename T = bool> static T HideTooltip() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AF594))(0);
	}
	template <typename T = int32_t> static T Raycastm__0(uintptr_t r1, uintptr_t r2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C319C))(0, r1, r2);
	}
	template <typename T = bool> static T GetKeyDownm__1(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39C321C))(0, key);
	}
	template <typename T = bool> static T GetKeyUpm__2(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39C3330))(0, key);
	}
	template <typename T = bool> static T GetKeym__3(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39C3444))(0, key);
	}
	template <typename T = float> static T GetAxism__4(Il2CppString* axis) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x39C3558))(0, axis);
	}
	template <typename T = uintptr_t> static T GetMousem__5(int32_t button) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x39C3660))(0, button);
	}
	template <typename T = uintptr_t> static T GetTouchm__6(int32_t id, bool createIfMissing) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x39C3744))(0, id, createIfMissing);
	}
	template <typename T = void> static T RemoveTouchm__7(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x39C3B44))(0, id);
	}

};

}
