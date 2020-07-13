#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenWorldManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWorldManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& allStreamers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lastPhysicsState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& lastIsOnPlane() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& streamerFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& defaultSceneStreamer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sceneStreamer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& distanceToGround() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& defaultNearClipPlane() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& highAltitudeNearClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& highAltitudeStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& highAltitudeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreamerEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStreamerEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleStreamerEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterStreamer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterStreamer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreamer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetStreamer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasGrassAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreStartAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraNearClipPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> static T GetStreamerEnabled(uintptr_t subSystem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EEB30C))(0, subSystem);
	}
	template <typename T = void> static T SetStreamerEnabled(uintptr_t streamer, bool enabled) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3EEB104))(0, streamer, enabled);
	}
	template <typename T = void> static T ToggleStreamerEnable(uintptr_t streamer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3EEB434))(0, streamer);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEB534))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEB9A8))(this, levelObject);
	}
	template <typename T = void> T RegisterStreamer(uintptr_t streamer) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEB6BC))(this, streamer);
	}
	template <typename T = void> T UnRegisterStreamer(uintptr_t streamer) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEBB30))(this, streamer);
	}
	template <typename T = uintptr_t> T GetStreamer() {
		return ((T (*)(OpenWorldManager*))(Il2CppBase() + 0x335E354))(this);
	}
	template <typename T = uintptr_t> T GetStreamer_1(uintptr_t streamerType) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEBCD0))(this, streamerType);
	}
	template <typename T = bool> T HasGrassAt(Il2CppVector3 pos) {
		return ((T (*)(OpenWorldManager*, Il2CppVector3))(Il2CppBase() + 0x3EEBF28))(this, pos);
	}
	template <typename T = void> T OnPreStartAircraft() {
		return ((T (*)(OpenWorldManager*))(Il2CppBase() + 0x3EEC0A8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(OpenWorldManager*, float))(Il2CppBase() + 0x3EEC250))(this, deltaTime);
	}
	template <typename T = void> T UpdateCameraNearClipPlane() {
		return ((T (*)(OpenWorldManager*))(Il2CppBase() + 0x3EECF3C))(this);
	}
	template <typename T = bool> static T GetDistanceToGround(Il2CppVector3 cameraPos, uintptr_t dist) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3EECC7C))(0, cameraPos, dist);
	}
	template <typename T = Il2CppVector3> T GetViewPoint(uintptr_t playerPosition) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EEC910))(this, playerPosition);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EED4E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(OpenWorldManager*, uintptr_t))(Il2CppBase() + 0x3EED4F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(OpenWorldManager*, float))(Il2CppBase() + 0x3EED4F8))(this, P0);
	}

};

}
