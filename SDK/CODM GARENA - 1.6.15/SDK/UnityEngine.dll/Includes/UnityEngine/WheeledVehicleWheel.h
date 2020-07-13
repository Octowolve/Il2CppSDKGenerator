#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheeledVehicleWheel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheeledVehicleWheel"));
	}


	template <typename T = float> T get_steerAngle() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D40F38))(this);
	}
	template <typename T = void> T set_steerAngle(float value) {
		return ((T (*)(WheeledVehicleWheel*, float))(Il2CppBase() + 0x4D40FD0))(this, value);
	}
	template <typename T = uintptr_t> T get_tireConfig() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D41070))(this);
	}
	template <typename T = Il2CppString*> T get_groundMaterialName() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D41108))(this);
	}
	template <typename T = float> T GetCurrentSteerAngle() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D411A0))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetCurrentSteerAngle(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D411A8))(0, self);
	}
	template <typename T = float> T GetRotationAngle() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D41240))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetRotationAngle(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D41248))(0, self);
	}
	template <typename T = float> T GetSuspensionOffset() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D412E0))(this);
	}
	template <typename T = float> static T INTERNAL_CALL_GetSuspensionOffset(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D412E8))(0, self);
	}
	template <typename T = bool> T IsInAir() {
		return ((T (*)(WheeledVehicleWheel*))(Il2CppBase() + 0x4D41380))(this);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsInAir(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D41388))(0, self);
	}

};

}
