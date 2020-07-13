#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyLogoutRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyLogoutRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyLogoutRes*))(Il2CppBase() + 0x513B644))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyLogoutRes*, int32_t))(Il2CppBase() + 0x513B64C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyLogoutRes*, bool))(Il2CppBase() + 0x513B654))(this, createIfMissing);
	}

};

}
