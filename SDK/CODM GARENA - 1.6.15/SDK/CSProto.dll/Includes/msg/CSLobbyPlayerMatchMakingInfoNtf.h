#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyPlayerMatchMakingInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyPlayerMatchMakingInfoNtf"));
	}

	template <typename T = int32_t> T& _expired_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _playlist_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_expired_time() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B740))(this);
	}
	template <typename T = void> T set_expired_time(int32_t value) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, int32_t))(Il2CppBase() + 0x513B748))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_info() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B750))(this);
	}
	template <typename T = int32_t> T get_service_module() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B758))(this);
	}
	template <typename T = void> T set_service_module(int32_t value) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, int32_t))(Il2CppBase() + 0x513B760))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B768))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, uint32_t))(Il2CppBase() + 0x513B770))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B778))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, int32_t))(Il2CppBase() + 0x513B780))(this, value);
	}
	template <typename T = int32_t> T get_playlist_id() {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*))(Il2CppBase() + 0x513B788))(this);
	}
	template <typename T = void> T set_playlist_id(int32_t value) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, int32_t))(Il2CppBase() + 0x513B790))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyPlayerMatchMakingInfoNtf*, bool))(Il2CppBase() + 0x513B798))(this, createIfMissing);
	}

};

}
