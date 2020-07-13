#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchVoiceSendNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchVoiceSendNtf"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _dst_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSMatchVoiceSendNtf*))(Il2CppBase() + 0x51F0B70))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSMatchVoiceSendNtf*, uintptr_t))(Il2CppBase() + 0x51F0B78))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(CSMatchVoiceSendNtf*))(Il2CppBase() + 0x51F0B80))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(CSMatchVoiceSendNtf*, uint64_t))(Il2CppBase() + 0x51F0B88))(this, value);
	}
	template <typename T = int32_t> T get_dst_type() {
		return ((T (*)(CSMatchVoiceSendNtf*))(Il2CppBase() + 0x51F0B98))(this);
	}
	template <typename T = void> T set_dst_type(int32_t value) {
		return ((T (*)(CSMatchVoiceSendNtf*, int32_t))(Il2CppBase() + 0x51F0BA0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchVoiceSendNtf*, bool))(Il2CppBase() + 0x51F0BA8))(this, createIfMissing);
	}

};

}
