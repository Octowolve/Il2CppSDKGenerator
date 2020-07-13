#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVPGunStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVPGunStatis"));
	}

	template <typename T = int32_t> T& _weapon_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& _optic_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _times_be_kill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _times_head_shot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _damage_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _number_shot_bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _number_shot_bullet_hit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _number_shot_bullet_hit_head() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _times_kill_penetrate_wall() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _use_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _use_time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _times_shot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _times_hit_target() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _gained_exp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<int32_t>*> T& _attachments() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _skill() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint64_t> T& _weapon_gid() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _time_add_exp() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _win_add_exp() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _kill_add_exp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _add_exp() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint32_t> T& _old_exp() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _new_level() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _new_exp() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& _buf_add_exp() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _reach_max_level() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _add_actv_buff_exp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = int32_t> T get_weapon_type() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070170))(this);
	}
	template <typename T = void> T set_weapon_type(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070178))(this, value);
	}
	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070180))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070188))(this, value);
	}
	template <typename T = int64_t> T get_optic_id() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070190))(this);
	}
	template <typename T = void> T set_optic_id(int64_t value) {
		return ((T (*)(PVPGunStatis*, int64_t))(Il2CppBase() + 0x5070198))(this, value);
	}
	template <typename T = int32_t> T get_times_kill() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50701A8))(this);
	}
	template <typename T = void> T set_times_kill(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x50701B0))(this, value);
	}
	template <typename T = int32_t> T get_times_be_kill() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50701B8))(this);
	}
	template <typename T = void> T set_times_be_kill(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x50701C0))(this, value);
	}
	template <typename T = int32_t> T get_times_head_shot() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50701C8))(this);
	}
	template <typename T = void> T set_times_head_shot(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x50701D0))(this, value);
	}
	template <typename T = int64_t> T get_damage_value() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50701D8))(this);
	}
	template <typename T = void> T set_damage_value(int64_t value) {
		return ((T (*)(PVPGunStatis*, int64_t))(Il2CppBase() + 0x50701E0))(this, value);
	}
	template <typename T = int32_t> T get_number_shot_bullet() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50701F0))(this);
	}
	template <typename T = void> T set_number_shot_bullet(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x50701F8))(this, value);
	}
	template <typename T = int32_t> T get_number_shot_bullet_hit() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070200))(this);
	}
	template <typename T = void> T set_number_shot_bullet_hit(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070208))(this, value);
	}
	template <typename T = int32_t> T get_number_shot_bullet_hit_head() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070210))(this);
	}
	template <typename T = void> T set_number_shot_bullet_hit_head(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070218))(this, value);
	}
	template <typename T = int32_t> T get_times_kill_penetrate_wall() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070220))(this);
	}
	template <typename T = void> T set_times_kill_penetrate_wall(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070228))(this, value);
	}
	template <typename T = int32_t> T get_use_count() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070230))(this);
	}
	template <typename T = void> T set_use_count(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070238))(this, value);
	}
	template <typename T = int32_t> T get_use_time() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070240))(this);
	}
	template <typename T = void> T set_use_time(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070248))(this, value);
	}
	template <typename T = int32_t> T get_times_shot() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070250))(this);
	}
	template <typename T = void> T set_times_shot(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070258))(this, value);
	}
	template <typename T = int32_t> T get_times_hit_target() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070260))(this);
	}
	template <typename T = void> T set_times_hit_target(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070268))(this, value);
	}
	template <typename T = int32_t> T get_gained_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070270))(this);
	}
	template <typename T = void> T set_gained_exp(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070278))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_attachments() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070280))(this);
	}
	template <typename T = int32_t> T get_skill() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070288))(this);
	}
	template <typename T = void> T set_skill(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070290))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_gid() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070298))(this);
	}
	template <typename T = void> T set_weapon_gid(uint64_t value) {
		return ((T (*)(PVPGunStatis*, uint64_t))(Il2CppBase() + 0x50702A0))(this, value);
	}
	template <typename T = uint32_t> T get_time_add_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50702B0))(this);
	}
	template <typename T = void> T set_time_add_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x50702B8))(this, value);
	}
	template <typename T = uint32_t> T get_win_add_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50702C0))(this);
	}
	template <typename T = void> T set_win_add_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x50702C8))(this, value);
	}
	template <typename T = uint32_t> T get_kill_add_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50702D0))(this);
	}
	template <typename T = void> T set_kill_add_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x50702D8))(this, value);
	}
	template <typename T = uint32_t> T get_add_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50702E0))(this);
	}
	template <typename T = void> T set_add_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x50702E8))(this, value);
	}
	template <typename T = uint32_t> T get_old_level() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x50702F0))(this);
	}
	template <typename T = void> T set_old_level(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x50702F8))(this, value);
	}
	template <typename T = uint32_t> T get_old_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070300))(this);
	}
	template <typename T = void> T set_old_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x5070308))(this, value);
	}
	template <typename T = int32_t> T get_new_level() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070310))(this);
	}
	template <typename T = void> T set_new_level(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070318))(this, value);
	}
	template <typename T = int32_t> T get_new_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070320))(this);
	}
	template <typename T = void> T set_new_exp(int32_t value) {
		return ((T (*)(PVPGunStatis*, int32_t))(Il2CppBase() + 0x5070328))(this, value);
	}
	template <typename T = uint32_t> T get_buf_add_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070330))(this);
	}
	template <typename T = void> T set_buf_add_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x5070338))(this, value);
	}
	template <typename T = bool> T get_reach_max_level() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070340))(this);
	}
	template <typename T = void> T set_reach_max_level(bool value) {
		return ((T (*)(PVPGunStatis*, bool))(Il2CppBase() + 0x5070348))(this, value);
	}
	template <typename T = uint32_t> T get_add_actv_buff_exp() {
		return ((T (*)(PVPGunStatis*))(Il2CppBase() + 0x5070350))(this);
	}
	template <typename T = void> T set_add_actv_buff_exp(uint32_t value) {
		return ((T (*)(PVPGunStatis*, uint32_t))(Il2CppBase() + 0x5070358))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVPGunStatis*, bool))(Il2CppBase() + 0x5070360))(this, createIfMissing);
	}

};

}
