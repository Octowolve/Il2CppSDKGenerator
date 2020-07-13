#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectAmmo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_Ammo"));
	}

	template <typename T = bool> T& m_HasApplyEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeapList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckApplyPropertySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFireCompAttr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmonInMagzine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3750B6C))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3750C18))(this);
	}
	template <typename T = void> T CheckApplyPropertySet() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3751170))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectAmmo*, float))(Il2CppBase() + 0x37516D0))(this, deltaTime);
	}
	template <typename T = void> T ApplyFireCompAttr(uintptr_t fireComp, uintptr_t prop, bool apply) {
		return ((T (*)(BuffEffectAmmo*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3750E7C))(this, fireComp, prop, apply);
	}
	template <typename T = void> T ResetAmmo() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x37513A0))(this);
	}
	template <typename T = void> T AddAmmonInMagzine(uintptr_t weapon, int32_t count) {
		return ((T (*)(BuffEffectAmmo*, uintptr_t, int32_t))(Il2CppBase() + 0x3751A04))(this, weapon, count);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3751BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3751C80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3751C84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectAmmo*, float))(Il2CppBase() + 0x3751C88))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(BuffEffectAmmo*))(Il2CppBase() + 0x3751C8C))(this);
	}

};

}
