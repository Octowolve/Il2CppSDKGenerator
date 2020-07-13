#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectAddHealth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_AddHealth"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayRemoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectAddHealth*))(Il2CppBase() + 0x37503FC))(this);
	}
	template <typename T = void> T OnDelayRemoveStart() {
		return ((T (*)(BuffEffectAddHealth*))(Il2CppBase() + 0x37509EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectAddHealth*))(Il2CppBase() + 0x3750A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDelayRemoveStart() {
		return ((T (*)(BuffEffectAddHealth*))(Il2CppBase() + 0x3750A94))(this);
	}

};

}
