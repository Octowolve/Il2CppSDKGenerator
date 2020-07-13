#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SniperOnlyWeaponOrderConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SniperOnlyWeaponOrderConfig"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DefaultAttachment_1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DefaultAttachment_2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DefaultAttachment_3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DefaultAttachment_4() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1DD0))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1DD8))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1DE0))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1DE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponName() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1DF0))(this);
	}
	template <typename T = void> T set_WeaponName(Il2CppString* value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x30E1DF8))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_1() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1E00))(this);
	}
	template <typename T = void> T set_DefaultAttachment_1(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1E08))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_2() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1E10))(this);
	}
	template <typename T = void> T set_DefaultAttachment_2(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1E18))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_3() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1E20))(this);
	}
	template <typename T = void> T set_DefaultAttachment_3(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1E28))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_4() {
		return ((T (*)(SniperOnlyWeaponOrderConfig*))(Il2CppBase() + 0x30E1E30))(this);
	}
	template <typename T = void> T set_DefaultAttachment_4(int32_t value) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x30E1E38))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SniperOnlyWeaponOrderConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E1E40))(this, bytes, position);
	}

};

}
