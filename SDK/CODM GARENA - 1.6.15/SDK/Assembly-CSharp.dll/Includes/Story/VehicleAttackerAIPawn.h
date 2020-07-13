#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class VehicleAttackerAIPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "VehicleAttackerAIPawn"));
	}

	template <typename T = uintptr_t> T& m_VehicleSeatType() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = float> T& m_CheckVehicleAliveInternval() {
		return *(T*)((uintptr_t)this + 0xB08);
	}
	template <typename T = float> T& m_LastCheckVehicleAliveTime() {
		return *(T*)((uintptr_t)this + 0xB0C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysBoarding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVehicleAlive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_VehicleSeatType() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F22F30))(this);
	}
	template <typename T = void> T set_VehicleSeatType(uintptr_t value) {
		return ((T (*)(VehicleAttackerAIPawn*, uintptr_t))(Il2CppBase() + 0x3F22F38))(this, value);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(VehicleAttackerAIPawn*, uintptr_t))(Il2CppBase() + 0x3F22F40))(this, info);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F23080))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F23134))(this);
	}
	template <typename T = void> T PhysBoarding(float deltaTime) {
		return ((T (*)(VehicleAttackerAIPawn*, float))(Il2CppBase() + 0x3F23230))(this, deltaTime);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(VehicleAttackerAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3F232E4))(this, isHeadShot, damageType);
	}
	template <typename T = void> T CheckVehicleAlive() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F233C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(VehicleAttackerAIPawn*, uintptr_t))(Il2CppBase() + 0x3F2345C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F23464))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(VehicleAttackerAIPawn*))(Il2CppBase() + 0x3F2346C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PhysBoarding(float P0) {
		return ((T (*)(VehicleAttackerAIPawn*, float))(Il2CppBase() + 0x3F23474))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(VehicleAttackerAIPawn*, bool, uintptr_t))(Il2CppBase() + 0x3F2347C))(this, P0, P1);
	}

};

}
