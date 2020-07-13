#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNormalDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNormalDoor"));
	}

	template <typename T = Il2CppQuaternion> T& m_CloseRoattion() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppQuaternion> T& m_ForwardOpenRotation() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppQuaternion> T& m_BackwardOpenRotation() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppQuaternion> T& m_StartRotation() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppQuaternion> T& m_TargetRotation() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppVector3> T& m_TargetRotationDir() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetRotation() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_TickAntiStuck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_DoorType() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1ABF894))(this);
	}
	template <typename T = Il2CppQuaternion> T get_CloseRoattion() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1ABF89C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetTargetRotation(uintptr_t state) {
		return ((T (*)(BRNormalDoor*, uintptr_t))(Il2CppBase() + 0x1ABF8AC))(this, state);
	}
	template <typename T = void> T InitDoor(uint32_t actorId, uint32_t uid, float brokenHp, uintptr_t doorInfo, uintptr_t levelDoor) {
		return ((T (*)(BRNormalDoor*, uint32_t, uint32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ABF98C))(this, actorId, uid, brokenHp, doorInfo, levelDoor);
	}
	template <typename T = void> T TryOpenDoor(uintptr_t pawn) {
		return ((T (*)(BRNormalDoor*, uintptr_t))(Il2CppBase() + 0x1ABFB14))(this, pawn);
	}
	template <typename T = void> T OnForceSetState(uintptr_t state) {
		return ((T (*)(BRNormalDoor*, uintptr_t))(Il2CppBase() + 0x1ABFD60))(this, state);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1ABFF3C))(this);
	}
	template <typename T = void> T DoTickMove(float percent, float deltaTime) {
		return ((T (*)(BRNormalDoor*, float, float))(Il2CppBase() + 0x1AC0124))(this, percent, deltaTime);
	}
	template <typename T = void> T TickAntiStuck(float deltaTime) {
		return ((T (*)(BRNormalDoor*, float))(Il2CppBase() + 0x1AC02E0))(this, deltaTime);
	}
	template <typename T = void> T EndMove() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1AC0848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitDoor(uint32_t P0, uint32_t P1, float P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(BRNormalDoor*, uint32_t, uint32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AC0998))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T xLuaBaseProxy_TryOpenDoor(uintptr_t P0) {
		return ((T (*)(BRNormalDoor*, uintptr_t))(Il2CppBase() + 0x1AC09C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnForceSetState(uintptr_t P0) {
		return ((T (*)(BRNormalDoor*, uintptr_t))(Il2CppBase() + 0x1AC09CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartMove() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1AC09D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoTickMove(float P0, float P1) {
		return ((T (*)(BRNormalDoor*, float, float))(Il2CppBase() + 0x1AC09DC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_EndMove() {
		return ((T (*)(BRNormalDoor*))(Il2CppBase() + 0x1AC09E4))(this);
	}

};

}
