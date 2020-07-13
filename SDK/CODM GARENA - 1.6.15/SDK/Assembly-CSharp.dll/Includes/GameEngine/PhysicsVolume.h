#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsVolume"));
	}

	template <typename T = bool> T& m_NoFallingDamage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Speed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_NoFallingDamage() {
		return ((T (*)(PhysicsVolume*))(Il2CppBase() + 0x1D984B4))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D984BC))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D98690))(this, other);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D98864))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D9898C))(this, pawn);
	}
	template <typename T = void> T OnVehicleEnterVolume(uintptr_t vehicle) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D98AB4))(this, vehicle);
	}
	template <typename T = void> T OnVehicleExitVolume(uintptr_t vehicle) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D98BD0))(this, vehicle);
	}
	template <typename T = Il2CppVector3> T GetAcceleration(uintptr_t pawn) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D98CEC))(this, pawn);
	}
	template <typename T = Il2CppVector3> T GetVelocity() {
		return ((T (*)(PhysicsVolume*))(Il2CppBase() + 0x1D98DCC))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity_1(Il2CppVector3 currentVelocity, Il2CppVector3 currentPosition) {
		return ((T (*)(PhysicsVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1D98E7C))(this, currentVelocity, currentPosition);
	}
	template <typename T = float> T GetSpeed() {
		return ((T (*)(PhysicsVolume*))(Il2CppBase() + 0x1D98F68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D99008))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(PhysicsVolume*, uintptr_t))(Il2CppBase() + 0x1D99010))(this, P0);
	}

};

}
