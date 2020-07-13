#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SWS {

class navMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SWS", "navMove"));
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
	template <typename T = bool> T& updateRotation() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& events() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waypoints() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& repeat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& agent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rand() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& rndIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& waiting() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NextWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaypointChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReachedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomizeWaypoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33380))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33444))(this);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F334F4))(this);
	}
	template <typename T = uintptr_t> T Move() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F339B0))(this);
	}
	template <typename T = uintptr_t> T NextWaypoint() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33A98))(this);
	}
	template <typename T = uintptr_t> T WaitForDestination() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33B80))(this);
	}
	template <typename T = void> T OnWaypointChange(int32_t index) {
		return ((T (*)(navMove*, int32_t))(Il2CppBase() + 0x3F33C68))(this, index);
	}
	template <typename T = uintptr_t> T ReachedEnd() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33DE8))(this);
	}
	template <typename T = void> T RandomizeWaypoints() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F33ED0))(this);
	}
	template <typename T = void> T GoToWaypoint(int32_t index) {
		return ((T (*)(navMove*, int32_t))(Il2CppBase() + 0x3F34290))(this, index);
	}
	template <typename T = void> T Pause(float seconds) {
		return ((T (*)(navMove*, float))(Il2CppBase() + 0x3F343F0))(this, seconds);
	}
	template <typename T = uintptr_t> T Wait(float secs) {
		return ((T (*)(navMove*, float))(Il2CppBase() + 0x3F34518))(this, secs);
	}
	template <typename T = void> T Resume() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F3461C))(this);
	}
	template <typename T = void> T Reverse() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F34700))(this);
	}
	template <typename T = void> T SetPath(uintptr_t newPath) {
		return ((T (*)(navMove*, uintptr_t))(Il2CppBase() + 0x3F34804))(this, newPath);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F338C8))(this);
	}
	template <typename T = void> T ResetToStart() {
		return ((T (*)(navMove*))(Il2CppBase() + 0x3F348BC))(this);
	}
	template <typename T = void> T ChangeSpeed(float value) {
		return ((T (*)(navMove*, float))(Il2CppBase() + 0x3F34A3C))(this, value);
	}

};

}
