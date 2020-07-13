#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAimedIdleHoldState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAimedIdleHoldState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B1FC))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B318))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponAimedIdleHoldState*, float))(Il2CppBase() + 0x1C4B450))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B668))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B72C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAimedIdleHoldState*, float))(Il2CppBase() + 0x1C4B734))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponAimedIdleHoldState*))(Il2CppBase() + 0x1C4B73C))(this);
	}

};

}
