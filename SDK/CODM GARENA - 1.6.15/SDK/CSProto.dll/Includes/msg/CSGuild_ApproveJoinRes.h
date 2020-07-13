#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildApproveJoinRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ApproveJoinRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _req_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_agree() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildApproveJoinRes*))(Il2CppBase() + 0x51DA3A4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildApproveJoinRes*, int32_t))(Il2CppBase() + 0x51DA3AC))(this, value);
	}
	template <typename T = uint64_t> T get_req_player_id() {
		return ((T (*)(CSGuildApproveJoinRes*))(Il2CppBase() + 0x51DA3B4))(this);
	}
	template <typename T = void> T set_req_player_id(uint64_t value) {
		return ((T (*)(CSGuildApproveJoinRes*, uint64_t))(Il2CppBase() + 0x51DA3BC))(this, value);
	}
	template <typename T = bool> T get_is_agree() {
		return ((T (*)(CSGuildApproveJoinRes*))(Il2CppBase() + 0x51DA3CC))(this);
	}
	template <typename T = void> T set_is_agree(bool value) {
		return ((T (*)(CSGuildApproveJoinRes*, bool))(Il2CppBase() + 0x51DA3D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildApproveJoinRes*, bool))(Il2CppBase() + 0x51DA3DC))(this, createIfMissing);
	}

};

}
