#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkDenizen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkDenizen"));
	}

	template <typename T = uintptr_t> T& worldParent() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& controlBehavior() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> T& grapFaceBehavior() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCheckAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkDenizen*, uintptr_t))(Il2CppBase() + 0x3EBB1CC))(this, info);
	}
	template <typename T = void> T PlayDying(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(NetworkDenizen*, bool, uintptr_t))(Il2CppBase() + 0x3EBB55C))(this, isHeadShot, damageType);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBB87C))(this);
	}
	template <typename T = uintptr_t> T DelayCheckAttach() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBB9CC))(this);
	}
	template <typename T = void> T ResetParent() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBB7B0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBBAB4))(this);
	}
	template <typename T = void> T UpdateRotation(float deltaTime) {
		return ((T (*)(NetworkDenizen*, float))(Il2CppBase() + 0x3EBBB70))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkDenizen*, uintptr_t))(Il2CppBase() + 0x3EBBC88))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDying(bool P0, uintptr_t P1) {
		return ((T (*)(NetworkDenizen*, bool, uintptr_t))(Il2CppBase() + 0x3EBBC8C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBBC90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(NetworkDenizen*))(Il2CppBase() + 0x3EBBC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(float P0) {
		return ((T (*)(NetworkDenizen*, float))(Il2CppBase() + 0x3EBBC9C))(this, P0);
	}

};

}
