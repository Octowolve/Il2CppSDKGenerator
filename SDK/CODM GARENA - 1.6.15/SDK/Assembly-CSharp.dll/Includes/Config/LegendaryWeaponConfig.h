#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LegendaryWeaponConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LegendaryWeaponConfig"));
	}

	template <typename T = uint32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ShopBackgroundAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& ReceiveBackgroundAssetID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ShopLightAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ReceiveLightAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OverrideCameraAnimations() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ShowMatinee() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376EBD0))(this);
	}
	template <typename T = uint32_t> T get_WeaponID() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376EC70))(this);
	}
	template <typename T = void> T set_WeaponID(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376EC78))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376EC80))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(LegendaryWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x376EC88))(this, value);
	}
	template <typename T = uint32_t> T get_ShopBackgroundAssetID() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376EC90))(this);
	}
	template <typename T = void> T set_ShopBackgroundAssetID(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376EC98))(this, value);
	}
	template <typename T = uint32_t> T get_ReceiveBackgroundAssetID() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376ECA0))(this);
	}
	template <typename T = void> T set_ReceiveBackgroundAssetID(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376ECA8))(this, value);
	}
	template <typename T = uint32_t> T get_ShopLightAssetID() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376ECB0))(this);
	}
	template <typename T = void> T set_ShopLightAssetID(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376ECB8))(this, value);
	}
	template <typename T = uint32_t> T get_ReceiveLightAssetID() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376ECC0))(this);
	}
	template <typename T = void> T set_ReceiveLightAssetID(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376ECC8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OverrideCameraAnimations() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376ECD0))(this);
	}
	template <typename T = void> T set_OverrideCameraAnimations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LegendaryWeaponConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x376ECD8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowMatinee() {
		return ((T (*)(LegendaryWeaponConfig*))(Il2CppBase() + 0x376ECE0))(this);
	}
	template <typename T = void> T set_ShowMatinee(uint32_t value) {
		return ((T (*)(LegendaryWeaponConfig*, uint32_t))(Il2CppBase() + 0x376ECE8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LegendaryWeaponConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376ECF0))(this, bytes, position);
	}

};

}
