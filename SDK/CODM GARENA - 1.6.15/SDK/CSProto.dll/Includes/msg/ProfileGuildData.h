#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ProfileGuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ProfileGuildData"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _apply_join_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(ProfileGuildData*))(Il2CppBase() + 0x506E260))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(ProfileGuildData*, uint64_t))(Il2CppBase() + 0x506E268))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_apply_join_list() {
		return ((T (*)(ProfileGuildData*))(Il2CppBase() + 0x506E278))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ProfileGuildData*, bool))(Il2CppBase() + 0x506E280))(this, createIfMissing);
	}

};

}
