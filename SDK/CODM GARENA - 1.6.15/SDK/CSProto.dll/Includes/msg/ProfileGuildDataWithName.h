#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ProfileGuildDataWithName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ProfileGuildDataWithName"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _apply_join_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(ProfileGuildDataWithName*))(Il2CppBase() + 0x506E340))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(ProfileGuildDataWithName*, uint64_t))(Il2CppBase() + 0x506E348))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_apply_join_list() {
		return ((T (*)(ProfileGuildDataWithName*))(Il2CppBase() + 0x506E358))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(ProfileGuildDataWithName*))(Il2CppBase() + 0x506E360))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ProfileGuildDataWithName*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506E368))(this, value);
	}
	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(ProfileGuildDataWithName*))(Il2CppBase() + 0x506E370))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(ProfileGuildDataWithName*, uint32_t))(Il2CppBase() + 0x506E378))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ProfileGuildDataWithName*, bool))(Il2CppBase() + 0x506E380))(this, createIfMissing);
	}

};

}
