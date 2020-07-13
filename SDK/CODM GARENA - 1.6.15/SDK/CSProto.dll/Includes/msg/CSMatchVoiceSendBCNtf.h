#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchVoiceSendBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchVoiceSendBCNtf"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _sender_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _dst_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSMatchVoiceSendBCNtf*))(Il2CppBase() + 0x51F0B04))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSMatchVoiceSendBCNtf*, uintptr_t))(Il2CppBase() + 0x51F0B0C))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(CSMatchVoiceSendBCNtf*))(Il2CppBase() + 0x51F0B14))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(CSMatchVoiceSendBCNtf*, uint64_t))(Il2CppBase() + 0x51F0B1C))(this, value);
	}
	template <typename T = uint64_t> T get_sender_id() {
		return ((T (*)(CSMatchVoiceSendBCNtf*))(Il2CppBase() + 0x51F0B2C))(this);
	}
	template <typename T = void> T set_sender_id(uint64_t value) {
		return ((T (*)(CSMatchVoiceSendBCNtf*, uint64_t))(Il2CppBase() + 0x51F0B34))(this, value);
	}
	template <typename T = int32_t> T get_dst_type() {
		return ((T (*)(CSMatchVoiceSendBCNtf*))(Il2CppBase() + 0x51F0B44))(this);
	}
	template <typename T = void> T set_dst_type(int32_t value) {
		return ((T (*)(CSMatchVoiceSendBCNtf*, int32_t))(Il2CppBase() + 0x51F0B4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchVoiceSendBCNtf*, bool))(Il2CppBase() + 0x51F0B54))(this, createIfMissing);
	}

};

}
