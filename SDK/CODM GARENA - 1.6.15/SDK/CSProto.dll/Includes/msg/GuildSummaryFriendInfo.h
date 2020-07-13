#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildSummaryFriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildSummaryFriendInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_nick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D008C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GuildSummaryFriendInfo*, uint64_t))(Il2CppBase() + 0x50D0094))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D00A4))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildSummaryFriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D00AC))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D00B4))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(GuildSummaryFriendInfo*, uintptr_t))(Il2CppBase() + 0x50D00BC))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D00C4))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(GuildSummaryFriendInfo*, uint32_t))(Il2CppBase() + 0x50D00CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_nick() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D00D4))(this);
	}
	template <typename T = void> T set_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildSummaryFriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D00DC))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(GuildSummaryFriendInfo*))(Il2CppBase() + 0x50D00E4))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(GuildSummaryFriendInfo*, int32_t))(Il2CppBase() + 0x50D00EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildSummaryFriendInfo*, bool))(Il2CppBase() + 0x50D00F4))(this, createIfMissing);
	}

};

}
