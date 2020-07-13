#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentBigCrossHair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_BigCrossHair"));
	}

	template <typename T = Il2CppVector2> T& m_LockRange() {
		return *(T*)((uintptr_t)this + 0x34C);
	}
	template <typename T = Il2CppVector2> T& m_LockTimeRange() {
		return *(T*)((uintptr_t)this + 0x354);
	}
	template <typename T = Il2CppVector2> T& m_LockRateRange() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EnemyList() {
		return *(T*)((uintptr_t)this + 0x364);
	}
	template <typename T = uintptr_t> T& m_LockedEnemy() {
		return *(T*)((uintptr_t)this + 0x368);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEnemyToLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLockedEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxInaccuracy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreAdjustAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnmeyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLockParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEnemyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, uintptr_t, bool))(Il2CppBase() + 0x2EC41EC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC433C))(this);
	}
	template <typename T = uintptr_t> T get_LockedEnemy() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC43F8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, float))(Il2CppBase() + 0x2EC4400))(this, DeltaTime);
	}
	template <typename T = bool> T HasEnemyToLock() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC4CCC))(this);
	}
	template <typename T = bool> T HasLockedEnemy() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC4E0C))(this);
	}
	template <typename T = float> T MaxInaccuracy() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC4F04))(this);
	}
	template <typename T = Il2CppQuaternion> T GetPreAdjustAim() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC5190))(this);
	}
	template <typename T = uintptr_t> T GetEnmeyInfo(uintptr_t target) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, uintptr_t))(Il2CppBase() + 0x2EC5384))(this, target);
	}
	template <typename T = float> T GetLockParam(float r, Il2CppVector2 range) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, float, Il2CppVector2))(Il2CppBase() + 0x2EC500C))(this, r, range);
	}
	template <typename T = float> T GetLockTime(float r, float depth) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, float, float))(Il2CppBase() + 0x2EC5608))(this, r, depth);
	}
	template <typename T = void> T TickEnemyList(float dt) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, float))(Il2CppBase() + 0x2EC4514))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, uintptr_t, bool))(Il2CppBase() + 0x2EC56D8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentBigCrossHair*, float))(Il2CppBase() + 0x2EC56E0))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_MaxInaccuracy() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC56E8))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetPreAdjustAim() {
		return ((T (*)(WeaponFireComponentBigCrossHair*))(Il2CppBase() + 0x2EC56F0))(this);
	}

};

}
