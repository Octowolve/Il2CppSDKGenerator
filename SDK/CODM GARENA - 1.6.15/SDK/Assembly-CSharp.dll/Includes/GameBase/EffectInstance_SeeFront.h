#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EffectInstanceSeeFront
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EffectInstance_SeeFront"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_GlowInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Processor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_DeltaAdded() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsEnemy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGlowEffectEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_HasOcclusionEffect() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F5318))(this);
	}
	template <typename T = void> T ShowGlow(float duration) {
		return ((T (*)(EffectInstanceSeeFront*, float))(Il2CppBase() + 0x40F533C))(this, duration);
	}
	template <typename T = void> T SetTarget(uintptr_t target) {
		return ((T (*)(EffectInstanceSeeFront*, uintptr_t))(Il2CppBase() + 0x40F5568))(this, target);
	}
	template <typename T = void> T SetIsEnemy(bool value) {
		return ((T (*)(EffectInstanceSeeFront*, bool))(Il2CppBase() + 0x40F5850))(this, value);
	}
	template <typename T = bool> T IsEffectActive() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F58F8))(this);
	}
	template <typename T = void> T SetTargetRender(uintptr_t viewType, uintptr_t root) {
		return ((T (*)(EffectInstanceSeeFront*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40F56D4))(this, viewType, root);
	}
	template <typename T = void> T ToggleEffect(bool active) {
		return ((T (*)(EffectInstanceSeeFront*, bool))(Il2CppBase() + 0x40F5ABC))(this, active);
	}
	template <typename T = void> T CheckSelf() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F5C08))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EffectInstanceSeeFront*, float))(Il2CppBase() + 0x40F5D44))(this, deltaTime);
	}
	template <typename T = void> T CheckGlowEffectEnable() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F5FFC))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F6434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetTarget(uintptr_t P0) {
		return ((T (*)(EffectInstanceSeeFront*, uintptr_t))(Il2CppBase() + 0x40F6538))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CheckSelf() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F653C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(EffectInstanceSeeFront*, float))(Il2CppBase() + 0x40F6540))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(EffectInstanceSeeFront*))(Il2CppBase() + 0x40F6544))(this);
	}

};

}
