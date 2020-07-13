#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ParticleEffectRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ParticleEffect_Random"));
	}

	template <typename T = bool> T& bLoop() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& OneShotLife() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& RandomMinTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& RandomMaxTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& mPlayInterval() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& mInited() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrigglePlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ParticleEffectRandom*))(Il2CppBase() + 0x272D264))(this);
	}
	template <typename T = uintptr_t> T TrigglePlayEffect() {
		return ((T (*)(ParticleEffectRandom*))(Il2CppBase() + 0x272D358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ParticleEffectRandom*))(Il2CppBase() + 0x272D440))(this);
	}

};

}
