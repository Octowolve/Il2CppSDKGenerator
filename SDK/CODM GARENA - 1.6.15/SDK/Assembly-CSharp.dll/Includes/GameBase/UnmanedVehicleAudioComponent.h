#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UnmanedVehicleAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UnmanedVehicleAudioComponent"));
	}

	template <typename T = Il2CppString*> T& RTPCEngineVolume() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& AudioBrJump() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& AudioBrCrash() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& AudioBrLanding() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& AudioMPEngine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& AudioExplo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& AudioMPJump() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& AudioMpLanding() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& AudioMPCrash() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& bCacheIsInAir() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CacheMovestate() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayJumpSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExploSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEngineSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T PlayJumpSound() {
		return ((T (*)(UnmanedVehicleAudioComponent*))(Il2CppBase() + 0x27DC658))(this);
	}
	template <typename T = void> T PlayExploSound(Il2CppVector3 collisionPoint) {
		return ((T (*)(UnmanedVehicleAudioComponent*, Il2CppVector3))(Il2CppBase() + 0x27DC878))(this, collisionPoint);
	}
	template <typename T = void> T PlayLandingSound() {
		return ((T (*)(UnmanedVehicleAudioComponent*))(Il2CppBase() + 0x27DC9F0))(this);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(UnmanedVehicleAudioComponent*, float))(Il2CppBase() + 0x27DCC10))(this, deltaTime);
	}
	template <typename T = void> T PlayEngineSound(bool isEngineOn) {
		return ((T (*)(UnmanedVehicleAudioComponent*, bool))(Il2CppBase() + 0x27DD068))(this, isEngineOn);
	}
	template <typename T = void> T PlayCollisionEnter(bool bSlight, Il2CppVector3 collisionPoint, uintptr_t targetCollision) {
		return ((T (*)(UnmanedVehicleAudioComponent*, bool, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x27DD264))(this, bSlight, collisionPoint, targetCollision);
	}
	template <typename T = void> T xLuaBaseProxy_PlayExploSound(Il2CppVector3 P0) {
		return ((T (*)(UnmanedVehicleAudioComponent*, Il2CppVector3))(Il2CppBase() + 0x27DD404))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(UnmanedVehicleAudioComponent*, float))(Il2CppBase() + 0x27DD424))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEngineSound(bool P0) {
		return ((T (*)(UnmanedVehicleAudioComponent*, bool))(Il2CppBase() + 0x27DD42C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayCollisionEnter(bool P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(UnmanedVehicleAudioComponent*, bool, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x27DD434))(this, P0, P1, P2);
	}

};

}
