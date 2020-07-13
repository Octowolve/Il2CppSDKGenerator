#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwitchRoleComponentBRPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwitchRoleComponent_BRPawn"));
	}

	template <typename T = uintptr_t> T& m_CurBRSwitchStep() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_BR3PAvataBagWeaponSocketCache() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint16_t> T& CheckWeaponPrintLogFrameCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_SkydivingFlag() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBRStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache3PWeaponLBSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PAvatarGOAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBR3PAvataBagWeaponSocketCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatarForGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsSwitching() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AA758))(this);
	}
	template <typename T = void> T set_CurBRSwitchStep(uintptr_t value) {
		return ((T (*)(SwitchRoleComponentBRPawn*, uintptr_t))(Il2CppBase() + 0x35AA794))(this, value);
	}
	template <typename T = uintptr_t> T get_CurBRSwitchStep() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AA78C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SwitchRoleComponentBRPawn*, uintptr_t))(Il2CppBase() + 0x35AAA30))(this, pawn);
	}
	template <typename T = void> T SwitchTo3PView() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AAB3C))(this);
	}
	template <typename T = void> T SwitchTo1PView() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AABF8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwitchRoleComponentBRPawn*, float))(Il2CppBase() + 0x35AACB4))(this, deltaTime);
	}
	template <typename T = void> T ActiveWeapon() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AB010))(this);
	}
	template <typename T = void> T LoadAvatarOver(uintptr_t mesh) {
		return ((T (*)(SwitchRoleComponentBRPawn*, uintptr_t))(Il2CppBase() + 0x35AB7BC))(this, mesh);
	}
	template <typename T = void> T EndBRStep() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AB1F4))(this);
	}
	template <typename T = void> T Cache3PWeaponLBSocketTransform() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AB8C8))(this);
	}
	template <typename T = uintptr_t> T Get3PAvatarGOAnimator() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35ABC9C))(this);
	}
	template <typename T = uintptr_t> T GetBR3PAvataBagWeaponSocketCache() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35ABDD4))(this);
	}
	template <typename T = void> T ResetAvatarForGM() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35ABE74))(this);
	}
	template <typename T = void> T SwitchRole() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35ABF88))(this);
	}
	template <typename T = void> T ForceStopSwitchView() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AC12C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentBRPawn*, uintptr_t))(Il2CppBase() + 0x35AC1E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchRoleComponentBRPawn*, float))(Il2CppBase() + 0x35AC1E8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAvatarOver(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentBRPawn*, uintptr_t))(Il2CppBase() + 0x35AC1F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchRole() {
		return ((T (*)(SwitchRoleComponentBRPawn*))(Il2CppBase() + 0x35AC1F8))(this);
	}

};

}
