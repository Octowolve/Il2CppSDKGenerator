#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LockTargetEnemyHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LockTargetEnemyHud"));
	}

	template <typename T = int32_t> static T& ARROW_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& KILL_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ICON_MAX_POS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ICON_MIN_POS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& KILL_ICON_MAX_POS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& KILL_ICON_MIN_POS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DETAULT_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MIN_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& TargetUITrans() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& KillInfoTrans() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CenterIcon1() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& CenterIcon2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ArrowIconArray() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillArrowIconArray() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ArrowDirectArray() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_TargetPawn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_PawnTransform() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_KillTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_CurrentPos() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowKillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKillIconScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformLoaclPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIconPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentKillScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentKillPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LockTargetEnemyHud*))(Il2CppBase() + 0x19AA650))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LockTargetEnemyHud*))(Il2CppBase() + 0x19AA6F8))(this);
	}
	template <typename T = void> T SetEnable(bool enable) {
		return ((T (*)(LockTargetEnemyHud*, bool))(Il2CppBase() + 0x19AA7A0))(this, enable);
	}
	template <typename T = void> T LockEnemy(bool isLock, uintptr_t targetPawn) {
		return ((T (*)(LockTargetEnemyHud*, bool, uintptr_t))(Il2CppBase() + 0x19AA8BC))(this, isLock, targetPawn);
	}
	template <typename T = void> T ShowKillInfo(bool show) {
		return ((T (*)(LockTargetEnemyHud*, bool))(Il2CppBase() + 0x19AAAB8))(this, show);
	}
	template <typename T = void> T UpdateKillIcon(float scale, float pos) {
		return ((T (*)(LockTargetEnemyHud*, float, float))(Il2CppBase() + 0x19AAC30))(this, scale, pos);
	}
	template <typename T = void> T UpdateKillIconScale(float scale) {
		return ((T (*)(LockTargetEnemyHud*, float))(Il2CppBase() + 0x19AAD08))(this, scale);
	}
	template <typename T = void> T SetTransformLoaclPosition(Il2CppArray<uintptr_t>* transArray, float pos) {
		return ((T (*)(LockTargetEnemyHud*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x19AAEF0))(this, transArray, pos);
	}
	template <typename T = void> T UpdateIconPos(float pos) {
		return ((T (*)(LockTargetEnemyHud*, float))(Il2CppBase() + 0x19AB084))(this, pos);
	}
	template <typename T = float> T GetCurrentKillScale(float restTime) {
		return ((T (*)(LockTargetEnemyHud*, float))(Il2CppBase() + 0x19AB1DC))(this, restTime);
	}
	template <typename T = float> T GetCurrentKillPos(float restTime) {
		return ((T (*)(LockTargetEnemyHud*, float))(Il2CppBase() + 0x19AB298))(this, restTime);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(LockTargetEnemyHud*))(Il2CppBase() + 0x19AB354))(this);
	}
	template <typename T = void> T UpdatePos(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(LockTargetEnemyHud*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x19AB8D0))(this, worldPos, clampRect);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LockTargetEnemyHud*))(Il2CppBase() + 0x19ABF94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LockTargetEnemyHud*))(Il2CppBase() + 0x19ABF9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePos(Il2CppVector3 P0, Il2CppRect P1) {
		return ((T (*)(LockTargetEnemyHud*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x19ABFA4))(this, P0, P1);
	}

};

}
