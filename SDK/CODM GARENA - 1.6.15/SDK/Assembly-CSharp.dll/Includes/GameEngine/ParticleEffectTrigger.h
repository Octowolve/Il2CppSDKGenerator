#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleEffectTrigger"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& effectWithDelayList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerParticleEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ParticleEffectTrigger*))(Il2CppBase() + 0x272D768))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(ParticleEffectTrigger*, uintptr_t, bool))(Il2CppBase() + 0x272D860))(this, p, enter);
	}
	template <typename T = uintptr_t> T TriggerParticleEffects(uintptr_t item) {
		return ((T (*)(ParticleEffectTrigger*, uintptr_t))(Il2CppBase() + 0x272D9A0))(this, item);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ParticleEffectTrigger*))(Il2CppBase() + 0x272DA90))(this);
	}

};

}
