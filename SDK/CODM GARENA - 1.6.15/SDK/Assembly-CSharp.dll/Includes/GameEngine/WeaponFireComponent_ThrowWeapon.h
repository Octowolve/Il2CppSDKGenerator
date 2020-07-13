#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentThrowWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ThrowWeapon"));
	}

	template <typename T = bool> T& m_ShowCDUI() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Stand_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Crouch_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Prone_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Stand_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Crouch_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Prone_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppVector3> static T& m_FireDirectOffset_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppVector3> static T& m_FireDirectOffset_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Vehicle_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppVector3> static T& m_FireOffset_Vehicle_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppVector3> static T& m_FireDirectOffset_Vehicle_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppVector3> static T& m_FireDirectOffset_Vehicle_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = Il2CppVector3> static T& ModityOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> T& m_HoldFireProjectile() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = bool> T& m_ShowThrowLine() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& m_LineRenderer() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = uintptr_t> T& m_LineSimulator() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_LinePoints() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireDirectOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartHoldFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerThrowHoldFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFireAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateThrowLineSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleThrowLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateThrowLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, uintptr_t, bool))(Il2CppBase() + 0x23CD498))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FE878))(this);
	}
	template <typename T = bool> T get_ShowCDUI() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FE934))(this);
	}
	template <typename T = Il2CppVector3> T GetFireStartPos() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23D7D34))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FE93C))(this);
	}
	template <typename T = Il2CppVector3> T GetFireOffset() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23D7EA8))(this);
	}
	template <typename T = Il2CppVector3> T GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23D8464))(this);
	}
	template <typename T = float> T GetRealSpeed() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FD0DC))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FEA94))(this);
	}
	template <typename T = Il2CppVector3> T CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FECE8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, float))(Il2CppBase() + 0x23FF230))(this, DeltaTime);
	}
	template <typename T = uintptr_t> T ServerStartHoldFire(uintptr_t* outExplosionTime) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, uintptr_t*))(Il2CppBase() + 0x23D8E0C))(this, outExplosionTime);
	}
	template <typename T = void> T ServerThrowHoldFireEnd(Il2CppVector3 setVelocity) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, Il2CppVector3))(Il2CppBase() + 0x23D88F8))(this, setVelocity);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FFCCC))(this);
	}
	template <typename T = float> T CalcFireAnimationSpeed(float clipLength) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, float))(Il2CppBase() + 0x24000E0))(this, clipLength);
	}
	template <typename T = uintptr_t> T CreateThrowLineSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24002C8))(this, data, inInitLoc, inInitVel);
	}
	template <typename T = void> T ToggleThrowLine(bool open) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, bool))(Il2CppBase() + 0x23FFDAC))(this, open);
	}
	template <typename T = void> T UpdateThrowLine() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x23FF320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, uintptr_t, bool))(Il2CppBase() + 0x2400838))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitData() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x240083C))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x2400844))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x2400854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, float))(Il2CppBase() + 0x2400864))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentThrowWeapon*))(Il2CppBase() + 0x2400868))(this);
	}
	template <typename T = float> T xLuaBaseProxy_CalcFireAnimationSpeed(float P0) {
		return ((T (*)(WeaponFireComponentThrowWeapon*, float))(Il2CppBase() + 0x240086C))(this, P0);
	}

};

}
