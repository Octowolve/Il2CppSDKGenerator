#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDragObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDragObject"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& panelRegion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& scrollMomentum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& restrictWithinPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& contentRect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& dragEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& momentumAmount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& scrollWheelFactor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPlane() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& mTargetPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& mLastPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& mMomentum() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mBounds() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& mTouchID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& mPressed() {
		return *(T*)((uintptr_t)this + 0x9D);
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
	template <typename T = uintptr_t> static T& __Hotfix0_FindPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelSpring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppVector3> T get_dragMovement() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DAA58))(this);
	}
	template <typename T = void> T set_dragMovement(Il2CppVector3 value) {
		return ((T (*)(UIDragObject*, Il2CppVector3))(Il2CppBase() + 0x39DAA6C))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DAA78))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DAD3C))(this);
	}
	template <typename T = void> T FindPanel() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DADE0))(this);
	}
	template <typename T = void> T UpdateBounds() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DAFB4))(this);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIDragObject*, bool))(Il2CppBase() + 0x39DB2E8))(this, pressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIDragObject*, Il2CppVector2))(Il2CppBase() + 0x39DBCC0))(this, delta);
	}
	template <typename T = void> T Move(Il2CppVector3 worldDelta) {
		return ((T (*)(UIDragObject*, Il2CppVector3))(Il2CppBase() + 0x39DC2E4))(this, worldDelta);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DC9E8))(this);
	}
	template <typename T = void> T CancelMovement() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DB8C0))(this);
	}
	template <typename T = void> T CancelSpring() {
		return ((T (*)(UIDragObject*))(Il2CppBase() + 0x39DBB88))(this);
	}
	template <typename T = void> T OnScroll(float delta) {
		return ((T (*)(UIDragObject*, float))(Il2CppBase() + 0x39DCD9C))(this, delta);
	}

};

}
