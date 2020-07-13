#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotAroundCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotAroundCamera"));
	}

	template <typename T = uintptr_t> T& ViewTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ViewHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ScrollSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RotateSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RelateLightNode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& mViewTargetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mOffsetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mMinDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mDistance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mMoveDis() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bAllowAutoRot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bAutoRot() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppVector3> T& mInitCameraPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& mInitCameraRot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& mInitRelateLightNodePos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppQuaternion> T& mInitRelateLightNodeRot() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& mLastTouchPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector2> T& mCurTouchPos() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector2> T& mOldPosition1() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector2> T& mOldPosition2() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& mLastTouchCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& mAngleSpeed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& mAngleReduceSpeed() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& mMaxAngleSpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouchBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T set_AllowAutoRot(bool value) {
		return ((T (*)(RotAroundCamera*, bool))(Il2CppBase() + 0x41430D0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RotAroundCamera*))(Il2CppBase() + 0x41430D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RotAroundCamera*))(Il2CppBase() + 0x41432C8))(this);
	}
	template <typename T = void> T ResetCameraPosition() {
		return ((T (*)(RotAroundCamera*))(Il2CppBase() + 0x4143488))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RotAroundCamera*))(Il2CppBase() + 0x4143748))(this);
	}
	template <typename T = bool> T IsTouchBegin(uintptr_t position) {
		return ((T (*)(RotAroundCamera*, uintptr_t))(Il2CppBase() + 0x41443FC))(this, position);
	}
	template <typename T = bool> T IsTouching(uintptr_t position) {
		return ((T (*)(RotAroundCamera*, uintptr_t))(Il2CppBase() + 0x4144654))(this, position);
	}

};

}
