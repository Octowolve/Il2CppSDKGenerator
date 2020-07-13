#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectExplodeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_ExplodeEffect"));
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
		return ((T (*)(AssetEffectExplodeEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B822AC))(this, value, isStart, target);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(AssetEffectExplodeEffect*))(Il2CppBase() + 0x3B82498))(this);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AssetEffectExplodeEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B826AC))(this, args);
	}
	template <typename T = void> static T PreLoadEffectAsset(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3B80D3C))(0, value);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectExplodeEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B82798))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerData(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AssetEffectExplodeEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B827B0))(this, P0);
	}

};

}
