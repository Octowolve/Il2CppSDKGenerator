#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectDizzy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_Dizzy"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsPersistent() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x3752E08))(this);
	}
	template <typename T = bool> T get_OnlyForLocalPlayer() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x3752E10))(this);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x3752E18))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x37534BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x3753680))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectDizzy*))(Il2CppBase() + 0x3753684))(this);
	}

};

}
