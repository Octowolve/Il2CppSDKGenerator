#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DeathZoneVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DeathZoneVolume"));
	}

	template <typename T = float> T& DelayDeathTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& DelayShowHUDTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowActiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleShowDeathZoneWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DeathZoneVolume*))(Il2CppBase() + 0x41BA77C))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(DeathZoneVolume*, uintptr_t, bool))(Il2CppBase() + 0x41BA874))(this, p, enter);
	}
	template <typename T = void> T DelayShowActiveHUD() {
		return ((T (*)(DeathZoneVolume*))(Il2CppBase() + 0x41BAAF8))(this);
	}
	template <typename T = void> T ToggleShowDeathZoneWarning(bool enter) {
		return ((T (*)(DeathZoneVolume*, bool))(Il2CppBase() + 0x41BA9B0))(this, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DeathZoneVolume*))(Il2CppBase() + 0x41BABA0))(this);
	}

};

}
