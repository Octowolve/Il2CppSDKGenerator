#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponStateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponStateMachine"));
	}

	template <typename T = uintptr_t> T& m_AllWeaponStates() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WeaponEntity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_DefualtWeaponState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAddSwimState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSwimSatate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFireBoltState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSimpleStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEmptyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreGotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryDblclickFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_AllWeaponStates() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BD620))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BD628))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BD630))(this, value);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type, uintptr_t owner) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33BD638))(0, type, owner);
	}
	template <typename T = void> T InitializeFor(uintptr_t OwnerWeapon) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BD758))(this, OwnerWeapon);
	}
	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BDCE4))(this);
	}
	template <typename T = bool> T CanAddSwimState() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BE170))(this);
	}
	template <typename T = void> T AddSwimSatate() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BE298))(this);
	}
	template <typename T = void> T AddFireBoltState() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BE968))(this);
	}
	template <typename T = void> T AddSimpleStates() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BEB0C))(this);
	}
	template <typename T = void> T AddEmptyState() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BEC1C))(this);
	}
	template <typename T = void> T PreGotoState(uintptr_t stateType) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BED30))(this, stateType);
	}
	template <typename T = bool> T HasState(uintptr_t stateType) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BEDD0))(this, stateType);
	}
	template <typename T = bool> T GotoState(uintptr_t stateType) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BD85C))(this, stateType);
	}
	template <typename T = bool> T IsInState(uintptr_t stateType) {
		return ((T (*)(WeaponStateMachine*, uintptr_t))(Il2CppBase() + 0x33BEEB0))(this, stateType);
	}
	template <typename T = void> T StopCurState() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BEF78))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF030))(this);
	}
	template <typename T = void> T TryDblclickFire() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF0E8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF1A0))(this);
	}
	template <typename T = void> T StopFireImmediately() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF258))(this);
	}
	template <typename T = void> T BeginSecondaryAttack() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF310))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF3C8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponStateMachine*, float))(Il2CppBase() + 0x33BF480))(this, DeltaTime);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF544))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF5FC))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponStateMachine*))(Il2CppBase() + 0x33BF6B4))(this);
	}

};

}
