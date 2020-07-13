#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponEquippingState"));
	}

	template <typename T = bool> T& m_NeedSynEquipWeapon() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstPersonPulloutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBA22C))(this);
	}
	template <typename T = bool> T IsFirstPersonPulloutWeapon() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBA5B0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBA760))(this);
	}
	template <typename T = void> T ResetFireInput() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBAA98))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBAC50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBAD6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBAD74))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponEquippingState*))(Il2CppBase() + 0x2EBAD7C))(this);
	}

};

}
