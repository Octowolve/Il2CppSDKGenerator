#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyQuitMatchRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyQuitMatchRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyQuitMatchRes*))(Il2CppBase() + 0x513B83C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyQuitMatchRes*, int32_t))(Il2CppBase() + 0x513B844))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyQuitMatchRes*, bool))(Il2CppBase() + 0x513B84C))(this, createIfMissing);
	}

};

}
