#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobby2ClientPaySvrdNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobby2Client_PaySvrd_Ntf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobby2ClientPaySvrdNtf*))(Il2CppBase() + 0x5139EC0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobby2ClientPaySvrdNtf*, int32_t))(Il2CppBase() + 0x5139EC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobby2ClientPaySvrdNtf*, bool))(Il2CppBase() + 0x5139ED0))(this, createIfMissing);
	}

};

}
