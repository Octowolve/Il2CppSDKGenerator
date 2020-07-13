#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomRoomInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomRoomInfoNtf"));
	}

	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_room_info() {
		return ((T (*)(CSGroupRoomRoomInfoNtf*))(Il2CppBase() + 0x51DF1D0))(this);
	}
	template <typename T = void> T set_room_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomRoomInfoNtf*, uintptr_t))(Il2CppBase() + 0x51DF1D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomRoomInfoNtf*, bool))(Il2CppBase() + 0x51DF1E0))(this, createIfMissing);
	}

};

}
