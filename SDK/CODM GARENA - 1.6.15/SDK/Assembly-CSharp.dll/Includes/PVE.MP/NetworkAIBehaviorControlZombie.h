#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorControlZombie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorControlZombie"));
	}

	template <typename T = uintptr_t> T& targetPawn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& attachTo1P() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& attached() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& targetBone() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetachFromTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorCaughtTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpFailOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFindTargetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDettach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = Il2CppString*> T get_attachBoneName() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3100))(this);
	}
	template <typename T = Il2CppVector3> T get_attachBoneOffset() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3124))(this);
	}
	template <typename T = Il2CppQuaternion> T get_attachBoneRotation() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3154))(this);
	}
	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3184))(this);
	}
	template <typename T = void> T DetachFromTarget() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC326C))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3450))(this);
	}
	template <typename T = uintptr_t> T BehaviorCaughtTarget() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC34F0))(this);
	}
	template <typename T = uintptr_t> T JumpFail(Il2CppVector3 destPos) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, Il2CppVector3))(Il2CppBase() + 0x4CC35D8))(this, destPos);
	}
	template <typename T = uintptr_t> T JumpFailOnGround() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC36F4))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC37DC))(this);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, uintptr_t))(Il2CppBase() + 0x4CC39DC))(this, skillRepInfo);
	}
	template <typename T = void> T PlayFindTargetPawn(uintptr_t pawn) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, uintptr_t))(Il2CppBase() + 0x4CC3BC4))(this, pawn);
	}
	template <typename T = void> T OnAttached() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC3E6C))(this);
	}
	template <typename T = void> T OnDettach() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC4024))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, float))(Il2CppBase() + 0x4CC4288))(this, deltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC4568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorControlZombie*))(Il2CppBase() + 0x4CC4570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdateRepInfo(uintptr_t P0) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, uintptr_t))(Il2CppBase() + 0x4CC4578))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIBehaviorControlZombie*, float))(Il2CppBase() + 0x4CC4580))(this, P0);
	}

};

}
