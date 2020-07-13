#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDraggableCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDraggableCamera"));
	}

	template <typename T = uintptr_t> T& rootForBounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& scale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& scrollWheelFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& dragEffect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& smoothDragStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& momentumAmount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& mMomentum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mBounds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mRoot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mDragStarted() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateConstrainOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainToBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Press() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Scroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppVector2> T get_currentMomentum() {
		return ((T (*)(UIDraggableCamera*))(Il2CppBase() + 0x39D9B4C))(this);
	}
	template <typename T = void> T set_currentMomentum(Il2CppVector2 value) {
		return ((T (*)(UIDraggableCamera*, Il2CppVector2))(Il2CppBase() + 0x39D9B60))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIDraggableCamera*))(Il2CppBase() + 0x39D9B6C))(this);
	}
	template <typename T = Il2CppVector3> T CalculateConstrainOffset() {
		return ((T (*)(UIDraggableCamera*))(Il2CppBase() + 0x39D9E00))(this);
	}
	template <typename T = bool> T ConstrainToBounds(bool immediate) {
		return ((T (*)(UIDraggableCamera*, bool))(Il2CppBase() + 0x39DA294))(this, immediate);
	}
	template <typename T = void> T Press(bool isPressed) {
		return ((T (*)(UIDraggableCamera*, bool))(Il2CppBase() + 0x39D561C))(this, isPressed);
	}
	template <typename T = void> T Drag(Il2CppVector2 delta) {
		return ((T (*)(UIDraggableCamera*, Il2CppVector2))(Il2CppBase() + 0x39D59EC))(this, delta);
	}
	template <typename T = void> T Scroll(float delta) {
		return ((T (*)(UIDraggableCamera*, float))(Il2CppBase() + 0x39D5EDC))(this, delta);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIDraggableCamera*))(Il2CppBase() + 0x39DA554))(this);
	}

};

}
