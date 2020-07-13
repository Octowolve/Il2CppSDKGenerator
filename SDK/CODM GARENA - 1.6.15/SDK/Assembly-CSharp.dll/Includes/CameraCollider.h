#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraCollider"));
	}

	template <typename T = uintptr_t> T& sphere() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PlayerCtrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& toPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& Lookat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ms_3PCameraColliderRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_cacheNearClipPlane() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& mTempPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mChangeNear() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& mOldOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& mLockUP() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DCC5E0))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(CameraCollider*, Il2CppVector3))(Il2CppBase() + 0x1DCEE04))(this, value);
	}
	template <typename T = void> T set_ForcePosition(Il2CppVector3 value) {
		return ((T (*)(CameraCollider*, Il2CppVector3))(Il2CppBase() + 0x1DD0C8C))(this, value);
	}
	template <typename T = void> T set_Lookat(Il2CppVector3 value) {
		return ((T (*)(CameraCollider*, Il2CppVector3))(Il2CppBase() + 0x1DD0C80))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Lookat() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DDBB68))(this);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DCC5A0))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(CameraCollider*, Il2CppQuaternion))(Il2CppBase() + 0x1DD0CDC))(this, value);
	}
	template <typename T = float> T get_radius() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DCF2C4))(this);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(CameraCollider*, float))(Il2CppBase() + 0x1DCFCCC))(this, value);
	}
	template <typename T = float> T get_TargetRadius() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DDBB7C))(this);
	}
	template <typename T = int32_t> T GetLayer() {
		return ((T (*)(CameraCollider*))(Il2CppBase() + 0x1DDBC5C))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(CameraCollider*, Il2CppVector3))(Il2CppBase() + 0x1DD47B0))(this, shift);
	}

};

}
