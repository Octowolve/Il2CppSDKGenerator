#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledTankMovementComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledTankMovementComponent"));
	}

	template <typename T = float> T& rawLeftThrust() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& rawRightThrust() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& rawLeftBrake() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& rawRightBrake() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRawInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcTankInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBrakeInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerUpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvVehicleInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T UpdateState(float DeltaTime) {
		return ((T (*)(NZWheeledTankMovementComponent*, float))(Il2CppBase() + 0x19F3BA4))(this, DeltaTime);
	}
	template <typename T = void> T ClearInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F4488))(this);
	}
	template <typename T = void> T ClearRawInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F46E8))(this);
	}
	template <typename T = void> T CalcTankInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F4100))(this);
	}
	template <typename T = float> T CalcBrakeInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F47A8))(this);
	}
	template <typename T = void> T ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
		return ((T (*)(NZWheeledTankMovementComponent*, float, float, float, float, int32_t))(Il2CppBase() + 0x19F4AB4))(this, InSteeringInput, InThrottleInput, InBrakeInput, InHandbrakeInput, CurrentGear);
	}
	template <typename T = void> T OnRecvVehicleInput(uintptr_t moveMsg) {
		return ((T (*)(NZWheeledTankMovementComponent*, uintptr_t))(Il2CppBase() + 0x19F4C94))(this, moveMsg);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateState(float P0) {
		return ((T (*)(NZWheeledTankMovementComponent*, float))(Il2CppBase() + 0x19F4E14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ClearInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F4E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearRawInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F4E24))(this);
	}
	template <typename T = float> T xLuaBaseProxy_CalcBrakeInput() {
		return ((T (*)(NZWheeledTankMovementComponent*))(Il2CppBase() + 0x19F4E2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerUpdateState(float P0, float P1, float P2, float P3, int32_t P4) {
		return ((T (*)(NZWheeledTankMovementComponent*, float, float, float, float, int32_t))(Il2CppBase() + 0x19F4E34))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecvVehicleInput(uintptr_t P0) {
		return ((T (*)(NZWheeledTankMovementComponent*, uintptr_t))(Il2CppBase() + 0x19F4E60))(this, P0);
	}

};

}
