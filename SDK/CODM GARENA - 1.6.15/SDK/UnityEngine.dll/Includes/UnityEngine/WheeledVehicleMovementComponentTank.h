#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheeledVehicleMovementComponentTank
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheeledVehicleMovementComponentTank"));
	}


	template <typename T = float> T get_leftThrust() {
		return ((T (*)(WheeledVehicleMovementComponentTank*))(Il2CppBase() + 0x4D40A58))(this);
	}
	template <typename T = void> T set_leftThrust(float value) {
		return ((T (*)(WheeledVehicleMovementComponentTank*, float))(Il2CppBase() + 0x4D40AF0))(this, value);
	}
	template <typename T = float> T get_rightThrust() {
		return ((T (*)(WheeledVehicleMovementComponentTank*))(Il2CppBase() + 0x4D40B90))(this);
	}
	template <typename T = void> T set_rightThrust(float value) {
		return ((T (*)(WheeledVehicleMovementComponentTank*, float))(Il2CppBase() + 0x4D40C28))(this, value);
	}
	template <typename T = float> T get_leftBrake() {
		return ((T (*)(WheeledVehicleMovementComponentTank*))(Il2CppBase() + 0x4D40CC8))(this);
	}
	template <typename T = void> T set_leftBrake(float value) {
		return ((T (*)(WheeledVehicleMovementComponentTank*, float))(Il2CppBase() + 0x4D40D60))(this, value);
	}
	template <typename T = float> T get_rightBrake() {
		return ((T (*)(WheeledVehicleMovementComponentTank*))(Il2CppBase() + 0x4D40E00))(this);
	}
	template <typename T = void> T set_rightBrake(float value) {
		return ((T (*)(WheeledVehicleMovementComponentTank*, float))(Il2CppBase() + 0x4D40E98))(this, value);
	}

};

}
