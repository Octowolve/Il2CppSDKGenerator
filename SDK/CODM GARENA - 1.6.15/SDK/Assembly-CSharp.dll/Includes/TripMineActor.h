#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TripMineActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TripMineActor"));
	}

	template <typename T = uintptr_t> T& m_EMPEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mEffectGo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& mEMPDuration() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& IsInEMP() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectGo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEMPEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(TripMineActor*, uintptr_t))(Il2CppBase() + 0x4969B94))(this, inData);
	}
	template <typename T = void> T SetEffectGo(uintptr_t go) {
		return ((T (*)(TripMineActor*, uintptr_t))(Il2CppBase() + 0x4969D3C))(this, go);
	}
	template <typename T = void> T BeginEMPEffect(float duration, uintptr_t range) {
		return ((T (*)(TripMineActor*, float, uintptr_t))(Il2CppBase() + 0x4969DE4))(this, duration, range);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(TripMineActor*, float))(Il2CppBase() + 0x496A074))(this, deltaTime);
	}
	template <typename T = void> T EndEMPEffect() {
		return ((T (*)(TripMineActor*))(Il2CppBase() + 0x496A178))(this);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t pawn) {
		return ((T (*)(TripMineActor*, uintptr_t))(Il2CppBase() + 0x496A328))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(TripMineActor*, uintptr_t))(Il2CppBase() + 0x496A58C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginEMPEffect(float P0, uintptr_t P1) {
		return ((T (*)(TripMineActor*, float, uintptr_t))(Il2CppBase() + 0x496A594))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TripMineActor*, float))(Il2CppBase() + 0x496A5C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndEMPEffect() {
		return ((T (*)(TripMineActor*))(Il2CppBase() + 0x496A5C8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameCamp(uintptr_t P0) {
		return ((T (*)(TripMineActor*, uintptr_t))(Il2CppBase() + 0x496A5D0))(this, P0);
	}

};

}
