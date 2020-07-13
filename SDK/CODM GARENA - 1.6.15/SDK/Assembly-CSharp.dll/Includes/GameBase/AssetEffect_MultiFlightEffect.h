#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectMultiFlightEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_MultiFlightEffect"));
	}

	template <typename T = int32_t> T& m_ProjectileCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EffectDatas() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppQuaternion> T& m_AimRotation() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_accerleration() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_ExistTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> static T& m_eachDelayRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_MaxEachDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuaRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectMultiFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B89320))(this, value, isStart, target);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AssetEffectMultiFlightEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B89618))(this, args);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8980C))(this);
	}
	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(AssetEffectMultiFlightEffect*, float))(Il2CppBase() + 0x3B8A044))(this, deltaTime);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8A564))(this);
	}
	template <typename T = float> T GetQuaRandom(float delta) {
		return ((T (*)(AssetEffectMultiFlightEffect*, float))(Il2CppBase() + 0x3B8A810))(this, delta);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8A8C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectMultiFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8A96C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerData(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AssetEffectMultiFlightEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B8A984))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartEffect() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8AB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffect(float P0) {
		return ((T (*)(AssetEffectMultiFlightEffect*, float))(Il2CppBase() + 0x3B8AB40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyEffect() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8AB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(AssetEffectMultiFlightEffect*))(Il2CppBase() + 0x3B8AC74))(this);
	}

};

}
