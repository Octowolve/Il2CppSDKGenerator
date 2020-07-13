#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class WheeledVehicleMoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "WheeledVehicleMoveData"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Z() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int16_t> T& RotateX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int16_t> T& RotateY() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = int16_t> T& RotateZ() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int16_t> T& LinearVelocityX() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = int16_t> T& LinearVelocityY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int16_t> T& LinearVelocityZ() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = int16_t> T& AngularVelocityX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int16_t> T& AngularVelocityY() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int16_t> T& AngularVelocityZ() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = unsigned char> T& LeftThrust() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = unsigned char> T& RightThrust() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = unsigned char> T& LeftBrake() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& RightBrake() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uint32_t> T& ServerTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = unsigned char> T& Steering() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& Throttle() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = unsigned char> T& Brake() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = unsigned char> T& Handbrake() {
		return *(T*)((uintptr_t)this + 0x37);
	}
	template <typename T = unsigned char> T& CurrentGear() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = unsigned char> T& MotorUp() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = unsigned char> T& MotorDown() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WheeledVehicleMoveData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A987C))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WheeledVehicleMoveData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A9BE8))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A9F4C))(0, data, DataIndex);
	}

};

}
