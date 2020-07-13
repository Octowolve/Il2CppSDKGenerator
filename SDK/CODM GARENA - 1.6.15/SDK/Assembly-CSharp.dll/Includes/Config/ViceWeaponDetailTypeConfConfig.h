#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ViceWeaponDetailTypeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ViceWeaponDetailTypeConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
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
		return ((T (*)(ViceWeaponDetailTypeConfConfig*))(Il2CppBase() + 0x30F2088))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*))(Il2CppBase() + 0x30F2128))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*, uint32_t))(Il2CppBase() + 0x30F2130))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*))(Il2CppBase() + 0x30F2138))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*, int32_t))(Il2CppBase() + 0x30F2140))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*))(Il2CppBase() + 0x30F2148))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F2150))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ViceWeaponDetailTypeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F2158))(this, bytes, position);
	}

};

}
