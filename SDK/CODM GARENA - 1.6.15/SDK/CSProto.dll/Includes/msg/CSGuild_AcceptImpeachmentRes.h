#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildAcceptImpeachmentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_AcceptImpeachmentRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildAcceptImpeachmentRes*))(Il2CppBase() + 0x51DA120))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildAcceptImpeachmentRes*, int32_t))(Il2CppBase() + 0x51DA128))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildAcceptImpeachmentRes*))(Il2CppBase() + 0x51DA130))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildAcceptImpeachmentRes*, uint64_t))(Il2CppBase() + 0x51DA138))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildAcceptImpeachmentRes*, bool))(Il2CppBase() + 0x51DA148))(this, createIfMissing);
	}

};

}
