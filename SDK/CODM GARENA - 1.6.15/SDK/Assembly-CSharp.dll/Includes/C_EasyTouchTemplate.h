#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CEasyTouchTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C_EasyTouchTemplate"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SimpleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTapStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTapEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SwipeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Swipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SwipeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchDown2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchUp2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SimpleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DoubleTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTapStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTap2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_LongTapEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Twist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TwistEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DragStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Drag2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DragEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SwipeStart2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_Swipe2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SwipeEnd2Fingers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CEasyTouchTemplate*))(Il2CppBase() + 0x5311D2C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CEasyTouchTemplate*))(Il2CppBase() + 0x5312764))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CEasyTouchTemplate*))(Il2CppBase() + 0x531319C))(this);
	}
	template <typename T = void> T On_Cancel(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313BD4))(this, gesture);
	}
	template <typename T = void> T On_TouchStart(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313C74))(this, gesture);
	}
	template <typename T = void> T On_TouchDown(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313D14))(this, gesture);
	}
	template <typename T = void> T On_TouchUp(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313DB4))(this, gesture);
	}
	template <typename T = void> T On_SimpleTap(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313E54))(this, gesture);
	}
	template <typename T = void> T On_DoubleTap(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313EF4))(this, gesture);
	}
	template <typename T = void> T On_LongTapStart(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5313F94))(this, gesture);
	}
	template <typename T = void> T On_LongTap(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314034))(this, gesture);
	}
	template <typename T = void> T On_LongTapEnd(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53140D4))(this, gesture);
	}
	template <typename T = void> T On_DragStart(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314174))(this, gesture);
	}
	template <typename T = void> T On_Drag(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314214))(this, gesture);
	}
	template <typename T = void> T On_DragEnd(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53142B4))(this, gesture);
	}
	template <typename T = void> T On_SwipeStart(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314354))(this, gesture);
	}
	template <typename T = void> T On_Swipe(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53143F4))(this, gesture);
	}
	template <typename T = void> T On_SwipeEnd(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314494))(this, gesture);
	}
	template <typename T = void> T On_TouchStart2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314534))(this, gesture);
	}
	template <typename T = void> T On_TouchDown2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53145D4))(this, gesture);
	}
	template <typename T = void> T On_TouchUp2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314674))(this, gesture);
	}
	template <typename T = void> T On_SimpleTap2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314714))(this, gesture);
	}
	template <typename T = void> T On_DoubleTap2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53147B4))(this, gesture);
	}
	template <typename T = void> T On_LongTapStart2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314854))(this, gesture);
	}
	template <typename T = void> T On_LongTap2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x53148F4))(this, gesture);
	}
	template <typename T = void> T On_LongTapEnd2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314994))(this, gesture);
	}
	template <typename T = void> T On_Twist(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314A34))(this, gesture);
	}
	template <typename T = void> T On_TwistEnd(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314AD4))(this, gesture);
	}
	template <typename T = void> T On_PinchIn(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314B74))(this, gesture);
	}
	template <typename T = void> T On_PinchOut(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314C14))(this, gesture);
	}
	template <typename T = void> T On_PinchEnd(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314CB4))(this, gesture);
	}
	template <typename T = void> T On_DragStart2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314D54))(this, gesture);
	}
	template <typename T = void> T On_Drag2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314DF4))(this, gesture);
	}
	template <typename T = void> T On_DragEnd2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314E94))(this, gesture);
	}
	template <typename T = void> T On_SwipeStart2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314F34))(this, gesture);
	}
	template <typename T = void> T On_Swipe2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5314FD4))(this, gesture);
	}
	template <typename T = void> T On_SwipeEnd2Fingers(uintptr_t gesture) {
		return ((T (*)(CEasyTouchTemplate*, uintptr_t))(Il2CppBase() + 0x5315074))(this, gesture);
	}

};

}
