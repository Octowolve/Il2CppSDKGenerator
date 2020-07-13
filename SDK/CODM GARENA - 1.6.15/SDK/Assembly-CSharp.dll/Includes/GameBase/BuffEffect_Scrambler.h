#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectScrambler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_Scrambler"));
	}

	template <typename T = void*> T& affectedPawns() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mTimeTick() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& affectSqrRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_HandleScramblerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375E20C))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375E7F4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectScrambler*, float))(Il2CppBase() + 0x375EA88))(this, deltaTime);
	}
	template <typename T = void> T HandleScramblerEffect() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375E348))(this);
	}
	template <typename T = void> T RemoveAllEffect() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375E8A0))(this);
	}
	template <typename T = void> T DoEffect(uintptr_t inPawn, bool add) {
		return ((T (*)(BuffEffectScrambler*, uintptr_t, bool))(Il2CppBase() + 0x375EB7C))(this, inPawn, add);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375ED24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectScrambler*))(Il2CppBase() + 0x375ED28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectScrambler*, float))(Il2CppBase() + 0x375ED2C))(this, P0);
	}

};

}
