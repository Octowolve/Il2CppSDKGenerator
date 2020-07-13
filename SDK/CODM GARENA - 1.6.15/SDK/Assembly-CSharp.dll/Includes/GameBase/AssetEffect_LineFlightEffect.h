#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectLineFlightEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_LineFlightEffect"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectLineFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B83420))(this, value, isStart, target);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(AssetEffectLineFlightEffect*))(Il2CppBase() + 0x3B83644))(this);
	}
	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(AssetEffectLineFlightEffect*, float))(Il2CppBase() + 0x3B8394C))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectLineFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B83B7C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_StartEffect() {
		return ((T (*)(AssetEffectLineFlightEffect*))(Il2CppBase() + 0x3B83DB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffect(float P0) {
		return ((T (*)(AssetEffectLineFlightEffect*, float))(Il2CppBase() + 0x3B83DBC))(this, P0);
	}

};

}
