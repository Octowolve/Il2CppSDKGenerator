#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicBone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicBone"));
	}

	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_UpdateRate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_UpdateMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Damping() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DampingDistrib() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Elasticity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ElasticityDistrib() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Stiffness() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_StiffnessDistrib() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_Inert() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_InertDistrib() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_RadiusDistrib() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_EndLength() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_EndOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_Gravity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& m_Force() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Colliders() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Exclusions() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_FreezeAxis() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_DistantDisable() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_ReferenceObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_DistanceToObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& m_LocalGravity() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& m_ObjectMove() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_ObjectPrevPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_BoneTotalLength() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_ObjectScale() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_Weight() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_DistantDisabled() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Particles() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDynamicBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupParticles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendParticles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTransforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetParticlesPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParticles1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParticles2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipUpdateParticles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MirrorVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyParticlesToTransforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417C21C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417C7F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417C974))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417CA24))(this);
	}
	template <typename T = void> T PreUpdate() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417C8A8))(this);
	}
	template <typename T = void> T CheckDistance() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417CB30))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D4F0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D594))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D638))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D7DC))(this);
	}
	template <typename T = void> T SetWeight(float w) {
		return ((T (*)(DynamicBone*, float))(Il2CppBase() + 0x417DAAC))(this, w);
	}
	template <typename T = float> T GetWeight() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417DB9C))(this);
	}
	template <typename T = void> T UpdateDynamicBones(float t) {
		return ((T (*)(DynamicBone*, float))(Il2CppBase() + 0x417CDF0))(this, t);
	}
	template <typename T = void> T SetupParticles() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417C2C0))(this);
	}
	template <typename T = void> T AppendParticles(uintptr_t b, int32_t parentIndex, float boneLength) {
		return ((T (*)(DynamicBone*, uintptr_t, int32_t, float))(Il2CppBase() + 0x417F6DC))(this, b, parentIndex, boneLength);
	}
	template <typename T = void> T InitTransforms() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D0C0))(this);
	}
	template <typename T = void> T ResetParticlesPosition() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417D290))(this);
	}
	template <typename T = void> T UpdateParticles1() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417DC3C))(this);
	}
	template <typename T = void> T UpdateParticles2() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417E120))(this);
	}
	template <typename T = void> T SkipUpdateParticles() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417EB78))(this);
	}
	template <typename T = Il2CppVector3> static T MirrorVector(Il2CppVector3 v, Il2CppVector3 axis) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x418041C))(0, v, axis);
	}
	template <typename T = void> T ApplyParticlesToTransforms() {
		return ((T (*)(DynamicBone*))(Il2CppBase() + 0x417F30C))(this);
	}

};

}
