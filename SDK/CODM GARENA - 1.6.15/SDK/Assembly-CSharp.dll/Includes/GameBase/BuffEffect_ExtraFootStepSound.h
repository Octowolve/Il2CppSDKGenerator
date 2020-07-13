#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectExtraFootStepSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_ExtraFootStepSound"));
	}

	template <typename T = void*> T& affectedPawns() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& listenerPawn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mTimeTick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& curType() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSoundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyFootstepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEnemyFootstep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x3759714))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x3759AD0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectExtraFootStepSound*, float))(Il2CppBase() + 0x3759BAC))(this, deltaTime);
	}
	template <typename T = void> T ChangeSoundConfig(uintptr_t inPawn) {
		return ((T (*)(BuffEffectExtraFootStepSound*, uintptr_t))(Il2CppBase() + 0x375A188))(this, inPawn);
	}
	template <typename T = void> T ApplyFootstepSound() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x375983C))(this);
	}
	template <typename T = void> T HandleEnemyFootstep() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x3759E94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x375A6CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectExtraFootStepSound*))(Il2CppBase() + 0x375A6D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectExtraFootStepSound*, float))(Il2CppBase() + 0x375A6D4))(this, P0);
	}

};

}
