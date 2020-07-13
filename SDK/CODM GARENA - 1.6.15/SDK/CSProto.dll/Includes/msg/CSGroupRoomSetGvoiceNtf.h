#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSetGvoiceNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSetGvoiceNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _gvoice_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomSetGvoiceNtf*))(Il2CppBase() + 0x51DF438))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomSetGvoiceNtf*, uint64_t))(Il2CppBase() + 0x51DF440))(this, value);
	}
	template <typename T = int32_t> T get_gvoice_id() {
		return ((T (*)(CSGroupRoomSetGvoiceNtf*))(Il2CppBase() + 0x51DF450))(this);
	}
	template <typename T = void> T set_gvoice_id(int32_t value) {
		return ((T (*)(CSGroupRoomSetGvoiceNtf*, int32_t))(Il2CppBase() + 0x51DF458))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSetGvoiceNtf*, bool))(Il2CppBase() + 0x51DF460))(this, createIfMissing);
	}

};

}
