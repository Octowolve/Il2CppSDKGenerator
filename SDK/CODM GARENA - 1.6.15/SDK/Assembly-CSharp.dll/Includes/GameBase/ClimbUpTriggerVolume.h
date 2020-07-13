#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClimbUpTriggerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClimbUpTriggerVolume"));
	}

	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& bClimbOver() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AutoClimbUpTrrigerTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> static T& ClimbUpMaxAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ClimbOverMaxAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& checkInterval() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& bBeginCheck() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bBeginCheckAutoClimb() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = Il2CppVector3> T& CurrHitNormal() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& AutoClimbTimeSum() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& childBox() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& pawn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& StandForClimbMaxHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustTriggerSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPhysState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_EnableAutoClimb() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C72C14))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C72CC4))(this);
	}
	template <typename T = void> T AdjustTriggerSize() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C731D4))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(ClimbUpTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3C7341C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(ClimbUpTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3C73608))(this, other);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C73834))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C739F8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ClimbUpTriggerVolume*, float))(Il2CppBase() + 0x3C73A00))(this, dt);
	}
	template <typename T = bool> T CheckPhysState(uintptr_t pawn) {
		return ((T (*)(ClimbUpTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3C73E68))(this, pawn);
	}
	template <typename T = void> T CheckClimbable() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C73F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C74D3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(ClimbUpTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3C74D44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(ClimbUpTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3C74D4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ClimbUpTriggerVolume*))(Il2CppBase() + 0x3C74D54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ClimbUpTriggerVolume*, float))(Il2CppBase() + 0x3C74D5C))(this, P0);
	}

};

}
