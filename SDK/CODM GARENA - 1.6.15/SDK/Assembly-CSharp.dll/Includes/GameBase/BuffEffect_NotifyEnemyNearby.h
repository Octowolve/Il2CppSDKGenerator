#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectNotifyEnemyNearby
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_NotifyEnemyNearby"));
	}

	template <typename T = bool> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& m_TickInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleNotifyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t buff) {
		return ((T (*)(BuffEffectNotifyEnemyNearby*, uintptr_t))(Il2CppBase() + 0x375CC94))(this, buff);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectNotifyEnemyNearby*))(Il2CppBase() + 0x375CD4C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectNotifyEnemyNearby*, float))(Il2CppBase() + 0x375D218))(this, deltaTime);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectNotifyEnemyNearby*))(Il2CppBase() + 0x375D400))(this);
	}
	template <typename T = void> T HandleNotifyEvent(bool value) {
		return ((T (*)(BuffEffectNotifyEnemyNearby*, bool))(Il2CppBase() + 0x375CE68))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BuffEffectNotifyEnemyNearby*, uintptr_t))(Il2CppBase() + 0x375D4BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectNotifyEnemyNearby*))(Il2CppBase() + 0x375D4C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectNotifyEnemyNearby*, float))(Il2CppBase() + 0x375D4C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectNotifyEnemyNearby*))(Il2CppBase() + 0x375D4C8))(this);
	}

};

}
