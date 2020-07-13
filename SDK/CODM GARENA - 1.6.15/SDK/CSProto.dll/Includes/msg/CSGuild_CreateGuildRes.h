#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildCreateGuildRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_CreateGuildRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildCreateGuildRes*))(Il2CppBase() + 0x51DA64C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildCreateGuildRes*, int32_t))(Il2CppBase() + 0x51DA654))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildCreateGuildRes*))(Il2CppBase() + 0x51DA65C))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildCreateGuildRes*, uint64_t))(Il2CppBase() + 0x51DA664))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildCreateGuildRes*))(Il2CppBase() + 0x51DA674))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildCreateGuildRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA67C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildCreateGuildRes*, bool))(Il2CppBase() + 0x51DA684))(this, createIfMissing);
	}

};

}
