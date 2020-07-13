#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Gesture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gesture"));
	}

	template <typename T = int32_t> T& fingerIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& touchCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& deltaPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& actionTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& swipe() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& swipeLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& swipeVector() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& deltaPinch() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& twistAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& twoFingerDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& pickObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& otherReceiver() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isHoverReservedArea() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTouchToWordlPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwipeOrDragAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizedPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppVector3> T GetTouchToWordlPoint(float z, bool worldZ) {
		return ((T (*)(Gesture*, float, bool))(Il2CppBase() + 0x3E041D0))(this, z, worldZ);
	}
	template <typename T = float> T GetSwipeOrDragAngle() {
		return ((T (*)(Gesture*))(Il2CppBase() + 0x3E0439C))(this);
	}
	template <typename T = bool> T IsInRect(Il2CppRect rect, bool guiRect) {
		return ((T (*)(Gesture*, Il2CppRect, bool))(Il2CppBase() + 0x3E044D4))(this, rect, guiRect);
	}
	template <typename T = Il2CppVector2> T NormalizedPosition() {
		return ((T (*)(Gesture*))(Il2CppBase() + 0x3E04668))(this);
	}

};

}
