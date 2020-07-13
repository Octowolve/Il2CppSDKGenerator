#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectPostProcessing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_PostProcessing"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPostEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsPersistent() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x375DB10))(this);
	}
	template <typename T = bool> T get_OnlyForLocalPlayer() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x375DB18))(this);
	}
	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x3753324))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x37535D8))(this);
	}
	template <typename T = void> T ApplyPostEffect(uintptr_t config) {
		return ((T (*)(BuffEffectPostProcessing*, uintptr_t))(Il2CppBase() + 0x375DB20))(this, config);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x375DC88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectPostProcessing*))(Il2CppBase() + 0x375DC8C))(this);
	}

};

}
