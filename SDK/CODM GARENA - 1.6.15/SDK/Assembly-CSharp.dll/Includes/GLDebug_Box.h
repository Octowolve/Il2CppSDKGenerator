#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLDebugBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLDebug_Box"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& verts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& quads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformVerts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Transform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Transform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RenderLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RenderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T Render(Il2CppList<uintptr_t>* colliders, uintptr_t lineColor, float lineAlpha, uintptr_t faceColor, float faceAlpha, bool noDepth) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, float, uintptr_t, float, bool))(Il2CppBase() + 0x3E0743C))(0, colliders, lineColor, lineAlpha, faceColor, faceAlpha, noDepth);
	}
	template <typename T = void> static T RenderLines(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E076F8))(0, colliders);
	}
	template <typename T = void> static T RenderQuads(Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E07944))(0, colliders);
	}
	template <typename T = void> static T TransformGeometry(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E07B90))(0, collider);
	}
	template <typename T = Il2CppVector3> static T Transform(Il2CppVector3 vert, uintptr_t collider) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3E08074))(0, vert, collider);
	}
	template <typename T = Il2CppVector3> static T Transform_1(Il2CppVector3 vert, uintptr_t bounds) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3E08268))(0, vert, bounds);
	}
	template <typename T = void> static T RenderLines_1(uintptr_t bounds) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E08438))(0, bounds);
	}
	template <typename T = void> static T RenderQuads_1(uintptr_t bounds) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E08A9C))(0, bounds);
	}

};

}
