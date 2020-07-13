#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyLogoutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyLogoutReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _client_version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _pay_token() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _pf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _session_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _session_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B5B0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyLogoutReq*, uint64_t))(Il2CppBase() + 0x513B5B8))(this, value);
	}
	template <typename T = int32_t> T get_client_version() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B5C8))(this);
	}
	template <typename T = void> T set_client_version(int32_t value) {
		return ((T (*)(CSLobbyLogoutReq*, int32_t))(Il2CppBase() + 0x513B5D0))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B5D8))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(CSLobbyLogoutReq*, int32_t))(Il2CppBase() + 0x513B5E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_pay_token() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B5E8))(this);
	}
	template <typename T = void> T set_pay_token(Il2CppString* value) {
		return ((T (*)(CSLobbyLogoutReq*, Il2CppString*))(Il2CppBase() + 0x513B5F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_pf() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B5F8))(this);
	}
	template <typename T = void> T set_pf(Il2CppString* value) {
		return ((T (*)(CSLobbyLogoutReq*, Il2CppString*))(Il2CppBase() + 0x513B600))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_id() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B608))(this);
	}
	template <typename T = void> T set_session_id(Il2CppString* value) {
		return ((T (*)(CSLobbyLogoutReq*, Il2CppString*))(Il2CppBase() + 0x513B610))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_type() {
		return ((T (*)(CSLobbyLogoutReq*))(Il2CppBase() + 0x513B618))(this);
	}
	template <typename T = void> T set_session_type(Il2CppString* value) {
		return ((T (*)(CSLobbyLogoutReq*, Il2CppString*))(Il2CppBase() + 0x513B620))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyLogoutReq*, bool))(Il2CppBase() + 0x513B628))(this, createIfMissing);
	}

};

}
