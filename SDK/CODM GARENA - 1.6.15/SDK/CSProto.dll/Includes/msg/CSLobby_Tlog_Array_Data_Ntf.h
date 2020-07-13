#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyTlogArrayDataNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_Tlog_Array_Data_Ntf"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _data_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _string_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(CSLobbyTlogArrayDataNtf*))(Il2CppBase() + 0x5139CD4))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogArrayDataNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139CDC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_data_list() {
		return ((T (*)(CSLobbyTlogArrayDataNtf*))(Il2CppBase() + 0x5139CE4))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_string_list() {
		return ((T (*)(CSLobbyTlogArrayDataNtf*))(Il2CppBase() + 0x5139CEC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyTlogArrayDataNtf*, bool))(Il2CppBase() + 0x5139CF4))(this, createIfMissing);
	}

};

}
