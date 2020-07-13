#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class WeaponTransformShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "WeaponTransformShield"));
	}

	template <typename T = uintptr_t> T& m_BuildActor() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = bool> T& m_CanBuildHere() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFireButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuildActorLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireButtonViewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_CanBuildHere() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4368))(this);
	}
	template <typename T = bool> T IsFireButtonEnabled() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4370))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4410))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B44B8))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B46F4))(this);
	}
	template <typename T = void> T GetBuildActorLocation(uintptr_t pos, uintptr_t rot) {
		return ((T (*)(WeaponTransformShield*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35B4828))(this, pos, rot);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponTransformShield*, float))(Il2CppBase() + 0x35B49A0))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetFireButtonViewIcon(uintptr_t isGray) {
		return ((T (*)(WeaponTransformShield*, uintptr_t))(Il2CppBase() + 0x35B4B28))(this, isGray);
	}
	template <typename T = bool> T xLuaBaseProxy_IsFireButtonEnabled() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4BDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4BE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponTransformShield*))(Il2CppBase() + 0x35B4BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponTransformShield*, float))(Il2CppBase() + 0x35B4BFC))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetFireButtonViewIcon(uintptr_t P0) {
		return ((T (*)(WeaponTransformShield*, uintptr_t))(Il2CppBase() + 0x35B4C04))(this, P0);
	}

};

}
