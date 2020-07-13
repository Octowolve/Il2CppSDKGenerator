#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomWillStartNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomWillStartNtf"));
	}

	template <typename T = uint64_t> T& _room_owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_room_owner() {
		return ((T (*)(GspRoomWillStartNtf*))(Il2CppBase() + 0x50CF684))(this);
	}
	template <typename T = void> T set_room_owner(uint64_t value) {
		return ((T (*)(GspRoomWillStartNtf*, uint64_t))(Il2CppBase() + 0x50CF68C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomWillStartNtf*, bool))(Il2CppBase() + 0x50CF69C))(this, createIfMissing);
	}

};

}
