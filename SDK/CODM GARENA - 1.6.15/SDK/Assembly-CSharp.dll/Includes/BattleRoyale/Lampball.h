#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class Lampball
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "Lampball"));
	}

	template <typename T = int32_t> T& AngularSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& RotateClockWise() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bIsRotating() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = Il2CppVector3> T& localUpAxis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LampEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggleRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTickEabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubcomponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleLampVisualEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAsyncEffectLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetToggleRotation(bool bStartRotation, int32_t musicIndex, float timeElapased) {
		return ((T (*)(Lampball*, bool, int32_t, float))(Il2CppBase() + 0x3D5477C))(this, bStartRotation, musicIndex, timeElapased);
	}
	template <typename T = void> T SetTickEabled() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D54848))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D548EC))(this);
	}
	template <typename T = void> T InitStatus(bool bStartPlay, int32_t index, float elapseTime) {
		return ((T (*)(Lampball*, bool, int32_t, float))(Il2CppBase() + 0x3D54DE4))(this, bStartPlay, index, elapseTime);
	}
	template <typename T = void> T DestroySubcomponent() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D55048))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(Lampball*, float))(Il2CppBase() + 0x3D55478))(this, deltaTime);
	}
	template <typename T = void> T ToggleLampVisualEffect(bool bStartEffect, int32_t musicIndex, float timeElapased) {
		return ((T (*)(Lampball*, bool, int32_t, float))(Il2CppBase() + 0x3D54ED4))(this, bStartEffect, musicIndex, timeElapased);
	}
	template <typename T = void> T OnAsyncEffectLoaded(uintptr_t effect) {
		return ((T (*)(Lampball*, uintptr_t))(Il2CppBase() + 0x3D55638))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_SetTickEabled() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D557E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D557E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitStatus(bool P0, int32_t P1, float P2) {
		return ((T (*)(Lampball*, bool, int32_t, float))(Il2CppBase() + 0x3D557E8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySubcomponent() {
		return ((T (*)(Lampball*))(Il2CppBase() + 0x3D55800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(Lampball*, float))(Il2CppBase() + 0x3D55804))(this, P0);
	}

};

}
