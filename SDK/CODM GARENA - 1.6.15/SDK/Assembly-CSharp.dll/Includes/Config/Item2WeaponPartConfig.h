#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class Item2WeaponPartConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "Item2WeaponPartConfig"));
	}

	template <typename T = uintptr_t> T& WeaponPartNameType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WeaponPartName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ConfigFileName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& WeaponAssetGroupID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x37667DC))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x37668E8))(this);
	}
	template <typename T = int32_t> T get_ItemType() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x3766988))(this);
	}
	template <typename T = void> T set_ItemType(int32_t value) {
		return ((T (*)(Item2WeaponPartConfig*, int32_t))(Il2CppBase() + 0x3766990))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponPartName() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x37668E0))(this);
	}
	template <typename T = void> T set_WeaponPartName(Il2CppString* value) {
		return ((T (*)(Item2WeaponPartConfig*, Il2CppString*))(Il2CppBase() + 0x3766998))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigFileName() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x37669A0))(this);
	}
	template <typename T = void> T set_ConfigFileName(Il2CppString* value) {
		return ((T (*)(Item2WeaponPartConfig*, Il2CppString*))(Il2CppBase() + 0x37669A8))(this, value);
	}
	template <typename T = int32_t> T get_WeaponAssetGroupID() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x37669B0))(this);
	}
	template <typename T = void> T set_WeaponAssetGroupID(int32_t value) {
		return ((T (*)(Item2WeaponPartConfig*, int32_t))(Il2CppBase() + 0x37669B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(Item2WeaponPartConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37669C0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(Item2WeaponPartConfig*))(Il2CppBase() + 0x3766B18))(this);
	}

};

}
