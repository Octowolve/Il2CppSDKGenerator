#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyCheckDeviceIdWhiteListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyCheckDeviceIdWhiteListRes"));
	}

	template <typename T = Il2CppString*> T& _device_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_device_id() {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListRes*))(Il2CppBase() + 0x513A020))(this);
	}
	template <typename T = void> T set_device_id(Il2CppString* value) {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListRes*, Il2CppString*))(Il2CppBase() + 0x513A028))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListRes*))(Il2CppBase() + 0x513A030))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListRes*, int32_t))(Il2CppBase() + 0x513A038))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyCheckDeviceIdWhiteListRes*, bool))(Il2CppBase() + 0x513A040))(this, createIfMissing);
	}

};

}
