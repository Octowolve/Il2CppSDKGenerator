#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkDemonVine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkDemonVine"));
	}

	template <typename T = uintptr_t> T& twineEffect() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& twine1PScreenEffect() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> T& twineTargetPawn() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarLoadCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentTwineTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetCurrentTwineTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWhipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopWhip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanThrowWeaponBounce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkDemonVine*, uintptr_t))(Il2CppBase() + 0x3EBA4A4))(this, info);
	}
	template <typename T = void> T OnAvatarLoadCompleted() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBA770))(this);
	}
	template <typename T = void> T SetCurrentTwineTarget(uintptr_t targetPawn) {
		return ((T (*)(NetworkDemonVine*, uintptr_t))(Il2CppBase() + 0x3E93DCC))(this, targetPawn);
	}
	template <typename T = void> T SetCurrentTwineTarget_1(uint32_t playerID) {
		return ((T (*)(NetworkDemonVine*, uint32_t))(Il2CppBase() + 0x3EBA88C))(this, playerID);
	}
	template <typename T = void> T PlayWhipAnim(uintptr_t trans) {
		return ((T (*)(NetworkDemonVine*, uintptr_t))(Il2CppBase() + 0x3EBA9B8))(this, trans);
	}
	template <typename T = void> T StopWhip() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBAD00))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkDemonVine*, bool))(Il2CppBase() + 0x3EBAE04))(this, isHeadShot);
	}
	template <typename T = void> T AdjustToGround(float deltaTime) {
		return ((T (*)(NetworkDemonVine*, float))(Il2CppBase() + 0x3EBAF20))(this, deltaTime);
	}
	template <typename T = bool> T CanThrowWeaponBounce() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBAFC0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBB060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkDemonVine*, uintptr_t))(Il2CppBase() + 0x3EBB110))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAvatarLoadCompleted() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBB114))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkDemonVine*, bool))(Il2CppBase() + 0x3EBB118))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustToGround(float P0) {
		return ((T (*)(NetworkDemonVine*, float))(Il2CppBase() + 0x3EBB11C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanThrowWeaponBounce() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBB120))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(NetworkDemonVine*))(Il2CppBase() + 0x3EBB128))(this);
	}

};

}
