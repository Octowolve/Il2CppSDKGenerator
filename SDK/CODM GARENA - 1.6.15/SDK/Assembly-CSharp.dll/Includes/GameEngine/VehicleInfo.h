#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleInfo"));
	}

	template <typename T = int32_t> T& m_VehicleTypeId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_WheelHP1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_WheelHP2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_WheelHP3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_WheelHP4() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_VehicleFuel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_UseSkillTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_UseSkillTimeCD() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_LeftSkillNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_VehicleNetstate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& CamoId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Passengers() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_VehicleWeaponInfos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPassengers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPassengers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_VehicleTypeId() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BD5C))(this);
	}
	template <typename T = void> T set_VehicleTypeId(int32_t value) {
		return ((T (*)(VehicleInfo*, int32_t))(Il2CppBase() + 0x2E8BD64))(this, value);
	}
	template <typename T = float> T get_WheelHP1() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BD6C))(this);
	}
	template <typename T = void> T set_WheelHP1(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BD74))(this, value);
	}
	template <typename T = float> T get_WheelHP2() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BD7C))(this);
	}
	template <typename T = void> T set_WheelHP2(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BD84))(this, value);
	}
	template <typename T = float> T get_WheelHP3() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BD8C))(this);
	}
	template <typename T = void> T set_WheelHP3(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BD94))(this, value);
	}
	template <typename T = float> T get_WheelHP4() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BD9C))(this);
	}
	template <typename T = void> T set_WheelHP4(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BDA4))(this, value);
	}
	template <typename T = int32_t> T get_VehicleFuel() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDAC))(this);
	}
	template <typename T = void> T set_VehicleFuel(int32_t value) {
		return ((T (*)(VehicleInfo*, int32_t))(Il2CppBase() + 0x2E8BDB4))(this, value);
	}
	template <typename T = float> T get_UseSkillTime() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDBC))(this);
	}
	template <typename T = void> T set_UseSkillTime(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BDC4))(this, value);
	}
	template <typename T = float> T get_UseSkillTimeCD() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDCC))(this);
	}
	template <typename T = void> T set_UseSkillTimeCD(float value) {
		return ((T (*)(VehicleInfo*, float))(Il2CppBase() + 0x2E8BDD4))(this, value);
	}
	template <typename T = int32_t> T get_LeftSkillNum() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDDC))(this);
	}
	template <typename T = void> T set_LeftSkillNum(int32_t value) {
		return ((T (*)(VehicleInfo*, int32_t))(Il2CppBase() + 0x2E8BDE4))(this, value);
	}
	template <typename T = uintptr_t> T get_VehicleNetState() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDEC))(this);
	}
	template <typename T = void> T set_VehicleNetState(uintptr_t value) {
		return ((T (*)(VehicleInfo*, uintptr_t))(Il2CppBase() + 0x2E8BDF4))(this, value);
	}
	template <typename T = uint32_t> T get_CamoId() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BDFC))(this);
	}
	template <typename T = void> T set_CamoId(uint32_t value) {
		return ((T (*)(VehicleInfo*, uint32_t))(Il2CppBase() + 0x2E8BE04))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Passengers() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BE0C))(this);
	}
	template <typename T = bool> T get_IsBroken() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BEBC))(this);
	}
	template <typename T = void> T ResetPassengers() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8BEEC))(this);
	}
	template <typename T = void> T AddPassengers(uintptr_t PassengerInfo) {
		return ((T (*)(VehicleInfo*, uintptr_t))(Il2CppBase() + 0x2E8BFC0))(this, PassengerInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_VehicleWeaponInfos() {
		return ((T (*)(VehicleInfo*))(Il2CppBase() + 0x2E8C0A0))(this);
	}
	template <typename T = uintptr_t> T GetVehicleWeaponInfo(int32_t seatId) {
		return ((T (*)(VehicleInfo*, int32_t))(Il2CppBase() + 0x2E8C150))(this, seatId);
	}

};

}
