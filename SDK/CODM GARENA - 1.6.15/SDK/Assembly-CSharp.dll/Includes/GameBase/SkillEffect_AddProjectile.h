#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectAddProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_AddProjectile"));
	}

	template <typename T = uintptr_t> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_WeaponActorID() {
		return ((T (*)(SkillEffectAddProjectile*))(Il2CppBase() + 0x308508C))(this);
	}
	template <typename T = void> T InitEffect(int32_t index, uintptr_t skill) {
		return ((T (*)(SkillEffectAddProjectile*, int32_t, uintptr_t))(Il2CppBase() + 0x3085140))(this, index, skill);
	}
	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectAddProjectile*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3085350))(this, optype, extraCtx);
	}
	template <typename T = void> T xLuaBaseProxy_InitEffect(int32_t P0, uintptr_t P1) {
		return ((T (*)(SkillEffectAddProjectile*, int32_t, uintptr_t))(Il2CppBase() + 0x30856EC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectAddProjectile*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30856F0))(this, P0, P1);
	}

};

}
