#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectProjectileExplodeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_ProjectileExplodeEffect"));
	}

	template <typename T = float> T& m_LifeTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& targetPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectProjectileExplodeEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8B198))(this, value, isStart, target);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(AssetEffectProjectileExplodeEffect*))(Il2CppBase() + 0x3B8B384))(this);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AssetEffectProjectileExplodeEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B8B598))(this, args);
	}
	template <typename T = void> static T PreLoadEffectAsset(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3B80F1C))(0, value);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectProjectileExplodeEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8B684))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerData(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AssetEffectProjectileExplodeEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B8B69C))(this, P0);
	}

};

}
