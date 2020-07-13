#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Gyroscope
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Gyroscope"));
	}

	template <typename T = int32_t> T& m_GyroIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> static T rotationRateUnbiased_Internal(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A1218))(0, idx);
	}
	template <typename T = void> static T INTERNAL_CALL_rotationRateUnbiased_Internal(int32_t idx, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x47A1260))(0, idx, value);
	}
	template <typename T = Il2CppQuaternion> static T attitude_Internal(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A1300))(0, idx);
	}
	template <typename T = void> static T INTERNAL_CALL_attitude_Internal(int32_t idx, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x47A1338))(0, idx, value);
	}
	template <typename T = void> static T setEnabled_Internal(int32_t idx, bool enabled) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x47A13D8))(0, idx, enabled);
	}
	template <typename T = Il2CppVector3> T get_rotationRateUnbiased() {
		return ((T (*)(Gyroscope*))(Il2CppBase() + 0x47A1478))(this);
	}
	template <typename T = Il2CppQuaternion> T get_attitude() {
		return ((T (*)(Gyroscope*))(Il2CppBase() + 0x47A14D8))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Gyroscope*, bool))(Il2CppBase() + 0x47A1520))(this, value);
	}

};

}
