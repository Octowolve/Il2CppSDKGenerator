#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyTlogMultiArrayDataNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_Tlog_Multi_Array_Data_Ntf"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tlog_data_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(CSLobbyTlogMultiArrayDataNtf*))(Il2CppBase() + 0x5139DF0))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogMultiArrayDataNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139DF8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_tlog_data_list() {
		return ((T (*)(CSLobbyTlogMultiArrayDataNtf*))(Il2CppBase() + 0x5139E00))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyTlogMultiArrayDataNtf*, bool))(Il2CppBase() + 0x5139E08))(this, createIfMissing);
	}

};

}
