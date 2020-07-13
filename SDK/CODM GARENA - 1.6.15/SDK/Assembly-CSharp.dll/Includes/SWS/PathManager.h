#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class PathManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "PathManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& waypoints() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& drawCurved() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& drawDirection() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& color1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& color2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& size() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& skipCustomNames() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& replaceObject() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix1_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHandleSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPathPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypointIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaypointCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PathManager*))(Il2CppBase() + 0x3F35F8C))(this);
	}
	template <typename T = void> T Create(uintptr_t parent) {
		return ((T (*)(PathManager*, uintptr_t))(Il2CppBase() + 0x3F36078))(this, parent);
	}
	template <typename T = void> T Create_1(Il2CppArray<uintptr_t>* waypoints, bool makeChildren) {
		return ((T (*)(PathManager*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3F326E0))(this, waypoints, makeChildren);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PathManager*))(Il2CppBase() + 0x3F365B0))(this);
	}
	template <typename T = float> T GetHandleSize(Il2CppVector3 pos) {
		return ((T (*)(PathManager*, Il2CppVector3))(Il2CppBase() + 0x3F3699C))(this, pos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPathPoints(bool local) {
		return ((T (*)(PathManager*, bool))(Il2CppBase() + 0x3F32884))(this, local);
	}
	template <typename T = uintptr_t> T GetWaypoint(int32_t index) {
		return ((T (*)(PathManager*, int32_t))(Il2CppBase() + 0x3F32B6C))(this, index);
	}
	template <typename T = int32_t> T GetWaypointIndex(int32_t point) {
		return ((T (*)(PathManager*, int32_t))(Il2CppBase() + 0x3F32C48))(this, point);
	}
	template <typename T = int32_t> T GetWaypointCount() {
		return ((T (*)(PathManager*))(Il2CppBase() + 0x3F32AB4))(this);
	}

};

}
