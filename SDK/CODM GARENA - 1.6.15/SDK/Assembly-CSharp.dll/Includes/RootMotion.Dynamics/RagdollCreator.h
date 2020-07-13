#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class RagdollCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RootMotion.Dynamics", "RagdollCreator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScaleF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Abs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Vector3Abs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectionIntToVector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectionToVector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectionVector3ToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalOrthoDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectedBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToSoftJointLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T ClearAll(uintptr_t root) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4136228))(0, root);
	}
	template <typename T = void> static T ClearTransform(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413CD3C))(0, transform);
	}
	template <typename T = void> static T CreateCollider(uintptr_t t, Il2CppVector3 startPoint, Il2CppVector3 endPoint, uintptr_t colliderType, float lengthOverlap, float width) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x4139DDC))(0, t, startPoint, endPoint, colliderType, lengthOverlap, width);
	}
	template <typename T = void> static T CreateCollider_1(uintptr_t t, Il2CppVector3 startPoint, Il2CppVector3 endPoint, uintptr_t colliderType, float lengthOverlap, float width, float proportionAspect, Il2CppVector3 widthDirection) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, float, Il2CppVector3))(Il2CppBase() + 0x4139838))(0, t, startPoint, endPoint, colliderType, lengthOverlap, width, proportionAspect, widthDirection);
	}
	template <typename T = float> static T GetScaleF(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4140454))(0, t);
	}
	template <typename T = Il2CppVector3> static T Abs(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4140740))(0, v);
	}
	template <typename T = void> static T Vector3Abs(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4140828))(0, v);
	}
	template <typename T = Il2CppVector3> static T DirectionIntToVector3(int32_t dir) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414092C))(0, dir);
	}
	template <typename T = Il2CppVector3> static T DirectionToVector3(uintptr_t dir) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41409FC))(0, dir);
	}
	template <typename T = int32_t> static T DirectionVector3ToInt(Il2CppVector3 dir) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4140540))(0, dir);
	}
	template <typename T = Il2CppVector3> static T GetLocalOrthoDirection(uintptr_t transform, Il2CppVector3 worldDir) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4140ACC))(0, transform, worldDir);
	}
	template <typename T = uintptr_t> static T GetConnectedBody(uintptr_t bone, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4140E24))(0, bone, bones);
	}
	template <typename T = void> static T CreateJoint(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413B42C))(0, p);
	}
	template <typename T = uintptr_t> static T ToSoftJointLimit(float limit) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41410E0))(0, limit);
	}

};

}
