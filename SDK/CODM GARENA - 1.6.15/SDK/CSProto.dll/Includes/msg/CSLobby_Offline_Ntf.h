#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyOfflineNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_Offline_Ntf"));
	}

	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _message() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_reason() {
		return ((T (*)(CSLobbyOfflineNtf*))(Il2CppBase() + 0x5139BB0))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(CSLobbyOfflineNtf*, int32_t))(Il2CppBase() + 0x5139BB8))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSLobbyOfflineNtf*))(Il2CppBase() + 0x5139BC0))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSLobbyOfflineNtf*, int32_t))(Il2CppBase() + 0x5139BC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_message() {
		return ((T (*)(CSLobbyOfflineNtf*))(Il2CppBase() + 0x5139BD0))(this);
	}
	template <typename T = void> T set_message(Il2CppString* value) {
		return ((T (*)(CSLobbyOfflineNtf*, Il2CppString*))(Il2CppBase() + 0x5139BD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyOfflineNtf*, bool))(Il2CppBase() + 0x5139BE0))(this, createIfMissing);
	}

};

}
