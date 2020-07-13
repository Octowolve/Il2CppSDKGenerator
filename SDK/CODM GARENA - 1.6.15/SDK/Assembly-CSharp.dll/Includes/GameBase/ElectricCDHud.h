#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ElectricCDHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ElectricCDHud"));
	}

	template <typename T = uintptr_t> T& CDSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ClickCDSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ClickCDState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& WAIT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PURSUE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_ResetTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_ChangeTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_RecordTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_ClickWaitTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_ClickResetTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_ClickPursueTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& temp() {
		return *(T*)((uintptr_t)this + 0xA4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickClickCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMustPursue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnElectricCDChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickSpriteCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordClickTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetNormalCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClickCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40F9EC4))(this);
	}
	template <typename T = float> T get_TotalTime() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40F9ECC))(this);
	}
	template <typename T = void> T set_TotalTime(float value) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40F9ED4))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40F9EDC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40F9F84))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FA02C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FA140))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FA1FC))(this, dt);
	}
	template <typename T = void> T TickClickCD(float dt) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FA468))(this, dt);
	}
	template <typename T = bool> T IsMustPursue() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FA72C))(this);
	}
	template <typename T = void> T OnElectricCDChange(uintptr_t obj) {
		return ((T (*)(ElectricCDHud*, uintptr_t))(Il2CppBase() + 0x40FAA08))(this, obj);
	}
	template <typename T = void> T SetSpriteCD(float resetTime) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FA31C))(this, resetTime);
	}
	template <typename T = void> T SetClickSpriteCD(float resetTime) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FA8BC))(this, resetTime);
	}
	template <typename T = void> T SetUIState(bool enable) {
		return ((T (*)(ElectricCDHud*, bool))(Il2CppBase() + 0x40FA620))(this, enable);
	}
	template <typename T = void> T RecordTime(float resetTime, bool reset) {
		return ((T (*)(ElectricCDHud*, float, bool))(Il2CppBase() + 0x40FAC70))(this, resetTime, reset);
	}
	template <typename T = void> T RecordClickTime(float resetTime) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FAE14))(this, resetTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAD68))(this);
	}
	template <typename T = void> T ResetNormalCD() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAF18))(this);
	}
	template <typename T = void> T ResetClickCD() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FA80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAFC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAFC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAFD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ElectricCDHud*))(Il2CppBase() + 0x40FAFD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ElectricCDHud*, float))(Il2CppBase() + 0x40FAFE0))(this, P0);
	}

};

}
