#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSeeFacilityFront
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SeeFacilityFront"));
	}

	template <typename T = float> T& lastTickTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& tickInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& scanRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isLocalOrViewTarget() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t buff) {
		return ((T (*)(BuffEffectSeeFacilityFront*, uintptr_t))(Il2CppBase() + 0x375FE54))(this, buff);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeFacilityFront*))(Il2CppBase() + 0x375FF90))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeFacilityFront*))(Il2CppBase() + 0x3760274))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t imsg) {
		return ((T (*)(BuffEffectSeeFacilityFront*, uintptr_t))(Il2CppBase() + 0x37611A8))(this, imsg);
	}
	template <typename T = void> T UpdateBuffer() {
		return ((T (*)(BuffEffectSeeFacilityFront*))(Il2CppBase() + 0x376015C))(this);
	}
	template <typename T = void> T HandleEffects(float radius) {
		return ((T (*)(BuffEffectSeeFacilityFront*, float))(Il2CppBase() + 0x37604AC))(this, radius);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectSeeFacilityFront*, float))(Il2CppBase() + 0x37615FC))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BuffEffectSeeFacilityFront*, uintptr_t))(Il2CppBase() + 0x3761814))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeFacilityFront*))(Il2CppBase() + 0x3761818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeFacilityFront*))(Il2CppBase() + 0x376181C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTargetEvent(uintptr_t P0) {
		return ((T (*)(BuffEffectSeeFacilityFront*, uintptr_t))(Il2CppBase() + 0x3761820))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectSeeFacilityFront*, float))(Il2CppBase() + 0x3761824))(this, P0);
	}

};

}
