#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GLDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GLDebug"));
	}

	template <typename T = uintptr_t> static T& material() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& materialNoDepthTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& lastColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& lastFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& lastNoDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& lastAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& DebugShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DebugNoDepthShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ObjectMaxScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CapsuleObjectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderLineList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderWireframeQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderSolidQuads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderWireframeTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderSolidTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> static T SetColor(uintptr_t color, float alpha, bool noDepthTest) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x3E05B34))(0, color, alpha, noDepthTest);
	}
	template <typename T = float> static T ObjectMaxScale(uintptr_t xform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E06314))(0, xform);
	}
	template <typename T = void> static T CapsuleObjectScale(uintptr_t xform, uintptr_t* radiusScale, uintptr_t* cylinderScale) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3E06488))(0, xform, radiusScale, cylinderScale);
	}
	template <typename T = void> static T RenderLineList(Il2CppArray<uintptr_t>* verts) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E065FC))(0, verts);
	}
	template <typename T = void> static T RenderWireframeQuads(Il2CppArray<uintptr_t>* verts, Il2CppArray<uintptr_t>* quads) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E067A0))(0, verts, quads);
	}
	template <typename T = void> static T RenderSolidQuads(Il2CppArray<uintptr_t>* verts, Il2CppArray<uintptr_t>* quads) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E06ADC))(0, verts, quads);
	}
	template <typename T = void> static T RenderWireframeTris(uintptr_t viewer, Il2CppArray<uintptr_t>* verts, Il2CppArray<uintptr_t>* tris) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E06D88))(0, viewer, verts, tris);
	}
	template <typename T = void> static T RenderSolidTris(Il2CppArray<uintptr_t>* verts, Il2CppArray<uintptr_t>* tris) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E07124))(0, verts, tris);
	}

};

}
