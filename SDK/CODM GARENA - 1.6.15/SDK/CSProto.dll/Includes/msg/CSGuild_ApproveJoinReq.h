#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildApproveJoinReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ApproveJoinReq"));
	}

	template <typename T = bool> T& _is_agree() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _req_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_is_agree() {
		return ((T (*)(CSGuildApproveJoinReq*))(Il2CppBase() + 0x51DA348))(this);
	}
	template <typename T = void> T set_is_agree(bool value) {
		return ((T (*)(CSGuildApproveJoinReq*, bool))(Il2CppBase() + 0x51DA350))(this, value);
	}
	template <typename T = uint64_t> T get_req_player_id() {
		return ((T (*)(CSGuildApproveJoinReq*))(Il2CppBase() + 0x51DA358))(this);
	}
	template <typename T = void> T set_req_player_id(uint64_t value) {
		return ((T (*)(CSGuildApproveJoinReq*, uint64_t))(Il2CppBase() + 0x51DA360))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildApproveJoinReq*))(Il2CppBase() + 0x51DA370))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildApproveJoinReq*, uint64_t))(Il2CppBase() + 0x51DA378))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildApproveJoinReq*, bool))(Il2CppBase() + 0x51DA388))(this, createIfMissing);
	}

};

}
