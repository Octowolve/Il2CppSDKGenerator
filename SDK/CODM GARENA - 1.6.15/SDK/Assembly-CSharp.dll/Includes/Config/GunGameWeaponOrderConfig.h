#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GunGameWeaponOrderConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GunGameWeaponOrderConfig"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DefaultAttachment_1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DefaultAttachment_2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DefaultAttachment_3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DefaultAttachment_4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x37634DC))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x37634E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Level() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x37634EC))(this);
	}
	template <typename T = void> T set_Level(Il2CppString* value) {
		return ((T (*)(GunGameWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x37634F4))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x37634FC))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763504))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponName() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x376350C))(this);
	}
	template <typename T = void> T set_WeaponName(Il2CppString* value) {
		return ((T (*)(GunGameWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x3763514))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_1() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x376351C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_1(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763524))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_2() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x376352C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_2(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763534))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_3() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x376353C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_3(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763544))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_4() {
		return ((T (*)(GunGameWeaponOrderConfig*))(Il2CppBase() + 0x376354C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_4(int32_t value) {
		return ((T (*)(GunGameWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763554))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GunGameWeaponOrderConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376355C))(this, bytes, position);
	}

};

}
