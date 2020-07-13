#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetWorkClawDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetWorkClawDrone"));
	}

	template <typename T = uintptr_t> T& EMIEffect() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& EMIBuffEffect() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> T& BrokenEffect() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> T& ClawGameObject() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = uintptr_t> T& SignObject() {
		return *(T*)((uintptr_t)this + 0xAC8);
	}
	template <typename T = uintptr_t> T& ClawCllider() {
		return *(T*)((uintptr_t)this + 0xACC);
	}
	template <typename T = float> T& SignOffset() {
		return *(T*)((uintptr_t)this + 0xAD0);
	}
	template <typename T = uintptr_t> T& preset() {
		return *(T*)((uintptr_t)this + 0xAD4);
	}
	template <typename T = float> T& LastHitTime() {
		return *(T*)((uintptr_t)this + 0xAD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EB9494))(this, info);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EB98FC))(this, info);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EB9A70))(this, model);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetWorkClawDrone*, float))(Il2CppBase() + 0x3EB9BC0))(this, deltaTime);
	}
	template <typename T = void> T OnTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EBA0A4))(this, damageInfo);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(NetWorkClawDrone*, uint32_t, uint64_t))(Il2CppBase() + 0x3EBA250))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EBA3D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EBA3DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EBA3E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetWorkClawDrone*, float))(Il2CppBase() + 0x3EBA3E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTakeDamage(uintptr_t P0) {
		return ((T (*)(NetWorkClawDrone*, uintptr_t))(Il2CppBase() + 0x3EBA3E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(NetWorkClawDrone*, uint32_t, uint64_t))(Il2CppBase() + 0x3EBA3EC))(this, P0, P1);
	}

};

}
