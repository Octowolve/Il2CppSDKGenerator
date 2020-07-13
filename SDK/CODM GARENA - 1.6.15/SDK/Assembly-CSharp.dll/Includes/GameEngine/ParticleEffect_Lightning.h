#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleEffectLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleEffect_Lightning"));
	}

	template <typename T = bool> T& bLightBlink() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& BlinkInterval() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& BlinkTimes() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RelevantLights() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LightFlashBlink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ActivateLight(bool bActive) {
		return ((T (*)(ParticleEffectLightning*, bool))(Il2CppBase() + 0x272CCC8))(this, bActive);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(ParticleEffectLightning*))(Il2CppBase() + 0x272CE48))(this);
	}
	template <typename T = uintptr_t> T LightFlashBlink() {
		return ((T (*)(ParticleEffectLightning*))(Il2CppBase() + 0x272CF10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(ParticleEffectLightning*))(Il2CppBase() + 0x272CFF8))(this);
	}

};

}
