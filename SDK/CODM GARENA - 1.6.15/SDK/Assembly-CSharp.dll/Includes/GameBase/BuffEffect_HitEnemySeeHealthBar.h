#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectHitEnemySeeHealthBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_HitEnemySeeHealthBar"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_RecordDataList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x34);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375B970))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375BA14))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*, uintptr_t))(Il2CppBase() + 0x375BAB8))(this, msg);
	}
	template <typename T = int32_t> T GetIndex(uint32_t playerID) {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*, uint32_t))(Il2CppBase() + 0x375BF34))(this, playerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*, float))(Il2CppBase() + 0x375C088))(this, deltaTime);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375C3A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375C47C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375C480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTargetEvent(uintptr_t P0) {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*, uintptr_t))(Il2CppBase() + 0x375C484))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*, float))(Il2CppBase() + 0x375C488))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(BuffEffectHitEnemySeeHealthBar*))(Il2CppBase() + 0x375C48C))(this);
	}

};

}
