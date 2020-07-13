#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZMInteractiveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZMInteractiveHUD"));
	}

	template <typename T = uintptr_t> T& ZMWeaponPickUpHud() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_BuildableObstacle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_bBuildingObstacle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_CurrentObstaleHealth() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_MaxObtacleHealth() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_CurrentTimeSum() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_ExpectTimeLimit() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BuildingObstacleRoot() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BuildingObstacleProgress() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RepairWindow_NewGuideText() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& Common_NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& Common_NewGuideText() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPickUpProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBuildableObstacleHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuildingObstacleHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBeginBuildOneObstacle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeepCounting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowCommonNewGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x435F5EC))(this);
	}
	template <typename T = bool> T ShouldShow() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x435F700))(this);
	}
	template <typename T = void> T OnWeaponPickUpProgress(uintptr_t msg) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x435F8C8))(this, msg);
	}
	template <typename T = void> T ShowBuildableObstacleHUD(bool bShow, uintptr_t buildObstacle) {
		return ((T (*)(ZMInteractiveHUD*, bool, uintptr_t))(Il2CppBase() + 0x4360144))(this, bShow, buildObstacle);
	}
	template <typename T = void> T OnBuildingObstacleHUD(uintptr_t msg) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x43606C8))(this, msg);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x43608AC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMInteractiveHUD*, float))(Il2CppBase() + 0x43608B4))(this, dt);
	}
	template <typename T = void> T RequestBeginBuildOneObstacle() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x4360444))(this);
	}
	template <typename T = void> T KeepCounting() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x4360D00))(this);
	}
	template <typename T = void> T ShowInteractive(uintptr_t param) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x4360DB4))(this, param);
	}
	template <typename T = void> T OnCommonButtonClick() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x4361474))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(ZMInteractiveHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4361EE8))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x436216C))(this, itemType);
	}
	template <typename T = bool> T CanShowCommonNewGuide(uintptr_t itemType) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x4362450))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x436273C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldShow() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x4362744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponPickUpProgress(uintptr_t P0) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x436274C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMInteractiveHUD*, float))(Il2CppBase() + 0x4362754))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowInteractive(uintptr_t P0) {
		return ((T (*)(ZMInteractiveHUD*, uintptr_t))(Il2CppBase() + 0x436275C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCommonButtonClick() {
		return ((T (*)(ZMInteractiveHUD*))(Il2CppBase() + 0x4362764))(this);
	}

};

}
