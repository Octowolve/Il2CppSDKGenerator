#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ChamberWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ChamberWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& ChamberBulletHud() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& lastChamberBulletNum() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& lastChamberClipAmmoNum() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C66058))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C662D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C66658))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWeaponInfo() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C667F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C66800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChamberWeaponBtnView*))(Il2CppBase() + 0x3C66808))(this);
	}

};

}
