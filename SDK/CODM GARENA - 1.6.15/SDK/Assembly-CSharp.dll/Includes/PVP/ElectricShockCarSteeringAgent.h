#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ElectricShockCarSteeringAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ElectricShockCarSteeringAgent"));
	}

	template <typename T = uintptr_t> T& pathContainer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& startPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& updateRotation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& currentPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waypoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_AvoidancePriority() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& agent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& ReachOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& HasPendingDestination() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& PendingDestination() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationMoveActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNavigationVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMoveAlongPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReachedCurWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachedPathEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaypointPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReachOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_Agent() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3478D8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3478D94))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3478ED0))(this);
	}
	template <typename T = Il2CppVector3> T NavigationMoveActor(float deltaTime) {
		return ((T (*)(ElectricShockCarSteeringAgent*, float))(Il2CppBase() + 0x34793E8))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetNavigationVelocity() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x347964C))(this);
	}
	template <typename T = void> T StartMoveAlongPath() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3479714))(this);
	}
	template <typename T = void> T Move() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3479BDC))(this);
	}
	template <typename T = bool> T HasReachedCurWaypoint() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3479078))(this);
	}
	template <typename T = void> T GoToWaypoint(int32_t index) {
		return ((T (*)(ElectricShockCarSteeringAgent*, int32_t))(Il2CppBase() + 0x34791E0))(this, index);
	}
	template <typename T = void> T ReachedPathEnd() {
		return ((T (*)(ElectricShockCarSteeringAgent*))(Il2CppBase() + 0x3479300))(this);
	}
	template <typename T = void> T SetWaypointPath(uintptr_t newPath) {
		return ((T (*)(ElectricShockCarSteeringAgent*, uintptr_t))(Il2CppBase() + 0x3479CA8))(this, newPath);
	}
	template <typename T = void> T Stop(bool stopUpdates) {
		return ((T (*)(ElectricShockCarSteeringAgent*, bool))(Il2CppBase() + 0x3479A14))(this, stopUpdates);
	}
	template <typename T = void> T ChangeSpeed(float value) {
		return ((T (*)(ElectricShockCarSteeringAgent*, float))(Il2CppBase() + 0x3479D64))(this, value);
	}
	template <typename T = void> T SetReachOffset(float offset) {
		return ((T (*)(ElectricShockCarSteeringAgent*, float))(Il2CppBase() + 0x3479E2C))(this, offset);
	}
	template <typename T = void> T MoveTo(Il2CppVector3 destLoc) {
		return ((T (*)(ElectricShockCarSteeringAgent*, Il2CppVector3))(Il2CppBase() + 0x3479EFC))(this, destLoc);
	}

};

}
