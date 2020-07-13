#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildInviteData"));
	}

	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _invite_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _manager_uin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(GuildInviteData*))(Il2CppBase() + 0x50CFC48))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(GuildInviteData*, uint64_t))(Il2CppBase() + 0x50CFC50))(this, value);
	}
	template <typename T = uint64_t> T get_invite_uin() {
		return ((T (*)(GuildInviteData*))(Il2CppBase() + 0x50CFC60))(this);
	}
	template <typename T = void> T set_invite_uin(uint64_t value) {
		return ((T (*)(GuildInviteData*, uint64_t))(Il2CppBase() + 0x50CFC68))(this, value);
	}
	template <typename T = uint64_t> T get_manager_uin() {
		return ((T (*)(GuildInviteData*))(Il2CppBase() + 0x50CFC78))(this);
	}
	template <typename T = void> T set_manager_uin(uint64_t value) {
		return ((T (*)(GuildInviteData*, uint64_t))(Il2CppBase() + 0x50CFC80))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(GuildInviteData*))(Il2CppBase() + 0x50CFC90))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(GuildInviteData*, uint32_t))(Il2CppBase() + 0x50CFC98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildInviteData*, bool))(Il2CppBase() + 0x50CFCA0))(this, createIfMissing);
	}

};

}
