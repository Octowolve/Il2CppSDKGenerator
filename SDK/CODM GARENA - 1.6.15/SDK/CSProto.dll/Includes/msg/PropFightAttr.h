#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropFightAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropFightAttr"));
	}

	template <typename T = int32_t> T& _penetration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _attack_force() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _origin_backup_ammo_amount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _portability() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _reload_speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _shot_spread() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _clip_ammo_amount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _extra_backup_ammo_amount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_penetration() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506ED70))(this);
	}
	template <typename T = void> T set_penetration(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506ED78))(this, value);
	}
	template <typename T = int32_t> T get_attack_force() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506ED80))(this);
	}
	template <typename T = void> T set_attack_force(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506ED88))(this, value);
	}
	template <typename T = int32_t> T get_origin_backup_ammo_amount() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506ED90))(this);
	}
	template <typename T = void> T set_origin_backup_ammo_amount(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506ED98))(this, value);
	}
	template <typename T = int32_t> T get_portability() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506EDA0))(this);
	}
	template <typename T = void> T set_portability(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506EDA8))(this, value);
	}
	template <typename T = int32_t> T get_reload_speed() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506EDB0))(this);
	}
	template <typename T = void> T set_reload_speed(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506EDB8))(this, value);
	}
	template <typename T = int32_t> T get_shot_spread() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506EDC0))(this);
	}
	template <typename T = void> T set_shot_spread(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506EDC8))(this, value);
	}
	template <typename T = int32_t> T get_clip_ammo_amount() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506EDD0))(this);
	}
	template <typename T = void> T set_clip_ammo_amount(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506EDD8))(this, value);
	}
	template <typename T = int32_t> T get_extra_backup_ammo_amount() {
		return ((T (*)(PropFightAttr*))(Il2CppBase() + 0x506EDE0))(this);
	}
	template <typename T = void> T set_extra_backup_ammo_amount(int32_t value) {
		return ((T (*)(PropFightAttr*, int32_t))(Il2CppBase() + 0x506EDE8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropFightAttr*, bool))(Il2CppBase() + 0x506EDF0))(this, createIfMissing);
	}

};

}
