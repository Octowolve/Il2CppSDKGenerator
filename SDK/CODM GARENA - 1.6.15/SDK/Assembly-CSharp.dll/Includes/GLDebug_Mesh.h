#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLDebugMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLDebug_Mesh"));
	}

	template <typename T = int32_t> static T& MAX_MESH_VERTEX_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& xformVerts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransformGeometry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T Render(uintptr_t viewer, Il2CppList<uintptr_t>* colliders, uintptr_t lineColor, float lineAlpha, uintptr_t faceColor, float faceAlpha, bool noDepth) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, float, uintptr_t, float, bool))(Il2CppBase() + 0x3E11664))(0, viewer, colliders, lineColor, lineAlpha, faceColor, faceAlpha, noDepth);
	}
	template <typename T = void> static T RenderLines(uintptr_t viewer, Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E11940))(0, viewer, colliders);
	}
	template <typename T = void> static T RenderTris(uintptr_t viewer, Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E11CA4))(0, viewer, colliders);
	}
	template <typename T = void> static T TransformGeometry(uintptr_t viewer, uintptr_t collider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E123C8))(0, viewer, collider);
	}
	template <typename T = void> static T RenderQuads(uintptr_t viewer, Il2CppList<uintptr_t>* colliders) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E11F88))(0, viewer, colliders);
	}
	template <typename T = bool> static T RenderAABB(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E121F8))(0, collider);
	}

};

}
