#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectHitEnemySeeFrontGlow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_HitEnemySeeFrontGlow"));
	}

	template <typename T = float> T& m_Duration() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*))(Il2CppBase() + 0x375B32C))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*))(Il2CppBase() + 0x375B3D0))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*, uintptr_t))(Il2CppBase() + 0x375B474))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*))(Il2CppBase() + 0x375B884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*))(Il2CppBase() + 0x375B888))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTargetEvent(uintptr_t P0) {
		return ((T (*)(BuffEffectHitEnemySeeFrontGlow*, uintptr_t))(Il2CppBase() + 0x375B88C))(this, P0);
	}

};

}
