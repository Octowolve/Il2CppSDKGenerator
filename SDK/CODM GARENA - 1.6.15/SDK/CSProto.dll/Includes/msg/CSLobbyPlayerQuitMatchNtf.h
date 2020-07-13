#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyPlayerQuitMatchNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyPlayerQuitMatchNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _match_result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyPlayerQuitMatchNtf*))(Il2CppBase() + 0x513B7B4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyPlayerQuitMatchNtf*, uint64_t))(Il2CppBase() + 0x513B7BC))(this, value);
	}
	template <typename T = int32_t> T get_match_result() {
		return ((T (*)(CSLobbyPlayerQuitMatchNtf*))(Il2CppBase() + 0x513B7CC))(this);
	}
	template <typename T = void> T set_match_result(int32_t value) {
		return ((T (*)(CSLobbyPlayerQuitMatchNtf*, int32_t))(Il2CppBase() + 0x513B7D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyPlayerQuitMatchNtf*, bool))(Il2CppBase() + 0x513B7DC))(this, createIfMissing);
	}

};

}
