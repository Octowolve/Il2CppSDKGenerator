#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class VertexHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "VertexHelper"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& m_Positions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Colors() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_Uv0S() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_Uv1S() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_Uv2S() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_Uv3S() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_Normals() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Tangents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_Indices() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& s_DefaultTangent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& s_DefaultNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(VertexHelper*))(Il2CppBase() + 0x4E2AA0C))(this);
	}
	template <typename T = int32_t> T get_currentVertCount() {
		return ((T (*)(VertexHelper*))(Il2CppBase() + 0x4E29D84))(this);
	}
	template <typename T = void> T PopulateUIVertex(uintptr_t vertex, int32_t i) {
		return ((T (*)(VertexHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x4E298DC))(this, vertex, i);
	}
	template <typename T = void> T SetUIVertex(uintptr_t vertex, int32_t i) {
		return ((T (*)(VertexHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x4E29B2C))(this, vertex, i);
	}
	template <typename T = void> T FillMesh(uintptr_t mesh) {
		return ((T (*)(VertexHelper*, uintptr_t))(Il2CppBase() + 0x4E40748))(this, mesh);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(VertexHelper*))(Il2CppBase() + 0x4E40904))(this);
	}
	template <typename T = void> T AddVert(Il2CppVector3 position, uintptr_t color, Il2CppVector2 uv0, Il2CppVector2 uv1, Il2CppVector3 normal, uintptr_t tangent) {
		return ((T (*)(VertexHelper*, Il2CppVector3, uintptr_t, Il2CppVector2, Il2CppVector2, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4E40B88))(this, position, color, uv0, uv1, normal, tangent);
	}
	template <typename T = void> T AddVert_1(Il2CppVector3 position, uintptr_t color, Il2CppVector2 uv0) {
		return ((T (*)(VertexHelper*, Il2CppVector3, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x4E2ABE4))(this, position, color, uv0);
	}
	template <typename T = void> T AddVert_2(uintptr_t v) {
		return ((T (*)(VertexHelper*, uintptr_t))(Il2CppBase() + 0x4E40DC0))(this, v);
	}
	template <typename T = void> T AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2) {
		return ((T (*)(VertexHelper*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E2AD3C))(this, idx0, idx1, idx2);
	}
	template <typename T = void> T AddUIVertexQuad(Il2CppArray<uintptr_t>* verts) {
		return ((T (*)(VertexHelper*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E3E854))(this, verts);
	}
	template <typename T = void> T AddUIVertexTriangleStream(Il2CppList<uintptr_t>* verts) {
		return ((T (*)(VertexHelper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4E38C54))(this, verts);
	}
	template <typename T = void> T GetUIVertexStream(Il2CppList<uintptr_t>* stream) {
		return ((T (*)(VertexHelper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4E38C04))(this, stream);
	}

};

}
