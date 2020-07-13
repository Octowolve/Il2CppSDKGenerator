#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponPartComposeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponPartComposeConfig"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& DisableBatch() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GripAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MagAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& StoAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& RaiAssetID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& BarrelAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BipAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& IroDownAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& IroUpAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& IroUpRightHandAssetID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& IroDownRightHandAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& MuzzleAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ForAssetID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PendentAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F93D4))(this);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9474))(this);
	}
	template <typename T = void> T set_AssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F947C))(this, value);
	}
	template <typename T = bool> T get_DisableBatch() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9484))(this);
	}
	template <typename T = void> T set_DisableBatch(bool value) {
		return ((T (*)(WeaponPartComposeConfig*, bool))(Il2CppBase() + 0x30F948C))(this, value);
	}
	template <typename T = int32_t> T get_GripAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9494))(this);
	}
	template <typename T = void> T set_GripAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F949C))(this, value);
	}
	template <typename T = int32_t> T get_GuideAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94A4))(this);
	}
	template <typename T = void> T set_GuideAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94AC))(this, value);
	}
	template <typename T = int32_t> T get_MagAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94B4))(this);
	}
	template <typename T = void> T set_MagAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94BC))(this, value);
	}
	template <typename T = int32_t> T get_StoAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94C4))(this);
	}
	template <typename T = void> T set_StoAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94CC))(this, value);
	}
	template <typename T = int32_t> T get_RaiAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94D4))(this);
	}
	template <typename T = void> T set_RaiAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94DC))(this, value);
	}
	template <typename T = int32_t> T get_BarrelAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94E4))(this);
	}
	template <typename T = void> T set_BarrelAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94EC))(this, value);
	}
	template <typename T = int32_t> T get_BipAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F94F4))(this);
	}
	template <typename T = void> T set_BipAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F94FC))(this, value);
	}
	template <typename T = int32_t> T get_IroDownAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9504))(this);
	}
	template <typename T = void> T set_IroDownAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F950C))(this, value);
	}
	template <typename T = int32_t> T get_IroUpAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9514))(this);
	}
	template <typename T = void> T set_IroUpAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F951C))(this, value);
	}
	template <typename T = int32_t> T get_IroUpRightHandAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9524))(this);
	}
	template <typename T = void> T set_IroUpRightHandAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F952C))(this, value);
	}
	template <typename T = int32_t> T get_IroDownRightHandAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9534))(this);
	}
	template <typename T = void> T set_IroDownRightHandAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F953C))(this, value);
	}
	template <typename T = int32_t> T get_MuzzleAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9544))(this);
	}
	template <typename T = void> T set_MuzzleAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F954C))(this, value);
	}
	template <typename T = int32_t> T get_ForAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9554))(this);
	}
	template <typename T = void> T set_ForAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F955C))(this, value);
	}
	template <typename T = int32_t> T get_PendentAssetID() {
		return ((T (*)(WeaponPartComposeConfig*))(Il2CppBase() + 0x30F9564))(this);
	}
	template <typename T = void> T set_PendentAssetID(int32_t value) {
		return ((T (*)(WeaponPartComposeConfig*, int32_t))(Il2CppBase() + 0x30F956C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponPartComposeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F9574))(this, bytes, position);
	}

};

}
