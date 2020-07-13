#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLDebugSphere
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLDebug_Sphere"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& verts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformVerts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& quads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& tris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Transform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppVector3> static T Transform(Il2CppVector3 vert, uintptr_t collider, float scale) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x3E12744))(0, vert, collider, scale);
	}
	template <typename T = void> static T Render(uintptr_t viewer, Il2CppList<uintptr_t>* colliders, uintptr_t lineColor, float lineAlpha, uintptr_t faceColor, float faceAlpha, bool noDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, float, uintptr_t, float, bool))(Il2CppBase() + 0x3E129E8))(0, viewer, colliders, lineColor, lineAlpha, faceColor, faceAlpha, noDepth);
	}
	template <typename T = void> static T TransformGeometry(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E133D8))(0, collider);
	}
	template <typename T = void> static T RenderLines(uintptr_t viewer, Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E12CB4))(0, viewer, colliders);
	}
	template <typename T = void> static T RenderQuads(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E12F3C))(0, colliders);
	}
	template <typename T = void> static T RenderTris(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E13188))(0, colliders);
	}

};

}
