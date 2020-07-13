#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectTargetExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_TargetExplode"));
	}

	template <typename T = Il2CppVector3> T& m_ExplodePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTriggerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDataForAssetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ProcessTriggerEvent(uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx) {
		return ((T (*)(SkillEffectTargetExplode*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x308A25C))(this, optype, extraCtx);
	}
	template <typename T = void> T InitDataForAssetEffect(uintptr_t type, uintptr_t effect) {
		return ((T (*)(SkillEffectTargetExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x308A404))(this, type, effect);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTriggerEvent(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(SkillEffectTargetExplode*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x308A5A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitDataForAssetEffect(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SkillEffectTargetExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x308A5A8))(this, P0, P1);
	}

};

}
