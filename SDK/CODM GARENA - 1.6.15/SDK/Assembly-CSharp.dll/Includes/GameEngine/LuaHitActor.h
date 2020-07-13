#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaHitActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaHitActor"));
	}

	template <typename T = uintptr_t> T& actorInfo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& hitBox() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& actorConfig() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& fireColliderShape() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& moveDest() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& reachedDest() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& damageEffect() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_IsCanDirectAutoFire() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A8FFB0))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A8D1E0))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A8D2E0))(this);
	}
	template <typename T = void> T Init(uint32_t actorID, uint32_t configID) {
		return ((T (*)(LuaHitActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8D3BC))(this, actorID, configID);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A8FFB8))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(LuaHitActor*, uintptr_t))(Il2CppBase() + 0x4A90060))(this, damageInfo);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A90250))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A90258))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A90260))(this);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t damageInfo) {
		return ((T (*)(LuaHitActor*, uintptr_t))(Il2CppBase() + 0x4A90348))(this, damageInfo);
	}
	template <typename T = void> T ReleaseModel() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A9052C))(this);
	}
	template <typename T = void> T OnHealthChange() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A90684))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A90A90))(this);
	}
	template <typename T = void> T RecvMovePath(uintptr_t moveData) {
		return ((T (*)(LuaHitActor*, uintptr_t))(Il2CppBase() + 0x4A90C08))(this, moveData);
	}
	template <typename T = void> T SetAnimMoveSpeed(float speed) {
		return ((T (*)(LuaHitActor*, float))(Il2CppBase() + 0x4A90F1C))(this, speed);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LuaHitActor*, float))(Il2CppBase() + 0x4A90FBC))(this, deltaTime);
	}
	template <typename T = void> T Die() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A91468))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A91C24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A91C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(LuaHitActor*, uintptr_t))(Il2CppBase() + 0x4A91C34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateTakeDamage(uintptr_t P0) {
		return ((T (*)(LuaHitActor*, uintptr_t))(Il2CppBase() + 0x4A91C3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(LuaHitActor*))(Il2CppBase() + 0x4A91C44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LuaHitActor*, float))(Il2CppBase() + 0x4A91C4C))(this, P0);
	}

};

}
