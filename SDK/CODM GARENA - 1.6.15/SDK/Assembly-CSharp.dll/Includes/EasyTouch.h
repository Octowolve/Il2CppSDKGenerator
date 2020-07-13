#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasyTouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EasyTouch"));
	}

	template <typename T = uintptr_t> static T& On_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& On_Cancel2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& On_SimpleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& On_DoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& On_LongTapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& On_LongTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& On_LongTapEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& On_DragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& On_SwipeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& On_Swipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& On_SwipeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& On_TouchStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& On_TouchDown2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& On_TouchUp2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& On_SimpleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& On_DoubleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& On_LongTapStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& On_LongTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& On_LongTapEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& On_Twist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& On_TwistEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& On_DragStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& On_Drag2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& On_DragEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& On_SwipeStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& On_Swipe2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& On_SwipeEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& enableRemote() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& useBroadcastMessage() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> T& receiverObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isExtension() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& enable2FingersGesture() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& enableTwist() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& enablePinch() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uintptr_t> T& easyTouchCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& autoSelect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& pickableLayers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& StationnaryTolerance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& longTapTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& swipeTolerance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& minPinchLength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& minTwistAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& enabledNGuiMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& nGUILayers() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& nGUICameras() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isStartHoverNGUI() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<Il2CppRect>*> T& reservedAreas() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& enableReservedArea() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& twistKey() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& swipeKey() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& showGeneral() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& showSelect() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& showGesture() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = bool> T& showTwoFinger() {
		return *(T*)((uintptr_t)this + 0x5B);
	}
	template <typename T = bool> T& showSecondFinger() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& complexCurrentGesture() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& oldGesture() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& startTimeAction() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fingers() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PreFingers() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& pickObject2Finger() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& oldPickObject2Finger() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& secondFingerTexture() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector2> T& startPosition2Finger() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& twoFinger0() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& twoFinger1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector2> T& oldStartPosition2Finger() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& oldFingerDistance() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& twoFingerDragStart() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& twoFingerSwipeStart() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = int32_t> T& oldTouchCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& CachedGesture() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Cancel2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Cancel2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SimpleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SimpleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTapEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTapEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SwipeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SwipeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Swipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Swipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SwipeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SwipeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchDown2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchDown2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TouchUp2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TouchUp2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SimpleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SimpleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DoubleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DoubleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTapStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTapStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_LongTapEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_LongTapEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Twist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Twist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_TwistEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_TwistEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DragStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DragStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Drag2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Drag2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_DragEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_DragEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SwipeStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SwipeStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_Swipe2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_Swipe2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_SwipeEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_SwipeEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OneFinger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGesture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGesture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TwoFinger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTwoFinger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateStateEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGesture2Finger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGesture2Finger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickeGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FingerInTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeltaAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TwistAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouchHoverNGui() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouchHoverVirtualControll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFinger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTouchCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnable2FingersGesture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnable2FingersGesture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableTwist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnableTwist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnablePinch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnablePinch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableAutoSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnableAutoSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOtherReceiverObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherReceiverObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStationnaryTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStationnaryTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetlongTapTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetlongTapTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwipeTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwipeTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMinPinchLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinPinchLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMinTwistAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMinTwistAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPickedObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRectUnderTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFingerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsReservedArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsReservedArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddReservedArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveReservedArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}

	template <typename T = void> static T add_On_Cancel(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BACC3C))(0, value);
	}
	template <typename T = void> static T remove_On_Cancel(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BACE3C))(0, value);
	}
	template <typename T = void> static T add_On_Cancel2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAD03C))(0, value);
	}
	template <typename T = void> static T remove_On_Cancel2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAD234))(0, value);
	}
	template <typename T = void> static T add_On_TouchStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA2498))(0, value);
	}
	template <typename T = void> static T remove_On_TouchStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA2C38))(0, value);
	}
	template <typename T = void> static T add_On_TouchDown(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA26A4))(0, value);
	}
	template <typename T = void> static T remove_On_TouchDown(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA2E30))(0, value);
	}
	template <typename T = void> static T add_On_TouchUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA28B0))(0, value);
	}
	template <typename T = void> static T remove_On_TouchUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA3028))(0, value);
	}
	template <typename T = void> static T add_On_SimpleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA79C8))(0, value);
	}
	template <typename T = void> static T remove_On_SimpleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA7FD4))(0, value);
	}
	template <typename T = void> static T add_On_DoubleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA7BD4))(0, value);
	}
	template <typename T = void> static T remove_On_DoubleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA81CC))(0, value);
	}
	template <typename T = void> static T add_On_LongTapStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAD42C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTapStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAD624))(0, value);
	}
	template <typename T = void> static T add_On_LongTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAD81C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BADA14))(0, value);
	}
	template <typename T = void> static T add_On_LongTapEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BADC0C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTapEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BADE04))(0, value);
	}
	template <typename T = void> static T add_On_DragStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BADFFC))(0, value);
	}
	template <typename T = void> static T remove_On_DragStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAE1F4))(0, value);
	}
	template <typename T = void> static T add_On_Drag(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAE3EC))(0, value);
	}
	template <typename T = void> static T remove_On_Drag(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAE5E4))(0, value);
	}
	template <typename T = void> static T add_On_DragEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAE7DC))(0, value);
	}
	template <typename T = void> static T remove_On_DragEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAE9D4))(0, value);
	}
	template <typename T = void> static T add_On_SwipeStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAEBCC))(0, value);
	}
	template <typename T = void> static T remove_On_SwipeStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAEDC4))(0, value);
	}
	template <typename T = void> static T add_On_Swipe(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAEFBC))(0, value);
	}
	template <typename T = void> static T remove_On_Swipe(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAF1B4))(0, value);
	}
	template <typename T = void> static T add_On_SwipeEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAF3AC))(0, value);
	}
	template <typename T = void> static T remove_On_SwipeEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAF5A4))(0, value);
	}
	template <typename T = void> static T add_On_TouchStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAF79C))(0, value);
	}
	template <typename T = void> static T remove_On_TouchStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAF994))(0, value);
	}
	template <typename T = void> static T add_On_TouchDown2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAFB8C))(0, value);
	}
	template <typename T = void> static T remove_On_TouchDown2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAFD84))(0, value);
	}
	template <typename T = void> static T add_On_TouchUp2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BAFF7C))(0, value);
	}
	template <typename T = void> static T remove_On_TouchUp2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0174))(0, value);
	}
	template <typename T = void> static T add_On_SimpleTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB036C))(0, value);
	}
	template <typename T = void> static T remove_On_SimpleTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0564))(0, value);
	}
	template <typename T = void> static T add_On_DoubleTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB075C))(0, value);
	}
	template <typename T = void> static T remove_On_DoubleTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0954))(0, value);
	}
	template <typename T = void> static T add_On_LongTapStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0B4C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTapStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0D44))(0, value);
	}
	template <typename T = void> static T add_On_LongTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB0F3C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTap2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1134))(0, value);
	}
	template <typename T = void> static T add_On_LongTapEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB132C))(0, value);
	}
	template <typename T = void> static T remove_On_LongTapEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1524))(0, value);
	}
	template <typename T = void> static T add_On_Twist(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB171C))(0, value);
	}
	template <typename T = void> static T remove_On_Twist(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1914))(0, value);
	}
	template <typename T = void> static T add_On_TwistEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1B0C))(0, value);
	}
	template <typename T = void> static T remove_On_TwistEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1D04))(0, value);
	}
	template <typename T = void> static T add_On_PinchIn(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB1EFC))(0, value);
	}
	template <typename T = void> static T remove_On_PinchIn(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB20F4))(0, value);
	}
	template <typename T = void> static T add_On_PinchOut(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB22EC))(0, value);
	}
	template <typename T = void> static T remove_On_PinchOut(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB24E4))(0, value);
	}
	template <typename T = void> static T add_On_PinchEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB26DC))(0, value);
	}
	template <typename T = void> static T remove_On_PinchEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB28D4))(0, value);
	}
	template <typename T = void> static T add_On_DragStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB2ACC))(0, value);
	}
	template <typename T = void> static T remove_On_DragStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB2CC4))(0, value);
	}
	template <typename T = void> static T add_On_Drag2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB2EBC))(0, value);
	}
	template <typename T = void> static T remove_On_Drag2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB30B4))(0, value);
	}
	template <typename T = void> static T add_On_DragEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB32AC))(0, value);
	}
	template <typename T = void> static T remove_On_DragEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB34A4))(0, value);
	}
	template <typename T = void> static T add_On_SwipeStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB369C))(0, value);
	}
	template <typename T = void> static T remove_On_SwipeStart2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB3894))(0, value);
	}
	template <typename T = void> static T add_On_Swipe2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB3A8C))(0, value);
	}
	template <typename T = void> static T remove_On_Swipe2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB3C84))(0, value);
	}
	template <typename T = void> static T add_On_SwipeEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB3E7C))(0, value);
	}
	template <typename T = void> static T remove_On_SwipeEnd2Fingers(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BB4074))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB426C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB437C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB46A8))(this);
	}
	template <typename T = void> T InitEasyTouch() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB444C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB48A0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB4938))(this);
	}
	template <typename T = void> T UpdateTouches(bool realTouch, int32_t touchCount) {
		return ((T (*)(EasyTouch*, bool, int32_t))(Il2CppBase() + 0x4BB50A0))(this, realTouch, touchCount);
	}
	template <typename T = void> T ResetTouches() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB860C))(this);
	}
	template <typename T = void> T OneFinger(int32_t fingerIndex) {
		return ((T (*)(EasyTouch*, int32_t))(Il2CppBase() + 0x4BB6E0C))(this, fingerIndex);
	}
	template <typename T = void> T CreateGesture(int32_t touchIndex, uintptr_t message, uintptr_t finger, float actionTime, uintptr_t swipe, float swipeLength, Il2CppVector2 swipeVector) {
		return ((T (*)(EasyTouch*, int32_t, uintptr_t, uintptr_t, float, uintptr_t, float, Il2CppVector2))(Il2CppBase() + 0x4BB93F8))(this, touchIndex, message, finger, actionTime, swipe, swipeLength, swipeVector);
	}
	template <typename T = void> T SendGesture(uintptr_t message, uintptr_t gesture) {
		return ((T (*)(EasyTouch*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBA098))(this, message, gesture);
	}
	template <typename T = void> T TwoFinger() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BB5728))(this);
	}
	template <typename T = int32_t> T GetTwoFinger(int32_t index) {
		return ((T (*)(EasyTouch*, int32_t))(Il2CppBase() + 0x4BBA9A0))(this, index);
	}
	template <typename T = void> T CreateStateEnd2Fingers(uintptr_t gesture, Il2CppVector2 startPosition, Il2CppVector2 position, Il2CppVector2 deltaPosition, float time, bool realEnd, float fingerDistance) {
		return ((T (*)(EasyTouch*, uintptr_t, Il2CppVector2, Il2CppVector2, Il2CppVector2, float, bool, float))(Il2CppBase() + 0x4BBAAC0))(this, gesture, startPosition, position, deltaPosition, time, realEnd, fingerDistance);
	}
	template <typename T = void> T CreateGesture2Finger(uintptr_t message, Il2CppVector2 startPosition, Il2CppVector2 position, Il2CppVector2 deltaPosition, float actionTime, uintptr_t swipe, float swipeLength, Il2CppVector2 swipeVector, float twist, float pinch, float twoDistance) {
		return ((T (*)(EasyTouch*, uintptr_t, Il2CppVector2, Il2CppVector2, Il2CppVector2, float, uintptr_t, float, Il2CppVector2, float, float, float))(Il2CppBase() + 0x4BB4C5C))(this, message, startPosition, position, deltaPosition, actionTime, swipe, swipeLength, swipeVector, twist, pinch, twoDistance);
	}
	template <typename T = void> T SendGesture2Finger(uintptr_t message, uintptr_t gesture) {
		return ((T (*)(EasyTouch*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBB288))(this, message, gesture);
	}
	template <typename T = void> T RaiseEvent(uintptr_t evnt, uintptr_t gesture) {
		return ((T (*)(EasyTouch*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBA404))(this, evnt, gesture);
	}
	template <typename T = uintptr_t> T GetPickeGameObject(Il2CppVector2 screenPos) {
		return ((T (*)(EasyTouch*, Il2CppVector2))(Il2CppBase() + 0x4BB9180))(this, screenPos);
	}
	template <typename T = uintptr_t> T GetSwipe(Il2CppVector2 start, Il2CppVector2 end) {
		return ((T (*)(EasyTouch*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4BB98C8))(this, start, end);
	}
	template <typename T = bool> T FingerInTolerance(uintptr_t finger) {
		return ((T (*)(EasyTouch*, uintptr_t))(Il2CppBase() + 0x4BB97A4))(this, finger);
	}
	template <typename T = float> T DeltaAngle(Il2CppVector2 start, Il2CppVector2 end) {
		return ((T (*)(EasyTouch*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4BBCAB4))(this, start, end);
	}
	template <typename T = float> T TwistAngle() {
		return ((T (*)(EasyTouch*))(Il2CppBase() + 0x4BBB078))(this);
	}
	template <typename T = bool> T IsTouchHoverNGui(int32_t touchIndex) {
		return ((T (*)(EasyTouch*, int32_t))(Il2CppBase() + 0x4BB9B6C))(this, touchIndex);
	}
	template <typename T = bool> T IsTouchHoverVirtualControll(int32_t touchIndex) {
		return ((T (*)(EasyTouch*, int32_t))(Il2CppBase() + 0x4BB9DD0))(this, touchIndex);
	}
	template <typename T = uintptr_t> T GetFinger(int32_t finderId) {
		return ((T (*)(EasyTouch*, int32_t))(Il2CppBase() + 0x4BBCC18))(this, finderId);
	}
	template <typename T = void> static T SetEnabled(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBCD78))(0, enable);
	}
	template <typename T = bool> static T GetEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBCE60))(0);
	}
	template <typename T = int32_t> static T GetTouchCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBCF18))(0);
	}
	template <typename T = void> static T SetCamera(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BBCFD0))(0, cam);
	}
	template <typename T = uintptr_t> static T GetCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD084))(0);
	}
	template <typename T = void> static T SetEnable2FingersGesture(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBD130))(0, enable);
	}
	template <typename T = bool> static T GetEnable2FingersGesture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD1E4))(0);
	}
	template <typename T = void> static T SetEnableTwist(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBD29C))(0, enable);
	}
	template <typename T = bool> static T GetEnableTwist() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD350))(0);
	}
	template <typename T = void> static T SetEnablePinch(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBD408))(0, enable);
	}
	template <typename T = bool> static T GetEnablePinch() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD4BC))(0);
	}
	template <typename T = void> static T SetEnableAutoSelect(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBD574))(0, enable);
	}
	template <typename T = bool> static T GetEnableAutoSelect() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD628))(0);
	}
	template <typename T = void> static T SetOtherReceiverObject(uintptr_t receiver) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BBD6E0))(0, receiver);
	}
	template <typename T = uintptr_t> static T GetOtherReceiverObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD794))(0);
	}
	template <typename T = void> static T SetStationnaryTolerance(float tolerance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4BBD840))(0, tolerance);
	}
	template <typename T = float> static T GetStationnaryTolerance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBD8F8))(0);
	}
	template <typename T = void> static T SetlongTapTime(float time) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4BBD9A4))(0, time);
	}
	template <typename T = float> static T GetlongTapTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBDA5C))(0);
	}
	template <typename T = void> static T SetSwipeTolerance(float tolerance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4BBDB08))(0, tolerance);
	}
	template <typename T = float> static T GetSwipeTolerance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBDBC0))(0);
	}
	template <typename T = void> static T SetMinPinchLength(float length) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4BBDC6C))(0, length);
	}
	template <typename T = float> static T GetMinPinchLength() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBDD24))(0);
	}
	template <typename T = void> static T SetMinTwistAngle(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4BBDDD0))(0, angle);
	}
	template <typename T = float> static T GetMinTwistAngle() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBDE88))(0);
	}
	template <typename T = uintptr_t> static T GetCurrentPickedObject(int32_t fingerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4BBDF34))(0, fingerIndex);
	}
	template <typename T = bool> static T IsRectUnderTouch(Il2CppRect rect, bool guiRect) {
		return ((T (*)(void *, Il2CppRect, bool))(Il2CppBase() + 0x4BBE00C))(0, rect, guiRect);
	}
	template <typename T = Il2CppVector2> static T GetFingerPosition(int32_t fingerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4BBE28C))(0, fingerIndex);
	}
	template <typename T = bool> static T GetIsReservedArea() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BBE3C8))(0);
	}
	template <typename T = void> static T SetIsReservedArea(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4BBE480))(0, enable);
	}
	template <typename T = void> static T AddReservedArea(Il2CppRect rec) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x4BA3BE8))(0, rec);
	}
	template <typename T = void> static T RemoveReservedArea(Il2CppRect rec) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x4BA3220))(0, rec);
	}
	template <typename T = void> static T ResetTouch(int32_t fingerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4BBE534))(0, fingerIndex);
	}

};

}
