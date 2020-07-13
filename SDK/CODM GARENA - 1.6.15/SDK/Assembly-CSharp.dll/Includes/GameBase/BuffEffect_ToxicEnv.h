#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectToxicEnv
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_ToxicEnv"));
	}

	template <typename T = uintptr_t> static T& cameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LastSkyBox() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LastSkyDomMats() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sceneFogConfigDict() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> static T& buffEffective() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& destConfig() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& oldFogConfig() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& startFadeTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& fadeDuration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSceneConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActiveSceneChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayRemoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDestFogConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsPersistent() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C41C18))(this);
	}
	template <typename T = void> T SaveSceneConfig(uintptr_t scene) {
		return ((T (*)(BuffEffectToxicEnv*, uintptr_t))(Il2CppBase() + 0x3C41C20))(this, scene);
	}
	template <typename T = void> T OnActiveSceneChange(uintptr_t current, uintptr_t next) {
		return ((T (*)(BuffEffectToxicEnv*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C41F84))(this, current, next);
	}
	template <typename T = void> T OnSceneUnload(uintptr_t unloadScene) {
		return ((T (*)(BuffEffectToxicEnv*, uintptr_t))(Il2CppBase() + 0x3C423FC))(this, unloadScene);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C42708))(this);
	}
	template <typename T = void> T OnDelayRemoveStart() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C43594))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C43CB4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectToxicEnv*, float))(Il2CppBase() + 0x3C440CC))(this, deltaTime);
	}
	template <typename T = void> T LerpFog(float lerpRatio) {
		return ((T (*)(BuffEffectToxicEnv*, float))(Il2CppBase() + 0x3C42088))(this, lerpRatio);
	}
	template <typename T = void> T SetDestFogConfig(uintptr_t destFogConf) {
		return ((T (*)(BuffEffectToxicEnv*, uintptr_t))(Il2CppBase() + 0x3C432B4))(this, destFogConf);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C44208))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDelayRemoveStart() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C44210))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectToxicEnv*))(Il2CppBase() + 0x3C44218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectToxicEnv*, float))(Il2CppBase() + 0x3C44220))(this, P0);
	}

};

}
