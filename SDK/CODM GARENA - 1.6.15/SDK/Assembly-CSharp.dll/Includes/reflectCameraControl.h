#pragma once
#include <Il2Cpp/Il2Cpp.h>

class reflectCameraControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "reflectCameraControl"));
	}

	template <typename T = uintptr_t> T& m_replacementShader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_marshWaterControl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_mainCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_plane() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_colorRT() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_poolWaterMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_rtSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_useMipmap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_planarReflectionOn() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_darkReflectionOn() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& m_cam() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_selectGraphicQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateByCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getRotationFromMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getPositionFromMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCameraSpacePlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateReflectionMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnValidate() {
		return ((T (*)(reflectCameraControl*))(Il2CppBase() + 0x3828668))(this);
	}
	template <typename T = void> T selectGraphicQuality(int32_t qulity) {
		return ((T (*)(reflectCameraControl*, int32_t))(Il2CppBase() + 0x3828784))(this, qulity);
	}
	template <typename T = void> T Start() {
		return ((T (*)(reflectCameraControl*))(Il2CppBase() + 0x3828AD8))(this);
	}
	template <typename T = void> T UpdateByCamera() {
		return ((T (*)(reflectCameraControl*))(Il2CppBase() + 0x3829270))(this);
	}
	template <typename T = Il2CppQuaternion> static T getRotationFromMatrix(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3829E50))(0, m);
	}
	template <typename T = Il2CppVector3> static T getPositionFromMatrix(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x382A088))(0, m);
	}
	template <typename T = uintptr_t> T CalculateCameraSpacePlane(uintptr_t cam, Il2CppVector3 p, Il2CppVector3 n) {
		return ((T (*)(reflectCameraControl*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x382A238))(this, cam, p, n);
	}
	template <typename T = void> static T CalculateReflectionMatrix(uintptr_t reflectionMat, uintptr_t plane) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3829AC0))(0, reflectionMat, plane);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(reflectCameraControl*))(Il2CppBase() + 0x382A47C))(this);
	}

};

}
