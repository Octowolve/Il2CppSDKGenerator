#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSlidingDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSlidingDoor"));
	}

	template <typename T = Il2CppVector3> T& m_ClosePos() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& m_OpenPos() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppQuaternion> T& m_BaseRoattion() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoTickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_DoorType() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B40610))(this);
	}
	template <typename T = Il2CppQuaternion> T get_CloseRoattion() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B40618))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPosition(uintptr_t state) {
		return ((T (*)(BRSlidingDoor*, uintptr_t))(Il2CppBase() + 0x1B40628))(this, state);
	}
	template <typename T = void> T InitDoor(uint32_t actorId, uint32_t uid, float brokenHp, uintptr_t doorInfo, uintptr_t levelDoor) {
		return ((T (*)(BRSlidingDoor*, uint32_t, uint32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B40708))(this, actorId, uid, brokenHp, doorInfo, levelDoor);
	}
	template <typename T = void> T TryOpenDoor(uintptr_t pawn) {
		return ((T (*)(BRSlidingDoor*, uintptr_t))(Il2CppBase() + 0x1B408DC))(this, pawn);
	}
	template <typename T = void> T OnForceSetState(uintptr_t state) {
		return ((T (*)(BRSlidingDoor*, uintptr_t))(Il2CppBase() + 0x1B40994))(this, state);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B40B34))(this);
	}
	template <typename T = void> T DoTickMove(float percent, float deltaTime) {
		return ((T (*)(BRSlidingDoor*, float, float))(Il2CppBase() + 0x1B40CD8))(this, percent, deltaTime);
	}
	template <typename T = void> T EndMove() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B40E90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitDoor(uint32_t P0, uint32_t P1, float P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(BRSlidingDoor*, uint32_t, uint32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B41004))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_TryOpenDoor(uintptr_t P0) {
		return ((T (*)(BRSlidingDoor*, uintptr_t))(Il2CppBase() + 0x1B41030))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnForceSetState(uintptr_t P0) {
		return ((T (*)(BRSlidingDoor*, uintptr_t))(Il2CppBase() + 0x1B41038))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartMove() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B41040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoTickMove(float P0, float P1) {
		return ((T (*)(BRSlidingDoor*, float, float))(Il2CppBase() + 0x1B41048))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EndMove() {
		return ((T (*)(BRSlidingDoor*))(Il2CppBase() + 0x1B41050))(this);
	}

};

}
