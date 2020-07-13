#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EnemyDistanceHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EnemyDistanceHUD"));
	}

	template <typename T = uintptr_t> T& pawnDistance() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GameUIScene() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DistList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_PVP() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& showEnemyDis() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBrandTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDisShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEnemyDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t uiScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31CB620))(0, uiScene);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CB7F0))(this);
	}
	template <typename T = void> T Add(uintptr_t pawn) {
		return ((T (*)(EnemyDistanceHUD*, uintptr_t))(Il2CppBase() + 0x31CB8FC))(this, pawn);
	}
	template <typename T = uintptr_t> T Spawn(uintptr_t pawn) {
		return ((T (*)(EnemyDistanceHUD*, uintptr_t))(Il2CppBase() + 0x31CBB30))(this, pawn);
	}
	template <typename T = void> T Remove(uintptr_t pawn) {
		return ((T (*)(EnemyDistanceHUD*, uintptr_t))(Il2CppBase() + 0x31CBE68))(this, pawn);
	}
	template <typename T = void> T AddBrandTarget() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CC028))(this);
	}
	template <typename T = void> T ToggleDisShow() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CC57C))(this);
	}
	template <typename T = void> T AddEnemyDistance() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CC650))(this);
	}
	template <typename T = void> T UpdateAll(float dt) {
		return ((T (*)(EnemyDistanceHUD*, float))(Il2CppBase() + 0x31CC77C))(this, dt);
	}
	template <typename T = void> T GetAllEnemy() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CCB78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(EnemyDistanceHUD*))(Il2CppBase() + 0x31CCC10))(this);
	}

};

}
