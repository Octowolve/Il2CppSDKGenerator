#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLDebugCharacter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLDebug_Character"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& cylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& cylinderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& halfSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformHalfSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformHalfSphereFlipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& halfSphereQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& halfSphereTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CylinderScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CylinderQuat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformCylinderVert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HalfSphereQuat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HalfSphereQuatFlipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HalfSphereOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformHalfSphereVert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> static T Render(uintptr_t viewer, Il2CppList<uintptr_t>* colliders, uintptr_t lineColor, float lineAlpha, uintptr_t faceColor, float faceAlpha, bool noDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, float, uintptr_t, float, bool))(Il2CppBase() + 0x3E0D71C))(0, viewer, colliders, lineColor, lineAlpha, faceColor, faceAlpha, noDepth);
	}
	template <typename T = Il2CppVector3> static T CylinderScale(uintptr_t collider, float fOffset) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x3E0E1C0))(0, collider, fOffset);
	}
	template <typename T = Il2CppQuaternion> static T CylinderQuat() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E0E370))(0);
	}
	template <typename T = Il2CppVector3> static T TransformCylinderVert(Il2CppVector3 vert, uintptr_t collider, Il2CppVector3 scale, Il2CppQuaternion q) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3E0E480))(0, vert, collider, scale, q);
	}
	template <typename T = Il2CppQuaternion> static T HalfSphereQuat() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E0E71C))(0);
	}
	template <typename T = Il2CppQuaternion> static T HalfSphereQuatFlipped() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E0E828))(0);
	}
	template <typename T = float> static T HalfSphereOffset(uintptr_t collider, uintptr_t* vOffset) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3E0E938))(0, collider, vOffset);
	}
	template <typename T = Il2CppVector3> static T TransformHalfSphereVert(Il2CppVector3 vert, uintptr_t collider, Il2CppQuaternion q, Il2CppVector3 offset, float radius) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, Il2CppQuaternion, Il2CppVector3, float))(Il2CppBase() + 0x3E0EB54))(0, vert, collider, q, offset, radius);
	}
	template <typename T = void> static T TransformGeometry(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E0EE0C))(0, collider);
	}
	template <typename T = void> static T RenderLines(uintptr_t viewer, Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E0D9E8))(0, viewer, colliders);
	}
	template <typename T = void> static T RenderQuads(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E0DCB8))(0, colliders);
	}
	template <typename T = void> static T RenderTris(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E0DF44))(0, colliders);
	}

};

}
