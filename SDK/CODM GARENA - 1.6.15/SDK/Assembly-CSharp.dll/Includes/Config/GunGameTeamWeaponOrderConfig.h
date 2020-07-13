#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GunGameTeamWeaponOrderConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GunGameTeamWeaponOrderConfig"));
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
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x37631BC))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x37631C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Level() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x37631CC))(this);
	}
	template <typename T = void> T set_Level(Il2CppString* value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x37631D4))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x37631DC))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x37631E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponName() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x37631EC))(this);
	}
	template <typename T = void> T set_WeaponName(Il2CppString* value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x37631F4))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_1() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x37631FC))(this);
	}
	template <typename T = void> T set_DefaultAttachment_1(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763204))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_2() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x376320C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_2(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763214))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_3() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x376321C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_3(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763224))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_4() {
		return ((T (*)(GunGameTeamWeaponOrderConfig*))(Il2CppBase() + 0x376322C))(this);
	}
	template <typename T = void> T set_DefaultAttachment_4(int32_t value) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x3763234))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GunGameTeamWeaponOrderConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376323C))(this, bytes, position);
	}

};

}
