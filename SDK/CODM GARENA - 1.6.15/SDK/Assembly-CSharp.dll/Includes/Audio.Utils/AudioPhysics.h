#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class AudioPhysics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "AudioPhysics"));
	}

	template <typename T = uintptr_t> static T& _mRayIntersectBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollidersIntersectRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CollidersIntersectRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColliderIntersectRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ColliderIntersectRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AABBIntersectRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Max3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reciprocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> static T CollidersIntersectRay(Il2CppList<uintptr_t>* pColliders, Il2CppVector3 vecPos, Il2CppVector3 vecDirection, float fDetectLength) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4508D30))(0, pColliders, vecPos, vecDirection, fDetectLength);
	}
	template <typename T = bool> static T CollidersIntersectRay_1(Il2CppList<uintptr_t>* pColliders, Il2CppVector3 vecPos, Il2CppVector3 vecEndPos) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x44EB984))(0, pColliders, vecPos, vecEndPos);
	}
	template <typename T = bool> static T ColliderIntersectRay(uintptr_t pCollider, Il2CppVector3 vecPos, Il2CppVector3 vecDirection, float fDetectLength) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4508F20))(0, pCollider, vecPos, vecDirection, fDetectLength);
	}
	template <typename T = bool> static T ColliderIntersectRay_1(uintptr_t pVCD, Il2CppVector3 vecStartPos, Il2CppVector3 vecEndPos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x44DB8CC))(0, pVCD, vecStartPos, vecEndPos);
	}
	template <typename T = bool> static T AABBIntersectRay(Il2CppVector3 vecMin, Il2CppVector3 vecMax, Il2CppVector3 vecStart, Il2CppVector3 vecEnd, Il2CppVector3 vecStartToEnd, Il2CppVector3 vecOneOverStartToEnd) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4509304))(0, vecMin, vecMax, vecStart, vecEnd, vecStartToEnd, vecOneOverStartToEnd);
	}
	template <typename T = float> static T Max3(float a, float b, float c) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x450979C))(0, a, b, c);
	}
	template <typename T = Il2CppVector3> static T Reciprocal(Il2CppVector3 vecInput) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x450919C))(0, vecInput);
	}

};

}
