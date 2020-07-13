#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildCreateGuildReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_CreateGuildReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _join_condition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_slogan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _guild_label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _local() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_bulletin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA5C0))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA5C8))(this, value);
	}
	template <typename T = uintptr_t> T get_join_condition() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA5D0))(this);
	}
	template <typename T = void> T set_join_condition(uintptr_t value) {
		return ((T (*)(CSGuildCreateGuildReq*, uintptr_t))(Il2CppBase() + 0x51DA5D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_icon() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA5E0))(this);
	}
	template <typename T = void> T set_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA5E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_slogan() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA5F0))(this);
	}
	template <typename T = void> T set_guild_slogan(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA5F8))(this, value);
	}
	template <typename T = uint32_t> T get_guild_label() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA600))(this);
	}
	template <typename T = void> T set_guild_label(uint32_t value) {
		return ((T (*)(CSGuildCreateGuildReq*, uint32_t))(Il2CppBase() + 0x51DA608))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_local() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA610))(this);
	}
	template <typename T = void> T set_local(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA618))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_bulletin() {
		return ((T (*)(CSGuildCreateGuildReq*))(Il2CppBase() + 0x51DA620))(this);
	}
	template <typename T = void> T set_guild_bulletin(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA628))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildCreateGuildReq*, bool))(Il2CppBase() + 0x51DA630))(this, createIfMissing);
	}

};

}
