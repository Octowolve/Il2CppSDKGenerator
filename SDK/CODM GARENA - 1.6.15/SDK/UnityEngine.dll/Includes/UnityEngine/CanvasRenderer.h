#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CanvasRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CanvasRenderer"));
	}


	template <typename T = void> T SetColor(uintptr_t color) {
		return ((T (*)(CanvasRenderer*, uintptr_t))(Il2CppBase() + 0x46A60E8))(this, color);
	}
	template <typename T = void> static T INTERNAL_CALL_SetColor(uintptr_t self, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A6110))(0, self, color);
	}
	template <typename T = uintptr_t> T GetColor() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A61B0))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetColor(uintptr_t self, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A61E4))(0, self, value);
	}
	template <typename T = void> T EnableRectClipping(Il2CppRect rect) {
		return ((T (*)(CanvasRenderer*, Il2CppRect))(Il2CppBase() + 0x46A6284))(this, rect);
	}
	template <typename T = void> static T INTERNAL_CALL_EnableRectClipping(uintptr_t self, uintptr_t rect) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A62AC))(0, self, rect);
	}
	template <typename T = void> T DisableRectClipping() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A634C))(this);
	}
	template <typename T = void> T set_hasPopInstruction(bool value) {
		return ((T (*)(CanvasRenderer*, bool))(Il2CppBase() + 0x46A63E4))(this, value);
	}
	template <typename T = int32_t> T get_materialCount() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A6484))(this);
	}
	template <typename T = void> T set_materialCount(int32_t value) {
		return ((T (*)(CanvasRenderer*, int32_t))(Il2CppBase() + 0x46A651C))(this, value);
	}
	template <typename T = void> T SetMaterial(uintptr_t material, int32_t index) {
		return ((T (*)(CanvasRenderer*, uintptr_t, int32_t))(Il2CppBase() + 0x46A65BC))(this, material, index);
	}
	template <typename T = void> T SetMaterial_1(uintptr_t material, uintptr_t texture) {
		return ((T (*)(CanvasRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A6664))(this, material, texture);
	}
	template <typename T = void> T set_popMaterialCount(int32_t value) {
		return ((T (*)(CanvasRenderer*, int32_t))(Il2CppBase() + 0x46A675C))(this, value);
	}
	template <typename T = void> T SetPopMaterial(uintptr_t material, int32_t index) {
		return ((T (*)(CanvasRenderer*, uintptr_t, int32_t))(Il2CppBase() + 0x46A67FC))(this, material, index);
	}
	template <typename T = void> T SetTexture(uintptr_t texture) {
		return ((T (*)(CanvasRenderer*, uintptr_t))(Il2CppBase() + 0x46A66BC))(this, texture);
	}
	template <typename T = void> T SetAlphaTexture(uintptr_t texture) {
		return ((T (*)(CanvasRenderer*, uintptr_t))(Il2CppBase() + 0x46A68A4))(this, texture);
	}
	template <typename T = void> T SetMesh(uintptr_t mesh) {
		return ((T (*)(CanvasRenderer*, uintptr_t))(Il2CppBase() + 0x46A6944))(this, mesh);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A69E4))(this);
	}
	template <typename T = void> static T SplitUIVertexStreams(Il2CppList<uintptr_t>* verts, Il2CppList<Il2CppVector3>* positions, Il2CppList<uintptr_t>* colors, Il2CppList<Il2CppVector2>* uv0S, Il2CppList<Il2CppVector2>* uv1S, Il2CppList<Il2CppVector3>* normals, Il2CppList<uintptr_t>* tangents, Il2CppList<int32_t>* indicies) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector2>*, Il2CppList<Il2CppVector2>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x46A6A7C))(0, verts, positions, colors, uv0S, uv1S, normals, tangents, indicies);
	}
	template <typename T = void> static T SplitUIVertexStreamsInternal(uintptr_t verts, uintptr_t positions, uintptr_t colors, uintptr_t uv0S, uintptr_t uv1S, uintptr_t normals, uintptr_t tangents) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A6AC4))(0, verts, positions, colors, uv0S, uv1S, normals, tangents);
	}
	template <typename T = void> static T SplitIndiciesStreamsInternal(uintptr_t verts, uintptr_t indicies) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A6B94))(0, verts, indicies);
	}
	template <typename T = void> static T CreateUIVertexStream(Il2CppList<uintptr_t>* verts, Il2CppList<Il2CppVector3>* positions, Il2CppList<uintptr_t>* colors, Il2CppList<Il2CppVector2>* uv0S, Il2CppList<Il2CppVector2>* uv1S, Il2CppList<Il2CppVector3>* normals, Il2CppList<uintptr_t>* tangents, Il2CppList<int32_t>* indicies) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector2>*, Il2CppList<Il2CppVector2>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x46A6C34))(0, verts, positions, colors, uv0S, uv1S, normals, tangents, indicies);
	}
	template <typename T = void> static T CreateUIVertexStreamInternal(uintptr_t verts, uintptr_t positions, uintptr_t colors, uintptr_t uv0S, uintptr_t uv1S, uintptr_t normals, uintptr_t tangents, uintptr_t indicies) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A6C70))(0, verts, positions, colors, uv0S, uv1S, normals, tangents, indicies);
	}
	template <typename T = bool> T get_cull() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A6D54))(this);
	}
	template <typename T = void> T set_cull(bool value) {
		return ((T (*)(CanvasRenderer*, bool))(Il2CppBase() + 0x46A6DEC))(this, value);
	}
	template <typename T = int32_t> T get_absoluteDepth() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A6E8C))(this);
	}
	template <typename T = bool> T get_hasMoved() {
		return ((T (*)(CanvasRenderer*))(Il2CppBase() + 0x46A6F24))(this);
	}

};

}
