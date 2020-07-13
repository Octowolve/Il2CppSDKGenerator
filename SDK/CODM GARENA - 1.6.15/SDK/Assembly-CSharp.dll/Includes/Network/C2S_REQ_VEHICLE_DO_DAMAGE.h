#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQVEHICLEDODAMAGE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_VEHICLE_DO_DAMAGE"));
	}

	template <typename T = uint32_t> T& VehicleId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& DriverId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TargetX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TargetY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TargetZ() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SourceX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SourceY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SourceZ() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& VelocityX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& VelocityY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& VelocityZ() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ClientTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQVEHICLEDODAMAGE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x50C2ADC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x50C2D28))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SREQVEHICLEDODAMAGE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x50C2DD8))(this, P0, P1);
	}

};

}
