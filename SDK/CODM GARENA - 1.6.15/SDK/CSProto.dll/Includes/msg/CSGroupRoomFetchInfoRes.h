#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomFetchInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomFetchInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomFetchInfoRes*))(Il2CppBase() + 0x51DE5D8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomFetchInfoRes*, int32_t))(Il2CppBase() + 0x51DE5E0))(this, value);
	}
	template <typename T = uintptr_t> T get_room_info() {
		return ((T (*)(CSGroupRoomFetchInfoRes*))(Il2CppBase() + 0x51DE5E8))(this);
	}
	template <typename T = void> T set_room_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomFetchInfoRes*, uintptr_t))(Il2CppBase() + 0x51DE5F0))(this, value);
	}
	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSGroupRoomFetchInfoRes*))(Il2CppBase() + 0x51DE5F8))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSGroupRoomFetchInfoRes*, int32_t))(Il2CppBase() + 0x51DE600))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomFetchInfoRes*, bool))(Il2CppBase() + 0x51DE608))(this, createIfMissing);
	}

};

}
