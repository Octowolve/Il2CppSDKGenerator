#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CsWorkshopEntranceConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CsWorkshopEntranceConf"));
	}

	template <typename T = uint32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _emode_category_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _playlist_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _instance_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _main_push_priority() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _loc_bubble_desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _icon_sprite_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _icon_cdn_path() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _locid_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _locid_desc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _sprite_name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _cdn_path() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _start_timestamp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _end_timestamp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _mode_detail_type() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _mp_mode_detail_type() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& _loc_mode_detail_desc() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _mode_detail_sprite_name() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& _mode_detail_cdn_path() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _main_push_sprite_name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& _main_push_cdn_path() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = uint32_t> T get_index() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7238))(this);
	}
	template <typename T = void> T set_index(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7240))(this, value);
	}
	template <typename T = uint32_t> T get_emode_category_type() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7248))(this);
	}
	template <typename T = void> T set_emode_category_type(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7250))(this, value);
	}
	template <typename T = uint32_t> T get_playlist_id() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7258))(this);
	}
	template <typename T = void> T set_playlist_id(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7260))(this, value);
	}
	template <typename T = uint32_t> T get_instance_id() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7268))(this);
	}
	template <typename T = void> T set_instance_id(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7270))(this, value);
	}
	template <typename T = uint64_t> T get_map_id() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7278))(this);
	}
	template <typename T = void> T set_map_id(uint64_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint64_t))(Il2CppBase() + 0x51B7280))(this, value);
	}
	template <typename T = uint32_t> T get_main_push_priority() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7290))(this);
	}
	template <typename T = void> T set_main_push_priority(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7298))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_bubble_desc() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72A0))(this);
	}
	template <typename T = void> T set_loc_bubble_desc(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_icon_sprite_name() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72B0))(this);
	}
	template <typename T = void> T set_icon_sprite_name(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_icon_cdn_path() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72C0))(this);
	}
	template <typename T = void> T set_icon_cdn_path(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_locid_name() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72D0))(this);
	}
	template <typename T = void> T set_locid_name(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_locid_desc() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72E0))(this);
	}
	template <typename T = void> T set_locid_desc(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_sprite_name() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B72F0))(this);
	}
	template <typename T = void> T set_sprite_name(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B72F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_cdn_path() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7300))(this);
	}
	template <typename T = void> T set_cdn_path(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7308))(this, value);
	}
	template <typename T = uint32_t> T get_start_timestamp() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7310))(this);
	}
	template <typename T = void> T set_start_timestamp(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7318))(this, value);
	}
	template <typename T = uint32_t> T get_end_timestamp() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7320))(this);
	}
	template <typename T = void> T set_end_timestamp(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7328))(this, value);
	}
	template <typename T = uint32_t> T get_mode_detail_type() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7330))(this);
	}
	template <typename T = void> T set_mode_detail_type(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7338))(this, value);
	}
	template <typename T = uint32_t> T get_mp_mode_detail_type() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7340))(this);
	}
	template <typename T = void> T set_mp_mode_detail_type(uint32_t value) {
		return ((T (*)(CsWorkshopEntranceConf*, uint32_t))(Il2CppBase() + 0x51B7348))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_mode_detail_desc() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7350))(this);
	}
	template <typename T = void> T set_loc_mode_detail_desc(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7358))(this, value);
	}
	template <typename T = Il2CppString*> T get_mode_detail_sprite_name() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7360))(this);
	}
	template <typename T = void> T set_mode_detail_sprite_name(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7368))(this, value);
	}
	template <typename T = Il2CppString*> T get_mode_detail_cdn_path() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7370))(this);
	}
	template <typename T = void> T set_mode_detail_cdn_path(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7378))(this, value);
	}
	template <typename T = Il2CppString*> T get_main_push_sprite_name() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7380))(this);
	}
	template <typename T = void> T set_main_push_sprite_name(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7388))(this, value);
	}
	template <typename T = Il2CppString*> T get_main_push_cdn_path() {
		return ((T (*)(CsWorkshopEntranceConf*))(Il2CppBase() + 0x51B7390))(this);
	}
	template <typename T = void> T set_main_push_cdn_path(Il2CppString* value) {
		return ((T (*)(CsWorkshopEntranceConf*, Il2CppString*))(Il2CppBase() + 0x51B7398))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CsWorkshopEntranceConf*, bool))(Il2CppBase() + 0x51B73A0))(this, createIfMissing);
	}

};

}
