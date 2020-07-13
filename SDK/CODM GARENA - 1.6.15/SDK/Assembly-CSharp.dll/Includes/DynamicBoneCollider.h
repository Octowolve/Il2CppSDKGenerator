#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicBoneCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicBoneCollider"));
	}

	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Bound() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Collide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OutsideSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsideSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OutsideCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsideCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnValidate() {
		return ((T (*)(DynamicBoneCollider*))(Il2CppBase() + 0x418063C))(this);
	}
	template <typename T = void> T Collide(uintptr_t particlePosition, float particleRadius) {
		return ((T (*)(DynamicBoneCollider*, uintptr_t, float))(Il2CppBase() + 0x4180068))(this, particlePosition, particleRadius);
	}
	template <typename T = void> static T OutsideSphere(uintptr_t particlePosition, float particleRadius, Il2CppVector3 sphereCenter, float sphereRadius) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, float))(Il2CppBase() + 0x4180750))(0, particlePosition, particleRadius, sphereCenter, sphereRadius);
	}
	template <typename T = void> static T InsideSphere(uintptr_t particlePosition, float particleRadius, Il2CppVector3 sphereCenter, float sphereRadius) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, float))(Il2CppBase() + 0x4180954))(0, particlePosition, particleRadius, sphereCenter, sphereRadius);
	}
	template <typename T = void> static T OutsideCapsule(uintptr_t particlePosition, float particleRadius, Il2CppVector3 capsuleP0, Il2CppVector3 capsuleP1, float capsuleRadius) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4180B4C))(0, particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius);
	}
	template <typename T = void> static T InsideCapsule(uintptr_t particlePosition, float particleRadius, Il2CppVector3 capsuleP0, Il2CppVector3 capsuleP1, float capsuleRadius) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x418106C))(0, particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(DynamicBoneCollider*))(Il2CppBase() + 0x4181568))(this);
	}

};

}
