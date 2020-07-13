#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SensorManager"));
	}

	template <typename T = bool> static T& EnableGyro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& EnableCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& GyroscopeOptionEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = Il2CppVector3> static T& m_LastGravity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& m_LastCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& m_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppQuaternion> static T& Nagative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& m_InvalidFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& FALLBACK_FRAME_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& UseFrontCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppQuaternion> static T& INVALID_QUATERNION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = bool> static T& m_CheckedGyroscope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = bool> static T& m_CheckedCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& sCanonicalToWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingAulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallbackToCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FallbackToDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimmingRotationGyroscope_InputAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingRotationGyroscope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingEulerAnglesGyroscope() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGravity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAimingRotationCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = bool> static T get_IsInit() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C07ABC))(0);
	}
	template <typename T = bool> static T get_UseFrontCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C07B6C))(0);
	}
	template <typename T = void> static T set_UseFrontCamera(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3C07C1C))(0, value);
	}
	template <typename T = bool> static T get_SupportGyro() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C07CD0))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C07DD0))(0);
	}
	template <typename T = void> static T Shutdown() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C0872C))(0);
	}
	template <typename T = Il2CppQuaternion> static T GetAimingRotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C0897C))(0);
	}
	template <typename T = Il2CppVector3> static T GetAimingAulerAngles() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C099A8))(0);
	}
	template <typename T = void> static T FallbackToCompass() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C091C8))(0);
	}
	template <typename T = void> static T FallbackToDisabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C09834))(0);
	}
	template <typename T = Il2CppVector3> static T GetAimmingRotationGyroscope_InputAcceleration() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C09CF8))(0);
	}
	template <typename T = Il2CppQuaternion> static T GetAimingRotationGyroscope() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C08FE4))(0);
	}
	template <typename T = Il2CppVector3> static T GetAimingEulerAnglesGyroscope() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C09B48))(0);
	}
	template <typename T = Il2CppVector3> static T GetCompass() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C083F0))(0);
	}
	template <typename T = Il2CppVector3> static T GetGravity() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C082BC))(0);
	}
	template <typename T = Il2CppQuaternion> static T GetAimingRotationCompass() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C094B4))(0);
	}

};

}
