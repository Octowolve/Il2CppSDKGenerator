#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombPlacingPointVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombPlacingPointVolume"));
	}

	template <typename T = uintptr_t> T& m_PointType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_AIScpoe() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_DefendRadius() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PawnList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDisSqr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BombPlacingPointVolume*))(Il2CppBase() + 0x343FA24))(this);
	}
	template <typename T = float> T CountDisSqr(Il2CppVector3 pos) {
		return ((T (*)(BombPlacingPointVolume*, Il2CppVector3))(Il2CppBase() + 0x343FC04))(this, pos);
	}
	template <typename T = bool> T IsPawnInTrigger(uintptr_t pawn) {
		return ((T (*)(BombPlacingPointVolume*, uintptr_t))(Il2CppBase() + 0x343FDE4))(this, pawn);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BombPlacingPointVolume*, uintptr_t))(Il2CppBase() + 0x343FF64))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BombPlacingPointVolume*, uintptr_t))(Il2CppBase() + 0x3440300))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BombPlacingPointVolume*))(Il2CppBase() + 0x34406F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(BombPlacingPointVolume*, uintptr_t))(Il2CppBase() + 0x3440700))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(BombPlacingPointVolume*, uintptr_t))(Il2CppBase() + 0x3440708))(this, P0);
	}

};

}
