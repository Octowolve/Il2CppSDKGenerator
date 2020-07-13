#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChangeSettingRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChangeSettingRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _open_game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _client_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomChangeSettingRes*))(Il2CppBase() + 0x51DDEAC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingRes*, int32_t))(Il2CppBase() + 0x51DDEB4))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_open_game_mode() {
		return ((T (*)(CSGroupRoomChangeSettingRes*))(Il2CppBase() + 0x51DDEBC))(this);
	}
	template <typename T = int32_t> T get_client_flag() {
		return ((T (*)(CSGroupRoomChangeSettingRes*))(Il2CppBase() + 0x51DDEC4))(this);
	}
	template <typename T = void> T set_client_flag(int32_t value) {
		return ((T (*)(CSGroupRoomChangeSettingRes*, int32_t))(Il2CppBase() + 0x51DDECC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChangeSettingRes*, bool))(Il2CppBase() + 0x51DDED4))(this, createIfMissing);
	}

};

}
