#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackRecommendConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackRecommendConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _recommend_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _game_mode_str() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _play_list_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _loc_title() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _loc_desc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _loc_detail() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _detail_type() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _loc_background() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _cdn_background() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _go_to_button() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070F50))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, uint64_t))(Il2CppBase() + 0x5070F58))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070F68))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5070F70))(this, value);
	}
	template <typename T = int32_t> T get_recommend_id() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070F78))(this);
	}
	template <typename T = void> T set_recommend_id(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5070F80))(this, value);
	}
	template <typename T = Il2CppString*> T get_game_mode_str() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070F88))(this);
	}
	template <typename T = void> T set_game_mode_str(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5070F90))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070F98))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5070FA0))(this, value);
	}
	template <typename T = int32_t> T get_play_list_id() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FA8))(this);
	}
	template <typename T = void> T set_play_list_id(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5070FB0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FB8))(this);
	}
	template <typename T = Il2CppString*> T get_loc_title() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FC0))(this);
	}
	template <typename T = void> T set_loc_title(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5070FC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_desc() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FD0))(this);
	}
	template <typename T = void> T set_loc_desc(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5070FD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_detail() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FE0))(this);
	}
	template <typename T = void> T set_loc_detail(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5070FE8))(this, value);
	}
	template <typename T = int32_t> T get_detail_type() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5070FF0))(this);
	}
	template <typename T = void> T set_detail_type(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5070FF8))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_background() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5071000))(this);
	}
	template <typename T = void> T set_loc_background(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5071008))(this, value);
	}
	template <typename T = Il2CppString*> T get_cdn_background() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5071010))(this);
	}
	template <typename T = void> T set_cdn_background(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5071018))(this, value);
	}
	template <typename T = int32_t> T get_go_to_button() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5071020))(this);
	}
	template <typename T = void> T set_go_to_button(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5071028))(this, value);
	}
	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5071030))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(ResActivityBackRecommendConf*, int32_t))(Il2CppBase() + 0x5071038))(this, value);
	}
	template <typename T = Il2CppString*> T get_map_id() {
		return ((T (*)(ResActivityBackRecommendConf*))(Il2CppBase() + 0x5071040))(this);
	}
	template <typename T = void> T set_map_id(Il2CppString* value) {
		return ((T (*)(ResActivityBackRecommendConf*, Il2CppString*))(Il2CppBase() + 0x5071048))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackRecommendConf*, bool))(Il2CppBase() + 0x5071050))(this, createIfMissing);
	}

};

}
