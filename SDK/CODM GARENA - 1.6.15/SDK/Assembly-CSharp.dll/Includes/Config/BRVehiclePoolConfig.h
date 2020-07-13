#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRVehiclePoolConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRVehiclePoolConfig"));
	}

	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RegionID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RegionTotalNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& VehicleId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prob() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D5656C))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(BRVehiclePoolConfig*, int32_t))(Il2CppBase() + 0x2D56574))(this, value);
	}
	template <typename T = int32_t> T get_RegionID() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D5657C))(this);
	}
	template <typename T = void> T set_RegionID(int32_t value) {
		return ((T (*)(BRVehiclePoolConfig*, int32_t))(Il2CppBase() + 0x2D56584))(this, value);
	}
	template <typename T = int32_t> T get_RegionTotalNum() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D5658C))(this);
	}
	template <typename T = void> T set_RegionTotalNum(int32_t value) {
		return ((T (*)(BRVehiclePoolConfig*, int32_t))(Il2CppBase() + 0x2D56594))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D5659C))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(BRVehiclePoolConfig*, Il2CppString*))(Il2CppBase() + 0x2D565A4))(this, value);
	}
	template <typename T = int32_t> T get_VehicleId() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D565AC))(this);
	}
	template <typename T = void> T set_VehicleId(int32_t value) {
		return ((T (*)(BRVehiclePoolConfig*, int32_t))(Il2CppBase() + 0x2D565B4))(this, value);
	}
	template <typename T = int32_t> T get_Prob() {
		return ((T (*)(BRVehiclePoolConfig*))(Il2CppBase() + 0x2D565BC))(this);
	}
	template <typename T = void> T set_Prob(int32_t value) {
		return ((T (*)(BRVehiclePoolConfig*, int32_t))(Il2CppBase() + 0x2D565C4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRVehiclePoolConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D565CC))(this, bytes, position);
	}

};

}
