#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CODBigCrossHair3D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "COD_BigCrossHair_3D"));
	}

	template <typename T = Il2CppDictionary<uint32_t, Il2CppArray<uintptr_t>*>*> T& m_EnemyAimEffect2PlayerIDMap() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TempPlayerIDList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEnemyAimEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEnemyAimEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemoveEnemyAimEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyAimEffectTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CODBigCrossHair3D*))(Il2CppBase() + 0x3C771CC))(this);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CODBigCrossHair3D*, bool))(Il2CppBase() + 0x3C771D4))(this, isShow);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CODBigCrossHair3D*, float))(Il2CppBase() + 0x3C77554))(this, dt);
	}
	template <typename T = void> T TickEnemyAimEffect() {
		return ((T (*)(CODBigCrossHair3D*))(Il2CppBase() + 0x3C77600))(this);
	}
	template <typename T = void> T AddEnemyAimEffect(uint32_t playerID) {
		return ((T (*)(CODBigCrossHair3D*, uint32_t))(Il2CppBase() + 0x3C77A2C))(this, playerID);
	}
	template <typename T = void> T UpdateRemoveEnemyAimEffect(Il2CppList<uintptr_t>* EnemyList) {
		return ((T (*)(CODBigCrossHair3D*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3C77F00))(this, EnemyList);
	}
	template <typename T = void> T UpdateEnemyAimEffectTransform() {
		return ((T (*)(CODBigCrossHair3D*))(Il2CppBase() + 0x3C7860C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCrosshairDisplay(bool P0) {
		return ((T (*)(CODBigCrossHair3D*, bool))(Il2CppBase() + 0x3C78B68))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CODBigCrossHair3D*, float))(Il2CppBase() + 0x3C78B70))(this, P0);
	}

};

}
