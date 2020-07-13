#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkZombieHellHound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkZombieHellHound"));
	}

	template <typename T = uintptr_t> T& preset() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = int32_t> static T& colorCorrectionCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& DizzyBoneSocketName() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDesiredRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC1234))(this, info);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombieHellHound*))(Il2CppBase() + 0x3EC1558))(this);
	}
	template <typename T = void> T PlayAttackAnim() {
		return ((T (*)(NetworkZombieHellHound*))(Il2CppBase() + 0x3EC16E0))(this);
	}
	template <typename T = void> T StopAttackAnim() {
		return ((T (*)(NetworkZombieHellHound*))(Il2CppBase() + 0x3EC1894))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombieHellHound*, bool))(Il2CppBase() + 0x3EC1A0C))(this, isHeadShot);
	}
	template <typename T = void> T InitPawnProperty(uintptr_t info) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC1B28))(this, info);
	}
	template <typename T = Il2CppQuaternion> T AdjustDesiredRotation(Il2CppVector3 focalDirection) {
		return ((T (*)(NetworkZombieHellHound*, Il2CppVector3))(Il2CppBase() + 0x3EC1EC8))(this, focalDirection);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetworkZombieHellHound*, bool, uintptr_t))(Il2CppBase() + 0x3EC202C))(this, isHeadShot, damageType);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetworkZombieHellHound*, bool, uintptr_t))(Il2CppBase() + 0x3EC2120))(this, isHeadShot, damageType);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC2320))(this, model);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC2404))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombieHellHound*))(Il2CppBase() + 0x3EC2408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombieHellHound*, bool))(Il2CppBase() + 0x3EC240C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawnProperty(uintptr_t P0) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC2410))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_AdjustDesiredRotation(Il2CppVector3 P0) {
		return ((T (*)(NetworkZombieHellHound*, Il2CppVector3))(Il2CppBase() + 0x3EC2414))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(NetworkZombieHellHound*, bool, uintptr_t))(Il2CppBase() + 0x3EC2434))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(NetworkZombieHellHound*, bool, uintptr_t))(Il2CppBase() + 0x3EC2438))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(NetworkZombieHellHound*, uintptr_t))(Il2CppBase() + 0x3EC243C))(this, P0);
	}

};

}
