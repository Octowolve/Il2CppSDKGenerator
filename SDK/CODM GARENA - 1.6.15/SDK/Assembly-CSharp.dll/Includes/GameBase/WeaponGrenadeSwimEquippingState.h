#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeSwimEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeSwimEquippingState"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A50C44))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadeSwimEquippingState*, float))(Il2CppBase() + 0x3A50E08))(this, DeltaTime);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A50EBC))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A50F5C))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A51004))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A510A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A5114C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadeSwimEquippingState*, float))(Il2CppBase() + 0x3A51154))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A5115C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A51164))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A5116C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponGrenadeSwimEquippingState*))(Il2CppBase() + 0x3A51174))(this);
	}

};

}
