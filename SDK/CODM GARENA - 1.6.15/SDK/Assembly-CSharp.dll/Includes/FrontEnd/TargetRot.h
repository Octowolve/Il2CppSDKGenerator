#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class TargetRot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "TargetRot"));
	}

	template <typename T = float> T& TouchRotationScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& KeyboardRotationScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mCustomTouchRotScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mRotImmediately() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mNeedAutoRotate() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppQuaternion> T& mTargetRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RotCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& mLastTouchPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mAllowRot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& mInitRot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mInited() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppQuaternion> T& mRotX() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppQuaternion> T& mRotY() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& mAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& mAngleReduceSpeed() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& mMaxAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppQuaternion> T& mDefaultRot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mWeaponAutoRotate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& DEFAULT_WEAPON_ROTATION_EULERANGLE() {
		return *(T*)((uintptr_t)this + 0x94);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoRotateToDes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTouchRotScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouchBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTouching() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTweenRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAutoRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAutoRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoRotationEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRotateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T set_AllowRot(bool value) {
		return ((T (*)(TargetRot*, bool))(Il2CppBase() + 0x386803C))(this, value);
	}
	template <typename T = bool> T get_AllowRot() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3868044))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x386804C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3868138))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x386822C))(this);
	}
	template <typename T = void> T ResetRotation() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3868370))(this);
	}
	template <typename T = void> T SetActImmediately(bool rotImmediately) {
		return ((T (*)(TargetRot*, bool))(Il2CppBase() + 0x3868454))(this, rotImmediately);
	}
	template <typename T = void> T SetAutoRotateToDes(Il2CppQuaternion target, uintptr_t callback) {
		return ((T (*)(TargetRot*, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x3868500))(this, target, callback);
	}
	template <typename T = void> T SetTouchRotScale(float scale) {
		return ((T (*)(TargetRot*, float))(Il2CppBase() + 0x38685F8))(this, scale);
	}
	template <typename T = bool> T IsTouchBegin(uintptr_t position) {
		return ((T (*)(TargetRot*, uintptr_t))(Il2CppBase() + 0x38686A4))(this, position);
	}
	template <typename T = bool> T IsTouching(uintptr_t position) {
		return ((T (*)(TargetRot*, uintptr_t))(Il2CppBase() + 0x3868A14))(this, position);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3868D84))(this);
	}
	template <typename T = float> T ClampAngle(float angle) {
		return ((T (*)(TargetRot*, float))(Il2CppBase() + 0x3869854))(this, angle);
	}
	template <typename T = void> T SetTweenRotate(bool enable) {
		return ((T (*)(TargetRot*, bool))(Il2CppBase() + 0x3869798))(this, enable);
	}
	template <typename T = void> T StartAutoRotate() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3869984))(this);
	}
	template <typename T = void> T StopAutoRotate() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3869AA4))(this);
	}
	template <typename T = void> T SetAutoRotationEnabled(bool enable) {
		return ((T (*)(TargetRot*, bool))(Il2CppBase() + 0x3869C5C))(this, enable);
	}
	template <typename T = void> T ResetRotateTime() {
		return ((T (*)(TargetRot*))(Il2CppBase() + 0x3869D7C))(this);
	}
	template <typename T = void> T ResetToDefault(Il2CppVector3 eulerAngle) {
		return ((T (*)(TargetRot*, Il2CppVector3))(Il2CppBase() + 0x3869F68))(this, eulerAngle);
	}

};

}
