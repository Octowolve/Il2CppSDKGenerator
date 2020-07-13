#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Grcache2GroupRoomHeartBeatNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Grcache2GroupRoomHeartBeat_Ntf"));
	}

	template <typename T = uint32_t> T& _grcache_server_busid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _ticket_cache_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _disable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _ip_addr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_grcache_server_busid() {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*))(Il2CppBase() + 0x50CDB38))(this);
	}
	template <typename T = void> T set_grcache_server_busid(uint32_t value) {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*, uint32_t))(Il2CppBase() + 0x50CDB40))(this, value);
	}
	template <typename T = int32_t> T get_ticket_cache_count() {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*))(Il2CppBase() + 0x50CDB48))(this);
	}
	template <typename T = void> T set_ticket_cache_count(int32_t value) {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*, int32_t))(Il2CppBase() + 0x50CDB50))(this, value);
	}
	template <typename T = bool> T get_disable() {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*))(Il2CppBase() + 0x50CDB58))(this);
	}
	template <typename T = void> T set_disable(bool value) {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*, bool))(Il2CppBase() + 0x50CDB60))(this, value);
	}
	template <typename T = Il2CppString*> T get_ip_addr() {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*))(Il2CppBase() + 0x50CDB68))(this);
	}
	template <typename T = void> T set_ip_addr(Il2CppString* value) {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*, Il2CppString*))(Il2CppBase() + 0x50CDB70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Grcache2GroupRoomHeartBeatNtf*, bool))(Il2CppBase() + 0x50CDB78))(this, createIfMissing);
	}

};

}
