#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RagdollLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RagdollLogic"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& mRagdollLib() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OnShutdown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnCreate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& liveTimer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& spring() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& damper() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_TimeTick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_joints() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_colliders() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RagdollJoints() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Rigidbodys() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_rigidbody() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& FFirstFrame() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FucAliveCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T CheckBomb(Il2CppVector3 inLocation, float inRange) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x2DD8848))(0, inLocation, inRange);
	}
	template <typename T = void> static T CheckShot(Il2CppVector3 inDir, Il2CppVector3 inHitPoint, uintptr_t inHitCollider) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2DD904C))(0, inDir, inHitPoint, inHitCollider);
	}
	template <typename T = void> static T RemoveNull() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DD8D7C))(0);
	}
	template <typename T = uintptr_t> static T Create(int32_t inAssetID, uintptr_t inPawn, uintptr_t inOnCreate) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DD9814))(0, inAssetID, inPawn, inOnCreate);
	}
	template <typename T = void> static T Destroy(uintptr_t inRagdoll) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2DD9C4C))(0, inRagdoll);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DD9DC4))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(RagdollLogic*, uintptr_t))(Il2CppBase() + 0x2DD9B88))(this, value);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDAB30))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDB304))(this);
	}
	template <typename T = void> T set_velocity(Il2CppVector3 value) {
		return ((T (*)(RagdollLogic*, Il2CppVector3))(Il2CppBase() + 0x2DD8C80))(this, value);
	}
	template <typename T = void> T set_angularVelocity(Il2CppVector3 value) {
		return ((T (*)(RagdollLogic*, Il2CppVector3))(Il2CppBase() + 0x2DD9718))(this, value);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(RagdollLogic*, uintptr_t))(Il2CppBase() + 0x2DDB3E4))(this, collision);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDB4E0))(this);
	}
	template <typename T = void> T InitRagdoll() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DD9DCC))(this);
	}
	template <typename T = void> T ToBindBone() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDB6E4))(this);
	}
	template <typename T = void> T FucAliveCallback() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDB9BC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDBC1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDBDCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ToBindBone() {
		return ((T (*)(RagdollLogic*))(Il2CppBase() + 0x2DDBDD0))(this);
	}

};

}
