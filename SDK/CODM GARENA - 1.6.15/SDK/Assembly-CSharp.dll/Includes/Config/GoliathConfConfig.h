#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GoliathConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GoliathConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& HP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ExplodeMinDamage() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ExplodeMaxDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ExplodeRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ModeId() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649E50))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649EF0))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(GoliathConfConfig*, uint32_t))(Il2CppBase() + 0x4649EF8))(this, value);
	}
	template <typename T = int32_t> T get_HP() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F00))(this);
	}
	template <typename T = void> T set_HP(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F08))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeMinDamage() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F10))(this);
	}
	template <typename T = void> T set_ExplodeMinDamage(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F18))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeMaxDamage() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F20))(this);
	}
	template <typename T = void> T set_ExplodeMaxDamage(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F28))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeRange() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F30))(this);
	}
	template <typename T = void> T set_ExplodeRange(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F38))(this, value);
	}
	template <typename T = int32_t> T get_WeaponId() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F40))(this);
	}
	template <typename T = void> T set_WeaponId(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F48))(this, value);
	}
	template <typename T = int32_t> T get_ModeId() {
		return ((T (*)(GoliathConfConfig*))(Il2CppBase() + 0x4649F50))(this);
	}
	template <typename T = void> T set_ModeId(int32_t value) {
		return ((T (*)(GoliathConfConfig*, int32_t))(Il2CppBase() + 0x4649F58))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GoliathConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4649F60))(this, bytes, position);
	}

};

}
