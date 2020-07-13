#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildRefuseImpeachmentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_RefuseImpeachmentRes"));
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
		return ((T (*)(CSGuildRefuseImpeachmentRes*))(Il2CppBase() + 0x51DBCD8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildRefuseImpeachmentRes*, int32_t))(Il2CppBase() + 0x51DBCE0))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildRefuseImpeachmentRes*))(Il2CppBase() + 0x51DBCE8))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildRefuseImpeachmentRes*, uint64_t))(Il2CppBase() + 0x51DBCF0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildRefuseImpeachmentRes*, bool))(Il2CppBase() + 0x51DBD00))(this, createIfMissing);
	}

};

}
