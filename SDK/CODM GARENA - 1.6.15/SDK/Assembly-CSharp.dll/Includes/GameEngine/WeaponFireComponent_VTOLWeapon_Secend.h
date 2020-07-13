#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentVTOLWeaponSecend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_VTOLWeapon_Secend"));
	}

	template <typename T = int32_t> T& m_RadamStartPosRauis() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = int32_t> T& m_OneShotAmmoCount() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_OneShotCD() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = bool> T& m_IsCDRuning() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& m_StartCDRuningTime() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = int32_t> T& m_RandomSeed() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = Il2CppVector3> T& m_StartPosOffset() {
		return *(T*)((uintptr_t)this + 0x2C8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_CalcStartPosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*, uintptr_t, bool))(Il2CppBase() + 0x2402A84))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2402BB8))(this);
	}
	template <typename T = int32_t> T get_OneShotAmmoCount() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2402C74))(this);
	}
	template <typename T = float> T get_OneShotCD() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2402C7C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*, float))(Il2CppBase() + 0x2402C84))(this, DeltaTime);
	}
	template <typename T = void> T CalcStartPosOffset() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2402E60))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2403168))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2403250))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*, uintptr_t, bool))(Il2CppBase() + 0x240376C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*, float))(Il2CppBase() + 0x2403770))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetStartPos() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2403774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponFireComponentVTOLWeaponSecend*))(Il2CppBase() + 0x2403784))(this);
	}

};

}
