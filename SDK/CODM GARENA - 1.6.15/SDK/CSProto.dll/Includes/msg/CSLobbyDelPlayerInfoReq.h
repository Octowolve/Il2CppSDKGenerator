#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyDelPlayerInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyDelPlayerInfoReq"));
	}

	template <typename T = int32_t> T& _table_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_table_id() {
		return ((T (*)(CSLobbyDelPlayerInfoReq*))(Il2CppBase() + 0x513A0A4))(this);
	}
	template <typename T = void> T set_table_id(int32_t value) {
		return ((T (*)(CSLobbyDelPlayerInfoReq*, int32_t))(Il2CppBase() + 0x513A0AC))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSLobbyDelPlayerInfoReq*))(Il2CppBase() + 0x513A0B4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSLobbyDelPlayerInfoReq*, uint64_t))(Il2CppBase() + 0x513A0BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyDelPlayerInfoReq*, bool))(Il2CppBase() + 0x513A0CC))(this, createIfMissing);
	}

};

}
