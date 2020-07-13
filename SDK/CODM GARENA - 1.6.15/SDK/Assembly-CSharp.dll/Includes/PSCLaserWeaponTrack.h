#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PSCLaserWeaponTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PSCLaserWeaponTrack"));
	}

	template <typename T = uintptr_t> T& m_RelativeVolume() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_RelativeAttackVolume() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_EndPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_Length() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_MaxLength() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& laserAttackFrom() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& laserAttackTo() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& isLineRendererLaser() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& laserDamageAssetID() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& canDamage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& canHitGround() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& lineCP() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& drawLineMesh() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OnwerPawn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& HitEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bPlay() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& bMeshDrawLine() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = float> T& m_AttackWidthMultiples() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrackParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawMeshLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateShowHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitGroundEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T set_MaxLength(float value) {
		return ((T (*)(PSCLaserWeaponTrack*, float))(Il2CppBase() + 0x4CDE684))(this, value);
	}
	template <typename T = void> T set_AttackWidthMultiples(float value) {
		return ((T (*)(PSCLaserWeaponTrack*, float))(Il2CppBase() + 0x4CDE68C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CDE694))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CDE95C))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CDEA0C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CDF310))(this);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CDF7D8))(this);
	}
	template <typename T = void> T SetTrackParam(uintptr_t Owner, Il2CppVector3 startPos, Il2CppVector3 forward, float length, float width, float damageValue) {
		return ((T (*)(PSCLaserWeaponTrack*, uintptr_t, Il2CppVector3, Il2CppVector3, float, float, float))(Il2CppBase() + 0x4CDF910))(this, Owner, startPos, forward, length, width, damageValue);
	}
	template <typename T = void> T DrawMeshLine(Il2CppVector3 startPos, Il2CppVector3 endPos, float width) {
		return ((T (*)(PSCLaserWeaponTrack*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4CDEB7C))(this, startPos, endPos, width);
	}
	template <typename T = void> T UpdateTrack(Il2CppVector3 startPos, Il2CppVector3 forward, float deltaPos) {
		return ((T (*)(PSCLaserWeaponTrack*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4CE0200))(this, startPos, forward, deltaPos);
	}
	template <typename T = void> T LateShowHitEffect(Il2CppVector3 forward) {
		return ((T (*)(PSCLaserWeaponTrack*, Il2CppVector3))(Il2CppBase() + 0x4CE05F0))(this, forward);
	}
	template <typename T = void> T PlayHitGroundEffect(Il2CppVector3 forward) {
		return ((T (*)(PSCLaserWeaponTrack*, Il2CppVector3))(Il2CppBase() + 0x4CE0728))(this, forward);
	}
	template <typename T = void> T Awakem__0(uintptr_t e) {
		return ((T (*)(PSCLaserWeaponTrack*, uintptr_t))(Il2CppBase() + 0x4CE0B0C))(this, e);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CE0CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CE0CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyEffect() {
		return ((T (*)(PSCLaserWeaponTrack*))(Il2CppBase() + 0x4CE0CD4))(this);
	}

};

}
