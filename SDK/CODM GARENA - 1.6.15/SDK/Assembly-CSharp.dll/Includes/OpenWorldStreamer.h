#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenWorldStreamer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWorldStreamer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAirPlaneStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreStartAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_StreamerType() {
		return ((T (*)(OpenWorldStreamer*))(Il2CppBase() + 0x3EEF918))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(OpenWorldStreamer*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3EEF920))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t oldState, uintptr_t newState, Il2CppVector3 cameraPos) {
		return ((T (*)(OpenWorldStreamer*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3EEFA0C))(this, oldState, newState, cameraPos);
	}
	template <typename T = void> T OnAirPlaneStateChanged(bool isOnPlane) {
		return ((T (*)(OpenWorldStreamer*, bool))(Il2CppBase() + 0x3EEFAD8))(this, isOnPlane);
	}
	template <typename T = void> T OnPreStartAircraft() {
		return ((T (*)(OpenWorldStreamer*))(Il2CppBase() + 0x3EEFB78))(this);
	}

};

}
