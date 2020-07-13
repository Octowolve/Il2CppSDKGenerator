#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponInductionGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThrowWeaponFireStateValue_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(WeaponInductionGun*))(Il2CppBase() + 0x3A55780))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponInductionGun*, uintptr_t))(Il2CppBase() + 0x3A55828))(this, param);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponInductionGun*, float))(Il2CppBase() + 0x3A558F0))(this, deltaTime);
	}
	template <typename T = void> T SetThrowWeaponFireStateValue_BR(bool isInFireState) {
		return ((T (*)(WeaponInductionGun*, bool))(Il2CppBase() + 0x3A559A4))(this, isInFireState);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(WeaponInductionGun*))(Il2CppBase() + 0x3A55A5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponInductionGun*, uintptr_t))(Il2CppBase() + 0x3A55A64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponInductionGun*, float))(Il2CppBase() + 0x3A55A6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetThrowWeaponFireStateValue_BR(bool P0) {
		return ((T (*)(WeaponInductionGun*, bool))(Il2CppBase() + 0x3A55A74))(this, P0);
	}

};

}
