#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeFiringStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeFiringState_Hold"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FireElapse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_HadFire() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_DelayFireElapseScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_SwitchWeaponElapseScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DelayFireElapse() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_ThrowProjectileTrackEffect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchWeaponElapseScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchWeaponTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4906C))(this);
	}
	template <typename T = void> T SetSwitchWeaponElapseScale() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49128))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49278))(this);
	}
	template <typename T = float> T GetSwitchWeaponTime() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4973C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49880))(this);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49A70))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49B40))(this);
	}
	template <typename T = void> T FireStart() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A49C14))(this);
	}
	template <typename T = void> T FireEnd() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4A110))(this);
	}
	template <typename T = void> T HideLine() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4A258))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadeFiringStateHold*, float))(Il2CppBase() + 0x3A4A35C))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4A580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3A4A588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadeFiringStateHold*, float))(Il2CppBase() + 0x3A4A590))(this, P0);
	}

};

}
