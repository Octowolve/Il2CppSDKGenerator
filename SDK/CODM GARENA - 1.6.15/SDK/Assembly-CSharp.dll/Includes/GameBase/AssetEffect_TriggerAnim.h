#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectTriggerAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_TriggerAnim"));
	}

	template <typename T = float> T& m_delayTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectTriggerAnim*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8DA28))(this, value, isStart, target);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectTriggerAnim*, float))(Il2CppBase() + 0x3B8DC6C))(this, deltaTime);
	}
	template <typename T = void> T TriggerAnim() {
		return ((T (*)(AssetEffectTriggerAnim*))(Il2CppBase() + 0x3B8DE58))(this);
	}
	template <typename T = void> T EndAnim() {
		return ((T (*)(AssetEffectTriggerAnim*))(Il2CppBase() + 0x3B8DEF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectTriggerAnim*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8DF88))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AssetEffectTriggerAnim*, float))(Il2CppBase() + 0x3B8DFA0))(this, P0);
	}

};

}
