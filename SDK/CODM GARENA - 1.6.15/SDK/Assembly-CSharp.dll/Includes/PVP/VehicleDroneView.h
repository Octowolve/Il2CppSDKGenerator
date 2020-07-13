#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleDroneView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleDroneView"));
	}

	template <typename T = uintptr_t> T& Normal_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Attack_NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& kGreenColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kRedColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& kYellowColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& kWriteColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> T& SkillBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SkillCountLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OuterSteeringGO() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& InnerSteeringGO() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& OuterSteeringAngleRange() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& InnerSteeringAngleRange() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& OuterSteeringSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& InnerSteeringSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& HPValue() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ElectricityValue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SpeedValue() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_HitEffectHUD() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_PlayedNoPowerSound() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_CurrentOuterSteeringAngle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_CurrentInnerSteeringAngle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoystick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetElectricity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkillCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleDroneHandleInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLocalVehicleHurt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocalVehicleHurtHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSteeringAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSteeringAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9D884))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9D88C))(this);
	}
	template <typename T = uintptr_t> T get_m_CurrentVehicle() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9D89C))(this);
	}
	template <typename T = void> T ResetValue() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D964D8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9DA10))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(VehicleDroneView*, float))(Il2CppBase() + 0x3D9DA18))(this, deltaTime);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9DFF8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9E1D0))(this);
	}
	template <typename T = void> T UpdateJoystick() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9DBFC))(this);
	}
	template <typename T = void> T ShowTips(Il2CppString* tipsContent, float visibleTime) {
		return ((T (*)(VehicleDroneView*, Il2CppString*, float))(Il2CppBase() + 0x3D9824C))(this, tipsContent, visibleTime);
	}
	template <typename T = void> T SetHP(int32_t current, int32_t max) {
		return ((T (*)(VehicleDroneView*, int32_t, int32_t))(Il2CppBase() + 0x3D97184))(this, current, max);
	}
	template <typename T = void> T SetElectricity(int32_t current, int32_t max) {
		return ((T (*)(VehicleDroneView*, int32_t, int32_t))(Il2CppBase() + 0x3D974F0))(this, current, max);
	}
	template <typename T = void> T SetSpeed(float speed) {
		return ((T (*)(VehicleDroneView*, float))(Il2CppBase() + 0x3D97988))(this, speed);
	}
	template <typename T = void> T SetSkillCount(int32_t number) {
		return ((T (*)(VehicleDroneView*, int32_t))(Il2CppBase() + 0x3D97CF4))(this, number);
	}
	template <typename T = void> T VehicleDroneHandleInit() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D98B2C))(this);
	}
	template <typename T = void> T NotifyLocalVehicleHurt(uintptr_t info) {
		return ((T (*)(VehicleDroneView*, uintptr_t))(Il2CppBase() + 0x3D9888C))(this, info);
	}
	template <typename T = void> T UpdateLocalVehicleHurtHUD(float deltaTime) {
		return ((T (*)(VehicleDroneView*, float))(Il2CppBase() + 0x3D9DCC4))(this, deltaTime);
	}
	template <typename T = void> T UpdateSteeringAngles(float deltaTime) {
		return ((T (*)(VehicleDroneView*, float))(Il2CppBase() + 0x3D9DE10))(this, deltaTime);
	}
	template <typename T = void> T UpdateSteeringAngle(float deltaTime, float steeringSpeed, uintptr_t currentSteeringAngle) {
		return ((T (*)(VehicleDroneView*, float, float, uintptr_t))(Il2CppBase() + 0x3D9E4D4))(this, deltaTime, steeringSpeed, currentSteeringAngle);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(VehicleDroneView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3D9E754))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(VehicleDroneView*, uintptr_t))(Il2CppBase() + 0x3D9E974))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VehicleDroneView*, float))(Il2CppBase() + 0x3D9ECD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9ECDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(VehicleDroneView*))(Il2CppBase() + 0x3D9ECE4))(this);
	}

};

}
