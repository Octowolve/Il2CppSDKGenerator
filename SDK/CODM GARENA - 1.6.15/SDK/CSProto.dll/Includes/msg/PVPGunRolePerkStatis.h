#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVPGunRolePerkStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVPGunRolePerkStatis"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_gid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _role_perk_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _times_head_shot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x5070050))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(PVPGunRolePerkStatis*, int32_t))(Il2CppBase() + 0x5070058))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_gid() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x5070060))(this);
	}
	template <typename T = void> T set_weapon_gid(uint64_t value) {
		return ((T (*)(PVPGunRolePerkStatis*, uint64_t))(Il2CppBase() + 0x5070068))(this, value);
	}
	template <typename T = uint32_t> T get_role_id() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x5070078))(this);
	}
	template <typename T = void> T set_role_id(uint32_t value) {
		return ((T (*)(PVPGunRolePerkStatis*, uint32_t))(Il2CppBase() + 0x5070080))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_role_perk_id() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x5070088))(this);
	}
	template <typename T = int32_t> T get_times_kill() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x5070090))(this);
	}
	template <typename T = void> T set_times_kill(int32_t value) {
		return ((T (*)(PVPGunRolePerkStatis*, int32_t))(Il2CppBase() + 0x5070098))(this, value);
	}
	template <typename T = int32_t> T get_times_head_shot() {
		return ((T (*)(PVPGunRolePerkStatis*))(Il2CppBase() + 0x50700A0))(this);
	}
	template <typename T = void> T set_times_head_shot(int32_t value) {
		return ((T (*)(PVPGunRolePerkStatis*, int32_t))(Il2CppBase() + 0x50700A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVPGunRolePerkStatis*, bool))(Il2CppBase() + 0x50700B0))(this, createIfMissing);
	}

};

}
