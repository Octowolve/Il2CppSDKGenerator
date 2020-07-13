#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CurrentWeaponButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CurrentWeaponButton"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParentView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(CurrentWeaponButton*, bool))(Il2CppBase() + 0x40D8B14))(this, isPressed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CurrentWeaponButton*))(Il2CppBase() + 0x40D8BC8))(this);
	}
	template <typename T = void> T SetParentView(uintptr_t inParentView) {
		return ((T (*)(CurrentWeaponButton*, uintptr_t))(Il2CppBase() + 0x40D8C60))(this, inParentView);
	}
	template <typename T = void> T xLuaBaseProxy_OnPress(bool P0) {
		return ((T (*)(CurrentWeaponButton*, bool))(Il2CppBase() + 0x40D8D00))(this, P0);
	}

};

}
