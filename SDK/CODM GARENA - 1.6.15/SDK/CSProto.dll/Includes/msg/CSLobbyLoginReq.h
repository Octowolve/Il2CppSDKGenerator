#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyLoginReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyLoginReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _pay_token() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _pf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _session_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _session_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_reconnect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _client_info() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _king_core_user_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _king_session_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _king_install_id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _king_delt_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _server_url() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF10))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyLoginReq*, uint64_t))(Il2CppBase() + 0x513AF18))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF28))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(CSLobbyLoginReq*, int32_t))(Il2CppBase() + 0x513AF30))(this, value);
	}
	template <typename T = Il2CppString*> T get_pay_token() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF38))(this);
	}
	template <typename T = void> T set_pay_token(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AF40))(this, value);
	}
	template <typename T = Il2CppString*> T get_pf() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF48))(this);
	}
	template <typename T = void> T set_pf(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AF50))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF58))(this);
	}
	template <typename T = void> T set_session_id(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AF60))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_type() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF68))(this);
	}
	template <typename T = void> T set_session_type(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AF70))(this, value);
	}
	template <typename T = bool> T get_is_reconnect() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF78))(this);
	}
	template <typename T = void> T set_is_reconnect(bool value) {
		return ((T (*)(CSLobbyLoginReq*, bool))(Il2CppBase() + 0x513AF80))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF88))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(CSLobbyLoginReq*, int32_t))(Il2CppBase() + 0x513AF90))(this, value);
	}
	template <typename T = uintptr_t> T get_client_info() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AF98))(this);
	}
	template <typename T = void> T set_client_info(uintptr_t value) {
		return ((T (*)(CSLobbyLoginReq*, uintptr_t))(Il2CppBase() + 0x513AFA0))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFA8))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(CSLobbyLoginReq*, int32_t))(Il2CppBase() + 0x513AFB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_core_user_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFB8))(this);
	}
	template <typename T = void> T set_king_core_user_id(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AFC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_session_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFC8))(this);
	}
	template <typename T = void> T set_king_session_id(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AFD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_install_id() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFD8))(this);
	}
	template <typename T = void> T set_king_install_id(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AFE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_delt_time() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFE8))(this);
	}
	template <typename T = void> T set_king_delt_time(Il2CppString* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppString*))(Il2CppBase() + 0x513AFF0))(this, value);
	}
	template <typename T = uint32_t> T get_language_code() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513AFF8))(this);
	}
	template <typename T = void> T set_language_code(uint32_t value) {
		return ((T (*)(CSLobbyLoginReq*, uint32_t))(Il2CppBase() + 0x513B000))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513B008))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(CSLobbyLoginReq*, bool))(Il2CppBase() + 0x513B010))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513B018))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(CSLobbyLoginReq*, bool))(Il2CppBase() + 0x513B020))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_server_url() {
		return ((T (*)(CSLobbyLoginReq*))(Il2CppBase() + 0x513B028))(this);
	}
	template <typename T = void> T set_server_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyLoginReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x513B030))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyLoginReq*, bool))(Il2CppBase() + 0x513B038))(this, createIfMissing);
	}

};

}
