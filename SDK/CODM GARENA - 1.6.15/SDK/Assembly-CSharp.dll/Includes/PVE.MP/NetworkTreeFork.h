#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkTreeFork
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkTreeFork"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& cageColliders() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fireColliders() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkTreeFork*, uintptr_t))(Il2CppBase() + 0x3EBD118))(this, info);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(NetworkTreeFork*))(Il2CppBase() + 0x3EBD2EC))(this);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkTreeFork*))(Il2CppBase() + 0x3EBD5F4))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkTreeFork*, bool))(Il2CppBase() + 0x3EBD6C0))(this, isHeadShot);
	}
	template <typename T = void> T ToggleColliders(bool enable) {
		return ((T (*)(NetworkTreeFork*, bool))(Il2CppBase() + 0x3EBD474))(this, enable);
	}
	template <typename T = void> T AdjustToGround(float deltaTime) {
		return ((T (*)(NetworkTreeFork*, float))(Il2CppBase() + 0x3EBD7E8))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkTreeFork*, uintptr_t))(Il2CppBase() + 0x3EBD888))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(NetworkTreeFork*))(Il2CppBase() + 0x3EBD88C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkTreeFork*))(Il2CppBase() + 0x3EBD894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkTreeFork*, bool))(Il2CppBase() + 0x3EBD898))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustToGround(float P0) {
		return ((T (*)(NetworkTreeFork*, float))(Il2CppBase() + 0x3EBD89C))(this, P0);
	}

};

}
