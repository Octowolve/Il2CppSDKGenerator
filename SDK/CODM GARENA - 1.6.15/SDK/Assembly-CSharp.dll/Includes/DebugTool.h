#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugTool"));
	}

	template <typename T = uintptr_t> static T& spheremesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& spherematerial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpRenderTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawGizmosCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPrefabMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T DumpRenderTexture(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4170078))(0, rt);
	}
	template <typename T = void> static T DrawLine(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x41703BC))(0, start, end, color, duration, depthTest);
	}
	template <typename T = void> static T DrawRay(Il2CppVector3 start, Il2CppVector3 dir, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x4170574))(0, start, dir, color, duration, depthTest);
	}
	template <typename T = void> static T DrawCapsule(Il2CppVector3 start, Il2CppVector3 end, float radius, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t, float, bool))(Il2CppBase() + 0x417072C))(0, start, end, radius, color, duration, depthTest);
	}
	template <typename T = void> static T DrawAABB(Il2CppVector3 center, Il2CppVector3 extent, uintptr_t color, float duration) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x4171464))(0, center, extent, color, duration);
	}
	template <typename T = void> static T DrawGizmosCapsule(Il2CppVector3 start, Il2CppVector3 end, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4171A0C))(0, start, end, radius);
	}
	template <typename T = void> static T DrawPrefabMesh(uintptr_t trans, Il2CppString* prefabPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41725AC))(0, trans, prefabPath);
	}
	template <typename T = void> static T DrawSphere(Il2CppVector3 position, float size, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x417267C))(0, position, size, color);
	}
	template <typename T = void> static T DrawBox(Il2CppVector3 origin, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, uintptr_t color, float duration) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, uintptr_t, float))(Il2CppBase() + 0x4172788))(0, origin, halfExtents, orientation, color, duration);
	}

};

}
