#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponProjectileBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponProjectile_Bullet"));
	}

	template <typename T = float> T& FlightEffectLocalLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxFlightEffectScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsTempestTrace() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsFirstTick() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> static T& OpenDamageLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_projFlightAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ProjFlightEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_FlySmokeEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_TempestEffect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_WeaponInstant() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Simulator() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ImpactComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_SpawnOwnerID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_TotalDeltaTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_ExistTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_MaxExistTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& CurrentDistance() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& IsBulletEnd() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& IsSmokeEnd() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ImpactList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_ImpactIndex() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CheckMode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_FixUpdateTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsShowFlightEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_FlightEffectScale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_FlightEffectStartScale() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> static T& TPModeUseTPLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProjFlightAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCheckMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFlySmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFlightEffectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = int32_t> T GetProjFlightAssetID() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C52ADC))(this);
	}
	template <typename T = uintptr_t> T CreateSimulator(Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t data, uintptr_t weaponInstant) {
		return ((T (*)(WeaponProjectileBullet*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C52ED8))(this, inInitLoc, inInitVel, data, weaponInstant);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uint32_t SpawnOwnerID, uintptr_t data, uintptr_t weaponInstant, uintptr_t impactComponent, int32_t weaponId) {
		return ((T (*)(WeaponProjectileBullet*, Il2CppVector3, Il2CppVector3, uint32_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4C5312C))(this, InitLocation, InitVelocity, SpawnOwnerID, data, weaponInstant, impactComponent, weaponId);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C533F8))(this);
	}
	template <typename T = void> T SetCheckMode() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C535A4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C537CC))(this);
	}
	template <typename T = void> T UpdatePos() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C538BC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileBullet*, float))(Il2CppBase() + 0x4C53CCC))(this, DeltaTime);
	}
	template <typename T = void> T LoadFlySmokeEffect(Il2CppVector3 startPos, int32_t assetID) {
		return ((T (*)(WeaponProjectileBullet*, Il2CppVector3, int32_t))(Il2CppBase() + 0x4C53E58))(this, startPos, assetID);
	}
	template <typename T = bool> T SimulateOneTick(float inUpateTime) {
		return ((T (*)(WeaponProjectileBullet*, float))(Il2CppBase() + 0x4C54150))(this, inUpateTime);
	}
	template <typename T = void> T LoadFlightEffect() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C54C68))(this);
	}
	template <typename T = void> T UpdateFlightEffectScale() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C553D4))(this);
	}
	template <typename T = void> T DestroyFlightEffect() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C55654))(this);
	}
	template <typename T = void> T DestroySmokeEffect() {
		return ((T (*)(WeaponProjectileBullet*))(Il2CppBase() + 0x4C557FC))(this);
	}

};

}
