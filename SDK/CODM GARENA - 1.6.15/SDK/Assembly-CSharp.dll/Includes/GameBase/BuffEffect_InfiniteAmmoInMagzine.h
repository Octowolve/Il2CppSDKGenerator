#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectInfiniteAmmoInMagzine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_InfiniteAmmoInMagzine"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleInfiniteAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectInfiniteAmmoInMagzine*))(Il2CppBase() + 0x375C7F8))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectInfiniteAmmoInMagzine*))(Il2CppBase() + 0x375CAA4))(this);
	}
	template <typename T = void> T ToggleInfiniteAmmo(bool infinite) {
		return ((T (*)(BuffEffectInfiniteAmmoInMagzine*, bool))(Il2CppBase() + 0x375C8A0))(this, infinite);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectInfiniteAmmoInMagzine*))(Il2CppBase() + 0x375CB4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectInfiniteAmmoInMagzine*))(Il2CppBase() + 0x375CB50))(this);
	}

};

}
