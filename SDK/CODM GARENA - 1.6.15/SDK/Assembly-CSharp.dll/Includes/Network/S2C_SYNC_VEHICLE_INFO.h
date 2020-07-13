#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCVEHICLEINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_VEHICLE_INFO"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MaxHP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& VehicleHP() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& WheelHP1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& WheelHP2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& WheelHP3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& WheelHP4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& VehicleFuel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = unsigned char> T& PassengerNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Passengers() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& VehicleStat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& CamoId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& WeaponNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VehicleWeaponInfos() {
		return *(T*)((uintptr_t)this + 0x44);
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
		return ((T (*)(S2CSYNCVEHICLEINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E9B314))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E9B7DC))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCVEHICLEINFO*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E9B92C))(this, P0, P1);
	}

};

}
