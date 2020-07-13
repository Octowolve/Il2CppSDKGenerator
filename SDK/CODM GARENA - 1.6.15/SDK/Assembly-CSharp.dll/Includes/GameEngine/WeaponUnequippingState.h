#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponUnequippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponUnequippingState"));
	}

	template <typename T = float> T& m_UnEquipPrcent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_CheckHideWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_HideWeaponTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C3BF4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponUnequippingState*, float))(Il2CppBase() + 0x33C3E2C))(this, DeltaTime);
	}
	template <typename T = void> T CheckHideWeapon() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C3EF4))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C403C))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C4244))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C4360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C44FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponUnequippingState*, float))(Il2CppBase() + 0x33C4504))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C450C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C4514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponUnequippingState*))(Il2CppBase() + 0x33C451C))(this);
	}

};

}
