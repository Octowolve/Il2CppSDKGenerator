#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyDelPlayerInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyDelPlayerInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _table_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyDelPlayerInfoRes*))(Il2CppBase() + 0x513A0E8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyDelPlayerInfoRes*, int32_t))(Il2CppBase() + 0x513A0F0))(this, value);
	}
	template <typename T = int32_t> T get_table_id() {
		return ((T (*)(CSLobbyDelPlayerInfoRes*))(Il2CppBase() + 0x513A0F8))(this);
	}
	template <typename T = void> T set_table_id(int32_t value) {
		return ((T (*)(CSLobbyDelPlayerInfoRes*, int32_t))(Il2CppBase() + 0x513A100))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyDelPlayerInfoRes*, bool))(Il2CppBase() + 0x513A108))(this, createIfMissing);
	}

};

}
