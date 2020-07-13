#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SIWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SIWeapon"));
	}

	template <typename T = int32_t> T& mWeaponLevel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mWeaponExp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_WeaponConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_WeaponLevel() {
		return ((T (*)(SIWeapon*))(Il2CppBase() + 0x3925CE8))(this);
	}
	template <typename T = void> T set_WeaponLevel(int32_t value) {
		return ((T (*)(SIWeapon*, int32_t))(Il2CppBase() + 0x3932028))(this, value);
	}
	template <typename T = int32_t> T get_WeaponExp() {
		return ((T (*)(SIWeapon*))(Il2CppBase() + 0x3925CF0))(this);
	}
	template <typename T = void> T set_WeaponExp(int32_t value) {
		return ((T (*)(SIWeapon*, int32_t))(Il2CppBase() + 0x3932030))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponConfig() {
		return ((T (*)(SIWeapon*))(Il2CppBase() + 0x3932038))(this);
	}
	template <typename T = void> T CopyWeapon(uintptr_t item) {
		return ((T (*)(SIWeapon*, uintptr_t))(Il2CppBase() + 0x3932128))(this, item);
	}
	template <typename T = void> T SetData(uintptr_t fireArmData) {
		return ((T (*)(SIWeapon*, uintptr_t))(Il2CppBase() + 0x3925BA0))(this, fireArmData);
	}

};

}
