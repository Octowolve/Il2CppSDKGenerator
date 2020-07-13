#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MonkeyBombProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MonkeyBombProjectileSimulator"));
	}

	template <typename T = bool> T& m_StartMusic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_StartCountDown() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = float> T& m_LeftExplodeTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_LeftExitTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_InMusicState() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayBounceSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHitGroundStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_StartMusic() {
		return ((T (*)(MonkeyBombProjectileSimulator*))(Il2CppBase() + 0x270F28C))(this);
	}
	template <typename T = void> T set_StartMusic(bool value) {
		return ((T (*)(MonkeyBombProjectileSimulator*, bool))(Il2CppBase() + 0x270F294))(this, value);
	}
	template <typename T = bool> T get_StartCountDown() {
		return ((T (*)(MonkeyBombProjectileSimulator*))(Il2CppBase() + 0x270F29C))(this);
	}
	template <typename T = void> T set_StartCountDown(bool value) {
		return ((T (*)(MonkeyBombProjectileSimulator*, bool))(Il2CppBase() + 0x270F2A4))(this, value);
	}
	template <typename T = void> T Init(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t handler) {
		return ((T (*)(MonkeyBombProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x270F2AC))(this, initalPosition, initalVelocity, data, handler);
	}
	template <typename T = bool> T PreOneTick(uintptr_t deltaTime) {
		return ((T (*)(MonkeyBombProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x270F3C4))(this, deltaTime);
	}
	template <typename T = void> T _PlayBounceSound(uintptr_t pPhyMaterial) {
		return ((T (*)(MonkeyBombProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x270F554))(this, pPhyMaterial);
	}
	template <typename T = bool> T IsHitGroundStop() {
		return ((T (*)(MonkeyBombProjectileSimulator*))(Il2CppBase() + 0x270F684))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(MonkeyBombProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x270F724))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_PreOneTick(uintptr_t P0) {
		return ((T (*)(MonkeyBombProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x270F768))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy__PlayBounceSound(uintptr_t P0) {
		return ((T (*)(MonkeyBombProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x270F770))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHitGroundStop() {
		return ((T (*)(MonkeyBombProjectileSimulator*))(Il2CppBase() + 0x270F778))(this);
	}

};

}
