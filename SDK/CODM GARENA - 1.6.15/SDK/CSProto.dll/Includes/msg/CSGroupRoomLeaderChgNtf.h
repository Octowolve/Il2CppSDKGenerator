#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomLeaderChgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomLeaderChgNtf"));
	}

	template <typename T = uint64_t> T& _new_leader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _open_game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _new_game_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_new_leader() {
		return ((T (*)(CSGroupRoomLeaderChgNtf*))(Il2CppBase() + 0x51DECFC))(this);
	}
	template <typename T = void> T set_new_leader(uint64_t value) {
		return ((T (*)(CSGroupRoomLeaderChgNtf*, uint64_t))(Il2CppBase() + 0x51DED04))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_open_game_mode() {
		return ((T (*)(CSGroupRoomLeaderChgNtf*))(Il2CppBase() + 0x51DED14))(this);
	}
	template <typename T = int32_t> T get_new_game_mode() {
		return ((T (*)(CSGroupRoomLeaderChgNtf*))(Il2CppBase() + 0x51DED1C))(this);
	}
	template <typename T = void> T set_new_game_mode(int32_t value) {
		return ((T (*)(CSGroupRoomLeaderChgNtf*, int32_t))(Il2CppBase() + 0x51DED24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomLeaderChgNtf*, bool))(Il2CppBase() + 0x51DED2C))(this, createIfMissing);
	}

};

}
