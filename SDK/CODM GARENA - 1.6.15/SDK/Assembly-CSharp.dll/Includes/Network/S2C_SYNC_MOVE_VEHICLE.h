#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCMOVEVEHICLE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_MOVE_VEHICLE"));
	}

	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Z() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int16_t> T& RotateX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int16_t> T& RotateY() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = int16_t> T& RotateZ() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int16_t> T& VelocityX() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int16_t> T& VelocityY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int16_t> T& VelocityZ() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = int16_t> T& AngularVelocityX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int16_t> T& AngularVelocityY() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = int16_t> T& AngularVelocityZ() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int16_t> T& AccelerationX() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = int16_t> T& AccelerationY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int16_t> T& AccelerationZ() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uint32_t> T& FrameTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& ClientTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& IsBraking() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Steering() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Throttle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCMOVEVEHICLE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E909BC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E90CE0))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCMOVEVEHICLE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E90D90))(this, P0, P1);
	}

};

}
