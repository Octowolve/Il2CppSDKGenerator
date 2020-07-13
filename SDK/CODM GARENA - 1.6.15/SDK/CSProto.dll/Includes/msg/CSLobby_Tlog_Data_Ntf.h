#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyTlogDataNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_Tlog_Data_Ntf"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(CSLobbyTlogDataNtf*))(Il2CppBase() + 0x5139D10))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogDataNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139D18))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_data() {
		return ((T (*)(CSLobbyTlogDataNtf*))(Il2CppBase() + 0x5139D20))(this);
	}
	template <typename T = void> T set_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyTlogDataNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139D28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyTlogDataNtf*, bool))(Il2CppBase() + 0x5139D30))(this, createIfMissing);
	}

};

}
