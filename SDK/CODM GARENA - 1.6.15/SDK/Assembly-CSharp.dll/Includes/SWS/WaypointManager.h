#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class WaypointManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "WaypointManager"));
	}

	template <typename T = uintptr_t> T& placementKey() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& viewPlacementKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& Paths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawStraight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawCurved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurved() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPathLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WaypointManager*))(Il2CppBase() + 0x3F3AA88))(this);
	}
	template <typename T = void> static T AddPath(uintptr_t path) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F30438))(0, path);
	}
	template <typename T = void> static T CleanUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3AC80))(0);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WaypointManager*))(Il2CppBase() + 0x3F3B0A4))(this);
	}
	template <typename T = void> static T DrawStraight(Il2CppArray<uintptr_t>* waypoints) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F31B58))(0, waypoints);
	}
	template <typename T = void> static T DrawCurved(Il2CppArray<uintptr_t>* pathPoints) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F31998))(0, pathPoints);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCurved(Il2CppArray<uintptr_t>* waypoints) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F3B1E0))(0, waypoints);
	}
	template <typename T = Il2CppVector3> static T GetPoint(Il2CppArray<uintptr_t>* gizmoPoints, float t) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x3F37350))(0, gizmoPoints, t);
	}
	template <typename T = float> static T GetPathLength(Il2CppArray<uintptr_t>* waypoints) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F3B4F4))(0, waypoints);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T SmoothCurve(Il2CppList<Il2CppVector3>* pathToCurve, int32_t interpolations) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, int32_t))(Il2CppBase() + 0x3F3B684))(0, pathToCurve, interpolations);
	}
	template <typename T = bool> static T CleanUpm__0(void* p) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3F3BBD4))(0, p);
	}
	template <typename T = Il2CppString*> static T CleanUpm__1(void* p) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3F3BCA4))(0, p);
	}

};

}
