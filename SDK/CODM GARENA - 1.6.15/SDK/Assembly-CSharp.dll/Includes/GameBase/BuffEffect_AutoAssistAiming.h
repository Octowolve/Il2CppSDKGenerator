#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectAutoAssistAiming
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_AutoAssistAiming"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAutoAssistProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectAutoAssistAiming*))(Il2CppBase() + 0x3751D30))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAutoAssistAiming*))(Il2CppBase() + 0x37521D4))(this);
	}
	template <typename T = void> T ChangeAutoAssistProperty() {
		return ((T (*)(BuffEffectAutoAssistAiming*))(Il2CppBase() + 0x3751E9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectAutoAssistAiming*))(Il2CppBase() + 0x3752340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectAutoAssistAiming*))(Il2CppBase() + 0x3752344))(this);
	}

};

}
