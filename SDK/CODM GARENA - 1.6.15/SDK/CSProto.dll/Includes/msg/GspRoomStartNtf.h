#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomStartNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomStartNtf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GspRoomStartNtf*))(Il2CppBase() + 0x50CF32C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GspRoomStartNtf*, int32_t))(Il2CppBase() + 0x50CF334))(this, value);
	}
	template <typename T = uint64_t> T get_room_owner() {
		return ((T (*)(GspRoomStartNtf*))(Il2CppBase() + 0x50CF33C))(this);
	}
	template <typename T = void> T set_room_owner(uint64_t value) {
		return ((T (*)(GspRoomStartNtf*, uint64_t))(Il2CppBase() + 0x50CF344))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomStartNtf*, bool))(Il2CppBase() + 0x50CF354))(this, createIfMissing);
	}

};

}
