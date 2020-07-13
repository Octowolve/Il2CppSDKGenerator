#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class QKnifeWeaponEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "QKnifeWeaponEquippingState"));
	}

	template <typename T = float> T& DelayFire() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(QKnifeWeaponEquippingState*))(Il2CppBase() + 0x2DD682C))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(QKnifeWeaponEquippingState*))(Il2CppBase() + 0x2DD68CC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(QKnifeWeaponEquippingState*))(Il2CppBase() + 0x2DD6B7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(QKnifeWeaponEquippingState*))(Il2CppBase() + 0x2DD6B84))(this);
	}

};

}
