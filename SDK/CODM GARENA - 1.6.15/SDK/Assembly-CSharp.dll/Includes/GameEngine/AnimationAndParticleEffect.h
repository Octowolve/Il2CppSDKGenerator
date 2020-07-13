#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationAndParticleEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationAndParticleEffect"));
	}

	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Animators() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T set_StartTime(float value) {
		return ((T (*)(AnimationAndParticleEffect*, float))(Il2CppBase() + 0x2B422F8))(this, value);
	}
	template <typename T = void> T InitResource() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42300))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B423F0))(this);
	}
	template <typename T = void> T PlayAnimEffect(bool bAutoStop, float fTime) {
		return ((T (*)(AnimationAndParticleEffect*, bool, float))(Il2CppBase() + 0x2B424EC))(this, bAutoStop, fTime);
	}
	template <typename T = void> T DelayStop() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42654))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42764))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B4295C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitResource() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42A0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42A14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(AnimationAndParticleEffect*))(Il2CppBase() + 0x2B42A24))(this);
	}

};

}
