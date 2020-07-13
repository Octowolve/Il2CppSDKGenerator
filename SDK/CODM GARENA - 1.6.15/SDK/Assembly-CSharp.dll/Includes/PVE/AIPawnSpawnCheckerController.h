#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawnCheckerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawnCheckerController"));
	}

	template <typename T = int32_t> T& MaxAliveAIPawnCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DelayedCheckers() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_PawnQueue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsFirstEnter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_NextToActivate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_TimeNow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnAllQueued() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnqueueSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAIPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateDelayedList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateAllCheckers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcEnemyToKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AF290))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AF3C0))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AF53C))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(AIPawnSpawnCheckerController*, float))(Il2CppBase() + 0x49AF544))(this, fDeltaTime);
	}
	template <typename T = void> T SpawnAllQueued() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AF690))(this);
	}
	template <typename T = void> T EnqueueSpawn(uintptr_t checker, int32_t index, uintptr_t spawnPoint) {
		return ((T (*)(AIPawnSpawnCheckerController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x49AE5D0))(this, checker, index, spawnPoint);
	}
	template <typename T = void> T NotifyAIPawnDead() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AEE38))(this);
	}
	template <typename T = void> T ActivateDelayedList() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AF798))(this);
	}
	template <typename T = void> T DeactivateAllCheckers() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AFBE0))(this);
	}
	template <typename T = uintptr_t> T DelayedActivate() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AFB00))(this);
	}
	template <typename T = void> T DoAction(uintptr_t param) {
		return ((T (*)(AIPawnSpawnCheckerController*, uintptr_t))(Il2CppBase() + 0x49AF978))(this, param);
	}
	template <typename T = int32_t> T CalcEnemyToKill() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AFD94))(this);
	}
	template <typename T = int32_t> static T Startm__0(uintptr_t p1, uintptr_t p2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x49AFF88))(0, p1, p2);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AFFBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AIPawnSpawnCheckerController*))(Il2CppBase() + 0x49AFFC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AIPawnSpawnCheckerController*, float))(Il2CppBase() + 0x49AFFCC))(this, P0);
	}

};

}
