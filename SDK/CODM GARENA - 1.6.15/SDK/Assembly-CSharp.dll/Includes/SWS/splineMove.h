#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class splineMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "splineMove"));
	}

	template <typename T = uintptr_t> T& pathContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& onStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& moveToPath() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& reverse() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = int32_t> T& startPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& currentPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& closeLoop() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& local() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = float> T& lookAhead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& sizeToAdd() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& timeValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& animEaseType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waypoints() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& events() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& pathType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& pathMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& lockPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& lockRotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& waypointRotation() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& rotationTarget() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& tween() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wpPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& originSpeed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppQuaternion> T& originRot() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& rand() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rndArray() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaypointReached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaypointChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaypointRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWaypointRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomizeWaypoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F37BA8))(this);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F37C58))(this);
	}
	template <typename T = void> T Initialize(int32_t startAt) {
		return ((T (*)(splineMove*, int32_t))(Il2CppBase() + 0x3F37F54))(this, startAt);
	}
	template <typename T = void> T CreateTween() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F382F8))(this);
	}
	template <typename T = void> T OnWaypointReached(int32_t index) {
		return ((T (*)(splineMove*, int32_t))(Il2CppBase() + 0x3F39298))(this, index);
	}
	template <typename T = void> T OnWaypointChange(int32_t index) {
		return ((T (*)(splineMove*, int32_t))(Il2CppBase() + 0x3F39368))(this, index);
	}
	template <typename T = void> T OnWaypointRotation() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F395A0))(this);
	}
	template <typename T = void> T ApplyWaypointRotation(Il2CppQuaternion rotation) {
		return ((T (*)(splineMove*, Il2CppQuaternion))(Il2CppBase() + 0x3F39EC0))(this, rotation);
	}
	template <typename T = void> T ReachedEnd() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F39FB8))(this);
	}
	template <typename T = void> T RandomizeWaypoints() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F38BD4))(this);
	}
	template <typename T = void> T GoToWaypoint(int32_t index) {
		return ((T (*)(splineMove*, int32_t))(Il2CppBase() + 0x3F390B0))(this, index);
	}
	template <typename T = void> T Pause(float seconds) {
		return ((T (*)(splineMove*, float))(Il2CppBase() + 0x3F3A0DC))(this, seconds);
	}
	template <typename T = uintptr_t> T Wait(float secs) {
		return ((T (*)(splineMove*, float))(Il2CppBase() + 0x3F3A208))(this, secs);
	}
	template <typename T = void> T Resume() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F3A30C))(this);
	}
	template <typename T = void> T Reverse() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F3A3F4))(this);
	}
	template <typename T = void> T SetPath(uintptr_t newPath) {
		return ((T (*)(splineMove*, uintptr_t))(Il2CppBase() + 0x3F3A558))(this, newPath);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F3822C))(this);
	}
	template <typename T = void> T ResetToStart() {
		return ((T (*)(splineMove*))(Il2CppBase() + 0x3F3A610))(this);
	}
	template <typename T = void> T ChangeSpeed(float value) {
		return ((T (*)(splineMove*, float))(Il2CppBase() + 0x3F391C4))(this, value);
	}

};

}
