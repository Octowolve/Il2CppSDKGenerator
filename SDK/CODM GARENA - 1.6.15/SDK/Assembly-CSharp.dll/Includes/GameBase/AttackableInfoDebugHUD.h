#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AttackableInfoDebugHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AttackableInfoDebugHUD"));
	}

	template <typename T = uintptr_t> T& m_DebugItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_MainShowDebugItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CurrentAimingTarget() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> static T& IsAimingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastUpdateAnimingTargetTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AnimTargetImpactList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_LocalPawn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CurWeapon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_CurShowTarget() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_LastHealth() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_CurHealth() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_ChangeHp() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& m_CurContent() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& MaxQueueNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& m_DamageQueue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDebugItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAimingTargetDebugItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimingTargetDebugItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDamageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHealthInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurShowTargetDamageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T CreateDebugItem() {
		return ((T (*)(AttackableInfoDebugHUD*))(Il2CppBase() + 0x3B91110))(this);
	}
	template <typename T = void> T HideAimingTargetDebugItem(bool isHide) {
		return ((T (*)(AttackableInfoDebugHUD*, bool))(Il2CppBase() + 0x3B91368))(this, isHide);
	}
	template <typename T = void> T UpdateAimingTargetDebugItem() {
		return ((T (*)(AttackableInfoDebugHUD*))(Il2CppBase() + 0x3B914B8))(this);
	}
	template <typename T = void> T UpdateDamageInfo(uintptr_t msg) {
		return ((T (*)(AttackableInfoDebugHUD*, uintptr_t))(Il2CppBase() + 0x3B926C8))(this, msg);
	}
	template <typename T = void> T UpdateAimingTarget() {
		return ((T (*)(AttackableInfoDebugHUD*))(Il2CppBase() + 0x3B91690))(this);
	}
	template <typename T = void> T GetHealthInfo(uintptr_t target) {
		return ((T (*)(AttackableInfoDebugHUD*, uintptr_t))(Il2CppBase() + 0x3B91FD4))(this, target);
	}
	template <typename T = void> T GetCurShowTargetDamageInfo(uintptr_t msg) {
		return ((T (*)(AttackableInfoDebugHUD*, uintptr_t))(Il2CppBase() + 0x3B927B0))(this, msg);
	}
	template <typename T = void> T SetDebugInfo() {
		return ((T (*)(AttackableInfoDebugHUD*))(Il2CppBase() + 0x3B92F1C))(this);
	}

};

}
