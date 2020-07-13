#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSwimIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSwimIdleState"));
	}

	template <typename T = float> T& m_BeginStateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToNewState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1038))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C12C0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C14EC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimIdleState*, float))(Il2CppBase() + 0x33C1604))(this, DeltaTime);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C17D0))(this);
	}
	template <typename T = void> T TryToNewState() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C16C8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1890))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C193C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimIdleState*, float))(Il2CppBase() + 0x33C1940))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1944))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSwimIdleState*))(Il2CppBase() + 0x33C1948))(this);
	}

};

}
