#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponGetReadyState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponGetReadyState"));
	}

	template <typename T = bool> T& m_OpenAim() {
		return *(T*)((uintptr_t)this + 0x29);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x24055FC))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405760))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405838))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405A38))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405B54))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405BF8))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405C9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405CA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405CAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405CB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponGetReadyState*))(Il2CppBase() + 0x2405CC4))(this);
	}

};

}
