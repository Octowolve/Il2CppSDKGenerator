#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildImpeachmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildImpeachmentData"));
	}

	template <typename T = uint32_t> T& _impeachment_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _impeach_member_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_impeachment_time() {
		return ((T (*)(GuildImpeachmentData*))(Il2CppBase() + 0x50CFB10))(this);
	}
	template <typename T = void> T set_impeachment_time(uint32_t value) {
		return ((T (*)(GuildImpeachmentData*, uint32_t))(Il2CppBase() + 0x50CFB18))(this, value);
	}
	template <typename T = uint64_t> T get_impeach_member_id() {
		return ((T (*)(GuildImpeachmentData*))(Il2CppBase() + 0x50CFB20))(this);
	}
	template <typename T = void> T set_impeach_member_id(uint64_t value) {
		return ((T (*)(GuildImpeachmentData*, uint64_t))(Il2CppBase() + 0x50CFB28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildImpeachmentData*, bool))(Il2CppBase() + 0x50CFB38))(this, createIfMissing);
	}

};

}
