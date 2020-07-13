#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMiniFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMiniFiringState"));
	}

	template <typename T = float> T& m_StartFireInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_StopFireInterval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ToNotifyServerStartFire() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5B204))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponMiniFiringState*, float))(Il2CppBase() + 0x3A5B424))(this, DeltaTime);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5B828))(this);
	}
	template <typename T = void> T WeaponStopFire() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5B6D0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5B90C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5BA38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponMiniFiringState*, float))(Il2CppBase() + 0x3A5BA40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5BA48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponMiniFiringState*))(Il2CppBase() + 0x3A5BA50))(this);
	}

};

}
