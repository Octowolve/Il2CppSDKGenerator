#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyTlogNewGuideNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_Tlog_New_Guide_Ntf"));
	}

	template <typename T = int32_t> T& _step_where() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _step_status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _pract_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _core_user_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _king_session_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _king_install_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _king_delt_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_step_where() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E24))(this);
	}
	template <typename T = void> T set_step_where(int32_t value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, int32_t))(Il2CppBase() + 0x5139E2C))(this, value);
	}
	template <typename T = int32_t> T get_step_status() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E34))(this);
	}
	template <typename T = void> T set_step_status(int32_t value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, int32_t))(Il2CppBase() + 0x5139E3C))(this, value);
	}
	template <typename T = int32_t> T get_pract_mode() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E44))(this);
	}
	template <typename T = void> T set_pract_mode(int32_t value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, int32_t))(Il2CppBase() + 0x5139E4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_data() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E54))(this);
	}
	template <typename T = void> T set_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139E5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_core_user_id() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E64))(this);
	}
	template <typename T = void> T set_core_user_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139E6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_king_session_id() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E74))(this);
	}
	template <typename T = void> T set_king_session_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139E7C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_king_install_id() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E84))(this);
	}
	template <typename T = void> T set_king_install_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139E8C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_king_delt_time() {
		return ((T (*)(CSLobbyTlogNewGuideNtf*))(Il2CppBase() + 0x5139E94))(this);
	}
	template <typename T = void> T set_king_delt_time(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139E9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyTlogNewGuideNtf*, bool))(Il2CppBase() + 0x5139EA4))(this, createIfMissing);
	}

};

}
