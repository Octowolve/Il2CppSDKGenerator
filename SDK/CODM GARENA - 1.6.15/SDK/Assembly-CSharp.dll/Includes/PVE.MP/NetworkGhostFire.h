#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkGhostFire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkGhostFire"));
	}

	template <typename T = Il2CppString*> T& DizzyBoneSocketName() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& fireEffect() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkGhostFire*, uintptr_t))(Il2CppBase() + 0x3EBC0D8))(this, info);
	}
	template <typename T = void> T PlayExplosionAnim() {
		return ((T (*)(NetworkGhostFire*))(Il2CppBase() + 0x3EBC34C))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkGhostFire*, bool))(Il2CppBase() + 0x3EBC4A0))(this, isHeadShot);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkGhostFire*))(Il2CppBase() + 0x3EBC678))(this);
	}
	template <typename T = void> T AdjustToGround(float deltaTime) {
		return ((T (*)(NetworkGhostFire*, float))(Il2CppBase() + 0x3EBC854))(this, deltaTime);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(NetworkGhostFire*, uintptr_t))(Il2CppBase() + 0x3EBC8F4))(this, model);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkGhostFire*, uintptr_t))(Il2CppBase() + 0x3EBC9D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkGhostFire*, bool))(Il2CppBase() + 0x3EBC9DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkGhostFire*))(Il2CppBase() + 0x3EBC9E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustToGround(float P0) {
		return ((T (*)(NetworkGhostFire*, float))(Il2CppBase() + 0x3EBC9E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(NetworkGhostFire*, uintptr_t))(Il2CppBase() + 0x3EBC9E8))(this, P0);
	}

};

}
