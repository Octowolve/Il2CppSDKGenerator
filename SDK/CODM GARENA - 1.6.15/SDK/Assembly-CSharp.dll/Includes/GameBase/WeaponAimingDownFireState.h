#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimingDownFireState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimingDownFireState"));
	}

	template <typename T = bool> T& m_IsDoStopFire() {
		return *(T*)((uintptr_t)this + 0x3D);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFireGroupEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4C4DC))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4C58C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponAimingDownFireState*, float))(Il2CppBase() + 0x1C4C66C))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4C768))(this);
	}
	template <typename T = void> T DoFireGroupEnd() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4C8CC))(this);
	}
	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4C99C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4CA60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4CA68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAimingDownFireState*, float))(Il2CppBase() + 0x1C4CA70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4CA78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoFireGroupEnd() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4CA80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponAimingDownFireState*))(Il2CppBase() + 0x1C4CA88))(this);
	}

};

}
