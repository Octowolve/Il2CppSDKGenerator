#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponActiveState"));
	}

	template <typename T = bool> T& m_InSpecialAction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToNewState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C498A4))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C49AA8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C49EAC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponActiveState*, float))(Il2CppBase() + 0x1C49744))(this, DeltaTime);
	}
	template <typename T = void> T TryToNewState() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A040))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A37C))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A534))(this);
	}
	template <typename T = void> T StopSecondaryFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A648))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A6E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A79C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponActiveState*, float))(Il2CppBase() + 0x1C4A7B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSecondaryFire() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponActiveState*))(Il2CppBase() + 0x1C4A7D4))(this);
	}

};

}
