#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponPartUIComposeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponPartUIComposeConfig"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GripAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MagAssetID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& StoAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& RaiAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BarrelAssetID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ForAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MuzzleAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SightAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SraAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& BipAssetID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& IroAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& IroDownAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PendentAssetID() {
		return *(T*)((uintptr_t)this + 0x44);
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
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F98D4))(this);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9974))(this);
	}
	template <typename T = void> T set_AssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F997C))(this, value);
	}
	template <typename T = int32_t> T get_GripAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9984))(this);
	}
	template <typename T = void> T set_GripAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F998C))(this, value);
	}
	template <typename T = int32_t> T get_GuideAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9994))(this);
	}
	template <typename T = void> T set_GuideAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F999C))(this, value);
	}
	template <typename T = int32_t> T get_MagAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99A4))(this);
	}
	template <typename T = void> T set_MagAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99AC))(this, value);
	}
	template <typename T = int32_t> T get_StoAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99B4))(this);
	}
	template <typename T = void> T set_StoAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99BC))(this, value);
	}
	template <typename T = int32_t> T get_RaiAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99C4))(this);
	}
	template <typename T = void> T set_RaiAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99CC))(this, value);
	}
	template <typename T = int32_t> T get_BarrelAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99D4))(this);
	}
	template <typename T = void> T set_BarrelAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99DC))(this, value);
	}
	template <typename T = int32_t> T get_ForAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99E4))(this);
	}
	template <typename T = void> T set_ForAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99EC))(this, value);
	}
	template <typename T = int32_t> T get_MuzzleAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F99F4))(this);
	}
	template <typename T = void> T set_MuzzleAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F99FC))(this, value);
	}
	template <typename T = int32_t> T get_SightAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A04))(this);
	}
	template <typename T = void> T set_SightAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A0C))(this, value);
	}
	template <typename T = int32_t> T get_SraAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A14))(this);
	}
	template <typename T = void> T set_SraAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A1C))(this, value);
	}
	template <typename T = int32_t> T get_BipAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A24))(this);
	}
	template <typename T = void> T set_BipAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A2C))(this, value);
	}
	template <typename T = int32_t> T get_IroAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A34))(this);
	}
	template <typename T = void> T set_IroAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A3C))(this, value);
	}
	template <typename T = int32_t> T get_IroDownAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A44))(this);
	}
	template <typename T = void> T set_IroDownAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A4C))(this, value);
	}
	template <typename T = int32_t> T get_PendentAssetID() {
		return ((T (*)(WeaponPartUIComposeConfig*))(Il2CppBase() + 0x30F9A54))(this);
	}
	template <typename T = void> T set_PendentAssetID(int32_t value) {
		return ((T (*)(WeaponPartUIComposeConfig*, int32_t))(Il2CppBase() + 0x30F9A5C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponPartUIComposeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F9A64))(this, bytes, position);
	}

};

}
