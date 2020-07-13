#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectAddGoliathEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_AddGoliathEffect"));
	}

	template <typename T = bool> T& m_HasApplyEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPropertySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectAddGoliathEffect*))(Il2CppBase() + 0x374FF00))(this);
	}
	template <typename T = void> T ApplyPropertySet() {
		return ((T (*)(BuffEffectAddGoliathEffect*))(Il2CppBase() + 0x374FFB4))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAddGoliathEffect*))(Il2CppBase() + 0x375012C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectAddGoliathEffect*, float))(Il2CppBase() + 0x37502A0))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectAddGoliathEffect*))(Il2CppBase() + 0x3750350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAddGoliathEffect*))(Il2CppBase() + 0x3750354))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectAddGoliathEffect*, float))(Il2CppBase() + 0x3750358))(this, P0);
	}

};

}
