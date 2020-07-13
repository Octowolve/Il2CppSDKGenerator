#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_DebugPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DebugLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DebugLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DebugCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DebugCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugWireSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugWireSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DebugCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DebugCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DebugCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawLocalCube() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawCylinder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawCone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_DrawGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_DrawGizmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MethodsOfObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MethodsOfType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}

	template <typename T = void> static T DebugPoint(Il2CppVector3 position, uintptr_t color, float scale, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x41622D4))(0, position, color, scale, duration, depthTest);
	}
	template <typename T = void> static T DebugPoint_1(Il2CppVector3 position, float scale, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x41627E8))(0, position, scale, duration, depthTest);
	}
	template <typename T = void> static T DebugBounds(uintptr_t bounds, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x41628F8))(0, bounds, color, duration, depthTest);
	}
	template <typename T = void> static T DebugBounds_1(uintptr_t bounds, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x41631EC))(0, bounds, duration, depthTest);
	}
	template <typename T = void> static T DebugLocalCube(uintptr_t transform, Il2CppVector3 size, uintptr_t color, Il2CppVector3 center, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x4163320))(0, transform, size, color, center, duration, depthTest);
	}
	template <typename T = void> static T DebugLocalCube_1(uintptr_t transform, Il2CppVector3 size, Il2CppVector3 center, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool))(Il2CppBase() + 0x4163DA0))(0, transform, size, center, duration, depthTest);
	}
	template <typename T = void> static T DebugLocalCube_2(uintptr_t space, Il2CppVector3 size, uintptr_t color, Il2CppVector3 center, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, Il2CppVector3, float, bool))(Il2CppBase() + 0x4163EC0))(0, space, size, color, center, duration, depthTest);
	}
	template <typename T = void> static T DebugLocalCube_3(uintptr_t space, Il2CppVector3 size, Il2CppVector3 center, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool))(Il2CppBase() + 0x4164AE8))(0, space, size, center, duration, depthTest);
	}
	template <typename T = void> static T DebugCircle(Il2CppVector3 position, Il2CppVector3 up, uintptr_t color, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x4164D18))(0, position, up, color, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCircle_1(Il2CppVector3 position, uintptr_t color, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x4165394))(0, position, color, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCircle_2(Il2CppVector3 position, Il2CppVector3 up, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x41654CC))(0, position, up, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCircle_3(Il2CppVector3 position, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4165604))(0, position, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugWireSphere(Il2CppVector3 position, uintptr_t color, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x416573C))(0, position, color, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugWireSphere_1(Il2CppVector3 position, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4165BDC))(0, position, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCylinder(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x4165CEC))(0, start, end, color, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCylinder_1(Il2CppVector3 start, Il2CppVector3 end, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4166720))(0, start, end, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCone(Il2CppVector3 position, Il2CppVector3 direction, uintptr_t color, float angle, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x4166858))(0, position, direction, color, angle, duration, depthTest);
	}
	template <typename T = void> static T DebugCone_1(Il2CppVector3 position, Il2CppVector3 direction, float angle, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4167204))(0, position, direction, angle, duration, depthTest);
	}
	template <typename T = void> static T DebugCone_2(Il2CppVector3 position, uintptr_t color, float angle, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x416733C))(0, position, color, angle, duration, depthTest);
	}
	template <typename T = void> static T DebugCone_3(Il2CppVector3 position, float angle, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4167474))(0, position, angle, duration, depthTest);
	}
	template <typename T = void> static T DebugArrow(Il2CppVector3 position, Il2CppVector3 direction, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x41675AC))(0, position, direction, color, duration, depthTest);
	}
	template <typename T = void> static T DebugArrow_1(Il2CppVector3 position, Il2CppVector3 direction, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, bool))(Il2CppBase() + 0x4167804))(0, position, direction, duration, depthTest);
	}
	template <typename T = void> static T DebugCapsule(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, bool))(Il2CppBase() + 0x4167930))(0, start, end, color, radius, duration, depthTest);
	}
	template <typename T = void> static T DebugCapsule_1(Il2CppVector3 start, Il2CppVector3 end, float radius, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, bool))(Il2CppBase() + 0x4168E34))(0, start, end, radius, duration, depthTest);
	}
	template <typename T = void> static T DrawPoint(Il2CppVector3 position, uintptr_t color, float scale) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x4168F6C))(0, position, color, scale);
	}
	template <typename T = void> static T DrawPoint_1(Il2CppVector3 position, float scale) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4169358))(0, position, scale);
	}
	template <typename T = void> static T DrawBounds(uintptr_t bounds, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4169450))(0, bounds, color);
	}
	template <typename T = void> static T DrawBounds_1(uintptr_t bounds) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4169B84))(0, bounds);
	}
	template <typename T = void> static T DrawLocalCube(uintptr_t transform, Il2CppVector3 size, uintptr_t color, Il2CppVector3 center) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4169C8C))(0, transform, size, color, center);
	}
	template <typename T = void> static T DrawLocalCube_1(uintptr_t transform, Il2CppVector3 size, Il2CppVector3 center) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x416A5BC))(0, transform, size, center);
	}
	template <typename T = void> static T DrawLocalCube_2(uintptr_t space, Il2CppVector3 size, uintptr_t color, Il2CppVector3 center) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x416A6CC))(0, space, size, color, center);
	}
	template <typename T = void> static T DrawLocalCube_3(uintptr_t space, Il2CppVector3 size, Il2CppVector3 center) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x416B09C))(0, space, size, center);
	}
	template <typename T = void> static T DrawCircle(Il2CppVector3 position, Il2CppVector3 up, uintptr_t color, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416B2A8))(0, position, up, color, radius);
	}
	template <typename T = void> static T DrawCircle_1(Il2CppVector3 position, uintptr_t color, float radius) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416B950))(0, position, color, radius);
	}
	template <typename T = void> static T DrawCircle_2(Il2CppVector3 position, Il2CppVector3 up, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x416BA74))(0, position, up, radius);
	}
	template <typename T = void> static T DrawCircle_3(Il2CppVector3 position, float radius) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x416BB90))(0, position, radius);
	}
	template <typename T = void> static T DrawCylinder(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416BCB0))(0, start, end, color, radius);
	}
	template <typename T = void> static T DrawCylinder_1(Il2CppVector3 start, Il2CppVector3 end, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x416C554))(0, start, end, radius);
	}
	template <typename T = void> static T DrawCone(Il2CppVector3 position, Il2CppVector3 direction, uintptr_t color, float angle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416C674))(0, position, direction, color, angle);
	}
	template <typename T = void> static T DrawCone_1(Il2CppVector3 position, Il2CppVector3 direction, float angle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x416CF60))(0, position, direction, angle);
	}
	template <typename T = void> static T DrawCone_2(Il2CppVector3 position, uintptr_t color, float angle) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416D080))(0, position, color, angle);
	}
	template <typename T = void> static T DrawCone_3(Il2CppVector3 position, float angle) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x416D1A4))(0, position, angle);
	}
	template <typename T = void> static T DrawArrow(Il2CppVector3 position, Il2CppVector3 direction, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x416D2C4))(0, position, direction, color);
	}
	template <typename T = void> static T DrawArrow_1(Il2CppVector3 position, Il2CppVector3 direction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x416D518))(0, position, direction);
	}
	template <typename T = void> static T DrawCapsule(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x416D620))(0, start, end, color, radius);
	}
	template <typename T = void> static T DrawCapsule_1(Il2CppVector3 start, Il2CppVector3 end, float radius) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x416E854))(0, start, end, radius);
	}
	template <typename T = void> static T DrawGizmo(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x416E974))(0, col);
	}
	template <typename T = void> static T DrawGizmo_1(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x416EBA0))(0, col);
	}
	template <typename T = void> static T DrawGizmo_2(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x416F15C))(0, col);
	}
	template <typename T = void> static T DrawGizmo_3(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x416EE08))(0, col);
	}
	template <typename T = Il2CppString*> static T MethodsOfObject(uintptr_t obj, bool includeInfo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x416F2A0))(0, obj, includeInfo);
	}
	template <typename T = Il2CppString*> static T MethodsOfType(uintptr_t type, bool includeInfo) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x416F520))(0, type, includeInfo);
	}

};

}
