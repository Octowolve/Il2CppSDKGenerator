#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectScreenEfffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_ScreenEfffect"));
	}

	template <typename T = int32_t> T& m_EffectAssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WeaponSkillComponent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateExplosionScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectScreenEfffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8C5AC))(this, value, isStart, target);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AssetEffectScreenEfffect*))(Il2CppBase() + 0x3B8CB6C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectScreenEfffect*, float))(Il2CppBase() + 0x3B8CC20))(this, deltaTime);
	}
	template <typename T = void> T CreateExplosionScreenEffect(int32_t assetID) {
		return ((T (*)(AssetEffectScreenEfffect*, int32_t))(Il2CppBase() + 0x3B8C750))(this, assetID);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(AssetEffectScreenEfffect*))(Il2CppBase() + 0x3B8C958))(this);
	}
	template <typename T = bool> T NeedDestroy() {
		return ((T (*)(AssetEffectScreenEfffect*))(Il2CppBase() + 0x3B8CCDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectScreenEfffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8CE88))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(AssetEffectScreenEfffect*))(Il2CppBase() + 0x3B8CEA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectScreenEfffect*, float))(Il2CppBase() + 0x3B8CEA4))(this, P0);
	}

};

}
