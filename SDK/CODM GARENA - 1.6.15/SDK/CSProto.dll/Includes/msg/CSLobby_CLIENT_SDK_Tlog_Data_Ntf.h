#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyCLIENTSDKTlogDataNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby_CLIENT_SDK_Tlog_Data_Ntf"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_data() {
		return ((T (*)(CSLobbyCLIENTSDKTlogDataNtf*))(Il2CppBase() + 0x5139B00))(this);
	}
	template <typename T = void> T set_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLobbyCLIENTSDKTlogDataNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5139B08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyCLIENTSDKTlogDataNtf*, bool))(Il2CppBase() + 0x5139B10))(this, createIfMissing);
	}

};

}
