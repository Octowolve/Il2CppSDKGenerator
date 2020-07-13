#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ModeOnlyWeaponOrderConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ModeOnlyWeaponOrderConfig"));
	}

	template <typename T = int32_t> T& MatchType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Slot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& GrenadeNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DefaultAttachment_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DefaultAttachment_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& DefaultAttachment_3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& DefaultAttachment_4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA44))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BA4C))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA54))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BA5C))(this, value);
	}
	template <typename T = int32_t> T get_Slot() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA64))(this);
	}
	template <typename T = void> T set_Slot(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BA6C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA74))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BA7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponName() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA84))(this);
	}
	template <typename T = void> T set_WeaponName(Il2CppString* value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, Il2CppString*))(Il2CppBase() + 0x377BA8C))(this, value);
	}
	template <typename T = int32_t> T get_GrenadeNum() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BA94))(this);
	}
	template <typename T = void> T set_GrenadeNum(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BA9C))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_1() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BAA4))(this);
	}
	template <typename T = void> T set_DefaultAttachment_1(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BAAC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_2() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BAB4))(this);
	}
	template <typename T = void> T set_DefaultAttachment_2(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BABC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_3() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BAC4))(this);
	}
	template <typename T = void> T set_DefaultAttachment_3(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BACC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_4() {
		return ((T (*)(ModeOnlyWeaponOrderConfig*))(Il2CppBase() + 0x377BAD4))(this);
	}
	template <typename T = void> T set_DefaultAttachment_4(int32_t value) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, int32_t))(Il2CppBase() + 0x377BADC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ModeOnlyWeaponOrderConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377BAE4))(this, bytes, position);
	}

};

}
