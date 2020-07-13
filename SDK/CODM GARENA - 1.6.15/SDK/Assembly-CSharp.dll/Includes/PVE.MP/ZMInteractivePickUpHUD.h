#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZMInteractivePickUpHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZMInteractivePickUpHUD"));
	}

	template <typename T = uintptr_t> T& BtnPickUp() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WeaponSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WeaponNameDesc() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SizeArray() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPickUpProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMInteractivePickUpHUD*))(Il2CppBase() + 0x43628FC))(this);
	}
	template <typename T = void> T OnPickUpButtonClick() {
		return ((T (*)(ZMInteractivePickUpHUD*))(Il2CppBase() + 0x4362A3C))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponName(int32_t finalWeaponId) {
		return ((T (*)(ZMInteractivePickUpHUD*, int32_t))(Il2CppBase() + 0x4362B18))(this, finalWeaponId);
	}
	template <typename T = void> T OnWeaponPickUpProgress(uintptr_t msg) {
		return ((T (*)(ZMInteractivePickUpHUD*, uintptr_t))(Il2CppBase() + 0x435FBBC))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMInteractivePickUpHUD*))(Il2CppBase() + 0x4362D28))(this);
	}

};

}
