#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponState"));
	}

	template <typename T = uintptr_t> T& m_WeaponEntity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_WeaponFireComponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WeaponStateType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mStopCurrentState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mIsTryDblclickFire() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& m_DestStateType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAutoChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldIgnoreWhenEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDblclickFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimmingChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_DestStateType() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BC93C))(this);
	}
	template <typename T = void> T set_DestStateType(uintptr_t value) {
		return ((T (*)(WeaponState*, uintptr_t))(Il2CppBase() + 0x33BC944))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponSyncModule() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BC94C))(this);
	}
	template <typename T = bool> T TryAutoChangeClip() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCB38))(this);
	}
	template <typename T = bool> T ShouldIgnoreWhenEquip() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33AD7CC))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33A3EAC))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33A4130))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponState*, float))(Il2CppBase() + 0x33A3F54))(this, DeltaTime);
	}
	template <typename T = float> T get_FireInterval() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33A3954))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCCA8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCD40))(this);
	}
	template <typename T = void> T TryDblclickFire() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCDD8))(this);
	}
	template <typename T = void> T StopFireImmediately() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCE7C))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33A3FF8))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33A4094))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCF14))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BCFAC))(this);
	}
	template <typename T = void> T StartSwimmingChangeClip() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BD044))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BD0DC))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BD174))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BD20C))(this);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponState*))(Il2CppBase() + 0x33BD2A4))(this);
	}

};

}
