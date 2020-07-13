#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EffectInstanceGod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EffectInstance_God"));
	}

	template <typename T = float> T& m_RespawnGodTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_RespawnGotDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_GodEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WeaponGodRendererArray() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_WeaponGodEnable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RenderList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PickColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_PickIntensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_PickSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_PickRange() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRespawnGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRespawnGodActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleGodEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaterialGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetRespawnGod(float duration, uintptr_t pickColor, float pickIntensity, float pickSpeed, float pickRange) {
		return ((T (*)(EffectInstanceGod*, float, uintptr_t, float, float, float))(Il2CppBase() + 0x40F42F0))(this, duration, pickColor, pickIntensity, pickSpeed, pickRange);
	}
	template <typename T = void> T SetTarget(uintptr_t target) {
		return ((T (*)(EffectInstanceGod*, uintptr_t))(Il2CppBase() + 0x40F4898))(this, target);
	}
	template <typename T = bool> T IsRespawnGodActive() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F49D0))(this);
	}
	template <typename T = bool> T IsEffectActive() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F4AB0))(this);
	}
	template <typename T = void> T ToggleGodEffect(bool active) {
		return ((T (*)(EffectInstanceGod*, bool))(Il2CppBase() + 0x40F4BD0))(this, active);
	}
	template <typename T = void> T CheckSelf() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F4CE4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EffectInstanceGod*, float))(Il2CppBase() + 0x40F4DB8))(this, deltaTime);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F5150))(this);
	}
	template <typename T = void> T SetMaterialGod(bool enable) {
		return ((T (*)(EffectInstanceGod*, bool))(Il2CppBase() + 0x40F44A0))(this, enable);
	}
	template <typename T = void> T xLuaBaseProxy_SetTarget(uintptr_t P0) {
		return ((T (*)(EffectInstanceGod*, uintptr_t))(Il2CppBase() + 0x40F5208))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckSelf() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F520C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(EffectInstanceGod*, float))(Il2CppBase() + 0x40F5210))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(EffectInstanceGod*))(Il2CppBase() + 0x40F5214))(this);
	}

};

}
