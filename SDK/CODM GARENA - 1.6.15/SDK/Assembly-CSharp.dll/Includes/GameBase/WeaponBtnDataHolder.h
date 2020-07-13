#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponBtnDataHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponBtnDataHolder"));
	}

	template <typename T = uintptr_t> T& BtnBoxcollider() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& WeaponActorID() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& WeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C57854))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C57860))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C579E8))(this);
	}
	template <typename T = void> T OnWeaponBtnClick(uintptr_t obj, bool state) {
		return ((T (*)(WeaponBtnDataHolder*, uintptr_t, bool))(Il2CppBase() + 0x1C56EB0))(this, obj, state);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C57A8C))(this);
	}
	template <typename T = void> T SetBtnActive(bool isShow) {
		return ((T (*)(WeaponBtnDataHolder*, bool))(Il2CppBase() + 0x1C58430))(this, isShow);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C5854C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(WeaponBtnDataHolder*))(Il2CppBase() + 0x1C58554))(this);
	}

};

}
