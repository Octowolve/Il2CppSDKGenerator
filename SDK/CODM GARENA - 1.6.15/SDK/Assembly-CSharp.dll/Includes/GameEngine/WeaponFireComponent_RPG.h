#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentRPG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_RPG"));
	}

	template <typename T = uintptr_t> T& m_LaunchMode() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = float> T& m_LockTime() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_MaxLockAngle() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = float> T& m_MaxTrackAngle() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& m_ExplodeDistance() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = float> T& m_LockDis() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = float> T& m_Bot_FireOffsetX() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_Bot_FireOffsetY() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_Bot_FireOffsetZ() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& m_TryingLockTarget() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_TryTime() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = bool> T& m_IsLocked() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = bool> T& m_IsTryLock() {
		return *(T*)((uintptr_t)this + 0x2DD);
	}
	template <typename T = bool> T& m_OpenSoundLock() {
		return *(T*)((uintptr_t)this + 0x2DE);
	}
	template <typename T = uintptr_t> T& mSoundConfig() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLockSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverLockDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLockTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentRPG*, uintptr_t, bool))(Il2CppBase() + 0x23CF074))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6A70))(this);
	}
	template <typename T = uintptr_t> T get_LaunchMode() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6B2C))(this);
	}
	template <typename T = uintptr_t> T get_LockTarget() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6B34))(this);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6B3C))(this);
	}
	template <typename T = bool> T get_IsTryLock() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6B44))(this);
	}
	template <typename T = void> T BeginLockTarget() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6B4C))(this);
	}
	template <typename T = void> T PlayLockSound(bool locking) {
		return ((T (*)(WeaponFireComponentRPG*, bool))(Il2CppBase() + 0x23F6C10))(this, locking);
	}
	template <typename T = void> T EndLockTarget() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F6E40))(this);
	}
	template <typename T = bool> T EnableFire() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F7080))(this);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentRPG*, Il2CppString*))(Il2CppBase() + 0x23F713C))(this, path);
	}
	template <typename T = uintptr_t> T RealStartFire() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F7294))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentRPG*, float))(Il2CppBase() + 0x23F7778))(this, DeltaTime);
	}
	template <typename T = bool> T IsOverLockDis(uintptr_t target) {
		return ((T (*)(WeaponFireComponentRPG*, uintptr_t))(Il2CppBase() + 0x23CFEE4))(this, target);
	}
	template <typename T = uintptr_t> T TryLockTarget() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23D0488))(this);
	}
	template <typename T = float> T CalcFireAnimationSpeed(float clipLength) {
		return ((T (*)(WeaponFireComponentRPG*, float))(Il2CppBase() + 0x23F7F64))(this, clipLength);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentRPG*, uintptr_t, bool))(Il2CppBase() + 0x23F811C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentRPG*, Il2CppString*))(Il2CppBase() + 0x23F8120))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_RealStartFire() {
		return ((T (*)(WeaponFireComponentRPG*))(Il2CppBase() + 0x23F8128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentRPG*, float))(Il2CppBase() + 0x23F812C))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_CalcFireAnimationSpeed(float P0) {
		return ((T (*)(WeaponFireComponentRPG*, float))(Il2CppBase() + 0x23F8130))(this, P0);
	}

};

}
