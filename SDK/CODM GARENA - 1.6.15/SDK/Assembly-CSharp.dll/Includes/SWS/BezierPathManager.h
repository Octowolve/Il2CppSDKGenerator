#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class BezierPathManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "BezierPathManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& pathPoints() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bPoints() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& showHandles() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& connectHandles() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> T& color3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& pathDetail() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& customDetail() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<float>*> T& segmentDetail() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPathPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypointCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypointIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BezierPathManager*))(Il2CppBase() + 0x3F3030C))(this);
	}
	template <typename T = void> T Create(Il2CppArray<uintptr_t>* waypoints, bool makeChildren) {
		return ((T (*)(BezierPathManager*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3F3101C))(this, waypoints, makeChildren);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(BezierPathManager*))(Il2CppBase() + 0x3F3146C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPathPoints(bool local) {
		return ((T (*)(BezierPathManager*, bool))(Il2CppBase() + 0x3F31CBC))(this, local);
	}
	template <typename T = int32_t> T GetWaypointCount() {
		return ((T (*)(BezierPathManager*))(Il2CppBase() + 0x3F31E7C))(this);
	}
	template <typename T = uintptr_t> T GetWaypoint(int32_t index) {
		return ((T (*)(BezierPathManager*, int32_t))(Il2CppBase() + 0x3F31F50))(this, index);
	}
	template <typename T = int32_t> T GetWaypointIndex(int32_t point) {
		return ((T (*)(BezierPathManager*, int32_t))(Il2CppBase() + 0x3F32038))(this, point);
	}
	template <typename T = void> T CalculatePath() {
		return ((T (*)(BezierPathManager*))(Il2CppBase() + 0x3F30C3C))(this);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T GetPoints(Il2CppVector3 p0, Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3, float detail) {
		return ((T (*)(BezierPathManager*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3F32220))(this, p0, p1, p2, p3, detail);
	}
	template <typename T = void> T xLuaBaseProxy_Create(Il2CppArray<uintptr_t>* P0, bool P1) {
		return ((T (*)(BezierPathManager*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3F326DC))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetPathPoints(bool P0) {
		return ((T (*)(BezierPathManager*, bool))(Il2CppBase() + 0x3F32880))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetWaypointCount() {
		return ((T (*)(BezierPathManager*))(Il2CppBase() + 0x3F32AB0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetWaypoint(int32_t P0) {
		return ((T (*)(BezierPathManager*, int32_t))(Il2CppBase() + 0x3F32B68))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetWaypointIndex(int32_t P0) {
		return ((T (*)(BezierPathManager*, int32_t))(Il2CppBase() + 0x3F32C44))(this, P0);
	}

};

}
