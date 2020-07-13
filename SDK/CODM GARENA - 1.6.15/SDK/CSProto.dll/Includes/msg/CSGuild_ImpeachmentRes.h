#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildImpeachmentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ImpeachmentRes"));
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
		return ((T (*)(CSGuildImpeachmentRes*))(Il2CppBase() + 0x51DB944))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildImpeachmentRes*, int32_t))(Il2CppBase() + 0x51DB94C))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildImpeachmentRes*))(Il2CppBase() + 0x51DB954))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildImpeachmentRes*, uint64_t))(Il2CppBase() + 0x51DB95C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildImpeachmentRes*, bool))(Il2CppBase() + 0x51DB96C))(this, createIfMissing);
	}

};

}
