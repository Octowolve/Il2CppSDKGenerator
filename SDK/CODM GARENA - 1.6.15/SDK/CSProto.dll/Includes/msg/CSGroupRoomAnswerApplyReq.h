#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerApplyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerApplyReq"));
	}

	template <typename T = uint64_t> T& _src_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _player_lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _agree() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_src_player_id() {
		return ((T (*)(CSGroupRoomAnswerApplyReq*))(Il2CppBase() + 0x51DD4F8))(this);
	}
	template <typename T = void> T set_src_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyReq*, uint64_t))(Il2CppBase() + 0x51DD500))(this, value);
	}
	template <typename T = uint32_t> T get_player_lobby_bus_id() {
		return ((T (*)(CSGroupRoomAnswerApplyReq*))(Il2CppBase() + 0x51DD510))(this);
	}
	template <typename T = void> T set_player_lobby_bus_id(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyReq*, uint32_t))(Il2CppBase() + 0x51DD518))(this, value);
	}
	template <typename T = bool> T get_agree() {
		return ((T (*)(CSGroupRoomAnswerApplyReq*))(Il2CppBase() + 0x51DD520))(this);
	}
	template <typename T = void> T set_agree(bool value) {
		return ((T (*)(CSGroupRoomAnswerApplyReq*, bool))(Il2CppBase() + 0x51DD528))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerApplyReq*, bool))(Il2CppBase() + 0x51DD530))(this, createIfMissing);
	}

};

}
