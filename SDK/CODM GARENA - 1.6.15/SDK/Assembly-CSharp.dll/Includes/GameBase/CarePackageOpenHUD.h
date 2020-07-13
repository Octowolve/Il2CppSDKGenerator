#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackageOpenHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackageOpenHUD"));
	}

	template <typename T = uintptr_t> T& mCarePackageClass() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_OwnerCarePackage() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_RequestDelay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsOpening() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_BeginOpeningTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsSettingTrap() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_IsResetting() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = bool> T& m_EngineerPerkEquipped() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = uint32_t> T& m_ResetTimes() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& m_SetTrapPlayerId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& ChamberCarePackageIconName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& SASCarePackageIconName() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchInfoGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupResetButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenProgressBarValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D718))(this);
	}
	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D724))(this);
	}
	template <typename T = bool> T get_IsOpening() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D72C))(this);
	}
	template <typename T = void> T set_IsOpening(bool value) {
		return ((T (*)(CarePackageOpenHUD*, bool))(Il2CppBase() + 0x3C5D734))(this, value);
	}
	template <typename T = void> T set_ResetTimes(uint32_t value) {
		return ((T (*)(CarePackageOpenHUD*, uint32_t))(Il2CppBase() + 0x3C5D73C))(this, value);
	}
	template <typename T = void> T set_SetTrapPlayerId(uint32_t value) {
		return ((T (*)(CarePackageOpenHUD*, uint32_t))(Il2CppBase() + 0x3C5D808))(this, value);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D810))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D818))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D8C0))(this);
	}
	template <typename T = bool> T OnGamepadTrigger() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5D968))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5E464))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5E7B8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CarePackageOpenHUD*, float))(Il2CppBase() + 0x3C5E900))(this, dt);
	}
	template <typename T = void> T SetTipsLabel(bool isUsing, bool isSettingTrap) {
		return ((T (*)(CarePackageOpenHUD*, bool, bool))(Il2CppBase() + 0x3C5EF30))(this, isUsing, isSettingTrap);
	}
	template <typename T = void> T SwitchInfoGO(bool isOpening) {
		return ((T (*)(CarePackageOpenHUD*, bool))(Il2CppBase() + 0x3C5F23C))(this, isOpening);
	}
	template <typename T = void> T SetBgSprite(bool isOpening) {
		return ((T (*)(CarePackageOpenHUD*, bool))(Il2CppBase() + 0x3C5F374))(this, isOpening);
	}
	template <typename T = void> T SetupResetButton() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5F744))(this);
	}
	template <typename T = void> T OnOpenButtonClick() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5DA80))(this);
	}
	template <typename T = void> T OnResetButtonClick() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C5FA38))(this);
	}
	template <typename T = void> T SetOpenProgressBarValue(float value) {
		return ((T (*)(CarePackageOpenHUD*, float))(Il2CppBase() + 0x3C5EE5C))(this, value);
	}
	template <typename T = void> T SetData(uint32_t actorID, uint32_t playerID, uintptr_t camp, float requestDelay, uint32_t resetTimes, uint32_t setTrapPlayerId) {
		return ((T (*)(CarePackageOpenHUD*, uint32_t, uint32_t, uintptr_t, float, uint32_t, uint32_t))(Il2CppBase() + 0x3C5FD50))(this, actorID, playerID, camp, requestDelay, resetTimes, setTrapPlayerId);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C60084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C60238))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C60240))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C60248))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CarePackageOpenHUD*))(Il2CppBase() + 0x3C60250))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CarePackageOpenHUD*, float))(Il2CppBase() + 0x3C60258))(this, P0);
	}

};

}
