#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildApplyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildApplyData"));
	}

	template <typename T = uint64_t> T& _req_msg_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _req_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _req_player_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _req_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _req_msg_content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _req_player_level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _req_pic_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _show_ladder_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_nick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _req_player_peak_level() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uint64_t> T get_req_msg_id() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF6E4))(this);
	}
	template <typename T = void> T set_req_msg_id(uint64_t value) {
		return ((T (*)(GuildApplyData*, uint64_t))(Il2CppBase() + 0x50CF6EC))(this, value);
	}
	template <typename T = uint64_t> T get_req_player_id() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF6FC))(this);
	}
	template <typename T = void> T set_req_player_id(uint64_t value) {
		return ((T (*)(GuildApplyData*, uint64_t))(Il2CppBase() + 0x50CF704))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_req_player_name() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF714))(this);
	}
	template <typename T = void> T set_req_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildApplyData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF71C))(this, value);
	}
	template <typename T = uint32_t> T get_req_time() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF724))(this);
	}
	template <typename T = void> T set_req_time(uint32_t value) {
		return ((T (*)(GuildApplyData*, uint32_t))(Il2CppBase() + 0x50CF72C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_req_msg_content() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF734))(this);
	}
	template <typename T = void> T set_req_msg_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildApplyData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF73C))(this, value);
	}
	template <typename T = int32_t> T get_req_player_level() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF744))(this);
	}
	template <typename T = void> T set_req_player_level(int32_t value) {
		return ((T (*)(GuildApplyData*, int32_t))(Il2CppBase() + 0x50CF74C))(this, value);
	}
	template <typename T = uintptr_t> T get_req_pic_info() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF754))(this);
	}
	template <typename T = void> T set_req_pic_info(uintptr_t value) {
		return ((T (*)(GuildApplyData*, uintptr_t))(Il2CppBase() + 0x50CF75C))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF764))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(GuildApplyData*, int32_t))(Il2CppBase() + 0x50CF76C))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF774))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(GuildApplyData*, uint32_t))(Il2CppBase() + 0x50CF77C))(this, value);
	}
	template <typename T = bool> T get_show_ladder_level() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF784))(this);
	}
	template <typename T = void> T set_show_ladder_level(bool value) {
		return ((T (*)(GuildApplyData*, bool))(Il2CppBase() + 0x50CF78C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_nick() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF794))(this);
	}
	template <typename T = void> T set_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildApplyData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CF79C))(this, value);
	}
	template <typename T = int32_t> T get_req_player_peak_level() {
		return ((T (*)(GuildApplyData*))(Il2CppBase() + 0x50CF7A4))(this);
	}
	template <typename T = void> T set_req_player_peak_level(int32_t value) {
		return ((T (*)(GuildApplyData*, int32_t))(Il2CppBase() + 0x50CF7AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildApplyData*, bool))(Il2CppBase() + 0x50CF7B4))(this, createIfMissing);
	}

};

}
