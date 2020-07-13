#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwimEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwimEquippingState"));
	}

	template <typename T = bool> T& m_IsWeaponPendingAim() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& m_IsFirstPersonView() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& m_CheckAttachToHand() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = float> T& m_TPAttachWeaponTimeRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_CheckDelayShowWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsGotoChangeClip() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& m_BegineStateFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimmingChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGotoSwimmingChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSwimEquipDestState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwimEquipAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponAttachToHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_ShouldPlayTPEquipAnim() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33BF76C))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33BF774))(this);
	}
	template <typename T = void> T StartSwimmingChangeClip() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C00B0))(this);
	}
	template <typename T = void> T CheckGotoSwimmingChangeClip() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C015C))(this);
	}
	template <typename T = void> T CalcSwimEquipDestState() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0288))(this);
	}
	template <typename T = void> T PlaySwimEquipAnimation() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33BFA90))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimEquippingState*, float))(Il2CppBase() + 0x33C03E8))(this, DeltaTime);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C057C))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0708))(this);
	}
	template <typename T = void> T SwitchWeaponAttachToHand() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C07CC))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C09EC))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0AD0))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0B74))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0C18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimmingChangeClip() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimEquippingState*, float))(Il2CppBase() + 0x33C0CD8))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0CFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponSwimEquippingState*))(Il2CppBase() + 0x33C0D00))(this);
	}

};

}
