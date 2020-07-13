#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSwimMeleeSprintState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSwimMeleeSprintState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSwimMeleeSprintState*, float))(Il2CppBase() + 0x4588AF4))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponSwimMeleeSprintState*))(Il2CppBase() + 0x4588C70))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimMeleeSprintState*))(Il2CppBase() + 0x4588D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSwimMeleeSprintState*, float))(Il2CppBase() + 0x4588E48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponSwimMeleeSprintState*))(Il2CppBase() + 0x4588E50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimMeleeSprintState*))(Il2CppBase() + 0x4588E58))(this);
	}

};

}
