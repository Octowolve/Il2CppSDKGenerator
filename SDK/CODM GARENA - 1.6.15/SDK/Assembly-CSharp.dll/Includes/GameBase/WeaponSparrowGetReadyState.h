#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSparrowGetReadyState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSparrowGetReadyState"));
	}

	template <typename T = bool> T& stopFireBeforeReady() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A894EC))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89608))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89770))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A898EC))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89984))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89AA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89AB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89AB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89AC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponSparrowGetReadyState*))(Il2CppBase() + 0x3A89AC8))(this);
	}

};

}
