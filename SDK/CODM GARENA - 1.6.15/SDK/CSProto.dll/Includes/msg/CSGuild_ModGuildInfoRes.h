#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildModGuildInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ModGuildInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _new_join_condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_slogan() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_bulletin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_icon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _new_guild_label() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_sns_group_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_local() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBAD8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildModGuildInfoRes*, int32_t))(Il2CppBase() + 0x51DBAE0))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBAE8))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildModGuildInfoRes*, uint64_t))(Il2CppBase() + 0x51DBAF0))(this, value);
	}
	template <typename T = uintptr_t> T get_new_join_condition() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB00))(this);
	}
	template <typename T = void> T set_new_join_condition(uintptr_t value) {
		return ((T (*)(CSGuildModGuildInfoRes*, uintptr_t))(Il2CppBase() + 0x51DBB08))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_slogan() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB10))(this);
	}
	template <typename T = void> T set_new_guild_slogan(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB18))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_bulletin() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB20))(this);
	}
	template <typename T = void> T set_new_guild_bulletin(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_icon() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB30))(this);
	}
	template <typename T = void> T set_new_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB38))(this, value);
	}
	template <typename T = uint32_t> T get_new_guild_label() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB40))(this);
	}
	template <typename T = void> T set_new_guild_label(uint32_t value) {
		return ((T (*)(CSGuildModGuildInfoRes*, uint32_t))(Il2CppBase() + 0x51DBB48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_sns_group_id() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB50))(this);
	}
	template <typename T = void> T set_new_sns_group_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_local() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB60))(this);
	}
	template <typename T = void> T set_new_guild_local(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB68))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSGuildModGuildInfoRes*))(Il2CppBase() + 0x51DBB70))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBB78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildModGuildInfoRes*, bool))(Il2CppBase() + 0x51DBB80))(this, createIfMissing);
	}

};

}
