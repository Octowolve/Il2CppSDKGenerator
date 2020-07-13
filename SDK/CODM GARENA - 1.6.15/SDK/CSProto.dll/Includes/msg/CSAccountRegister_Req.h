#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountRegisterReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountRegister_Req"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _game_nick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _client_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _core_user_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _picture_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _frame_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _is_hard() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _install_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _session_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _choose_country_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_game_nick() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x517037C))(this);
	}
	template <typename T = void> T set_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountRegisterReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170384))(this, value);
	}
	template <typename T = uintptr_t> T get_client_info() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x517038C))(this);
	}
	template <typename T = void> T set_client_info(uintptr_t value) {
		return ((T (*)(CSAccountRegisterReq*, uintptr_t))(Il2CppBase() + 0x5170394))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_core_user_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x517039C))(this);
	}
	template <typename T = void> T set_core_user_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountRegisterReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51703A4))(this, value);
	}
	template <typename T = uint32_t> T get_picture_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703AC))(this);
	}
	template <typename T = void> T set_picture_id(uint32_t value) {
		return ((T (*)(CSAccountRegisterReq*, uint32_t))(Il2CppBase() + 0x51703B4))(this, value);
	}
	template <typename T = uint32_t> T get_frame_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703BC))(this);
	}
	template <typename T = void> T set_frame_id(uint32_t value) {
		return ((T (*)(CSAccountRegisterReq*, uint32_t))(Il2CppBase() + 0x51703C4))(this, value);
	}
	template <typename T = int32_t> T get_is_hard() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703CC))(this);
	}
	template <typename T = void> T set_is_hard(int32_t value) {
		return ((T (*)(CSAccountRegisterReq*, int32_t))(Il2CppBase() + 0x51703D4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_install_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703DC))(this);
	}
	template <typename T = void> T set_install_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountRegisterReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51703E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_session_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703EC))(this);
	}
	template <typename T = void> T set_session_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountRegisterReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51703F4))(this, value);
	}
	template <typename T = int32_t> T get_choose_country_id() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x51703FC))(this);
	}
	template <typename T = void> T set_choose_country_id(int32_t value) {
		return ((T (*)(CSAccountRegisterReq*, int32_t))(Il2CppBase() + 0x5170404))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSAccountRegisterReq*))(Il2CppBase() + 0x517040C))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSAccountRegisterReq*, int32_t))(Il2CppBase() + 0x5170414))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountRegisterReq*, bool))(Il2CppBase() + 0x517041C))(this, createIfMissing);
	}

};

}
