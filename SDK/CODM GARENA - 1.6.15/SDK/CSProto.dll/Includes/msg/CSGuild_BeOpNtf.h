#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildBeOpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_BeOpNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _msg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _op_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _caption_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA3F8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildBeOpNtf*, uint64_t))(Il2CppBase() + 0x51DA400))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA410))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildBeOpNtf*, uint64_t))(Il2CppBase() + 0x51DA418))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_msg() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA428))(this);
	}
	template <typename T = void> T set_msg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildBeOpNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA430))(this, value);
	}
	template <typename T = uint32_t> T get_op_type() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA438))(this);
	}
	template <typename T = void> T set_op_type(uint32_t value) {
		return ((T (*)(CSGuildBeOpNtf*, uint32_t))(Il2CppBase() + 0x51DA440))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_caption_name() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA448))(this);
	}
	template <typename T = void> T set_caption_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildBeOpNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA450))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildBeOpNtf*))(Il2CppBase() + 0x51DA458))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildBeOpNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA460))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildBeOpNtf*, bool))(Il2CppBase() + 0x51DA468))(this, createIfMissing);
	}

};

}
