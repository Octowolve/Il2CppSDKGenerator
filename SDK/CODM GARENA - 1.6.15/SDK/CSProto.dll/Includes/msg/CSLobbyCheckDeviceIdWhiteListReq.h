#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyCheckDeviceIdWhiteListReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyCheckDeviceIdWhiteListReq"));
	}

	template <typename T = Il2CppString*> T& _device_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_device_id() {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListReq*))(Il2CppBase() + 0x5139F70))(this);
	}
	template <typename T = void> T set_device_id(Il2CppString* value) {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListReq*, Il2CppString*))(Il2CppBase() + 0x5139F78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListReq*, bool))(Il2CppBase() + 0x5139F80))(this, createIfMissing);
	}

};

}
