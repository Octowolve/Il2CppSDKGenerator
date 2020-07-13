#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildSwitchCaptionRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_SwitchCaptionRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildSwitchCaptionRes*))(Il2CppBase() + 0x51DBF48))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildSwitchCaptionRes*, int32_t))(Il2CppBase() + 0x51DBF50))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildSwitchCaptionRes*))(Il2CppBase() + 0x51DBF58))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildSwitchCaptionRes*, uint64_t))(Il2CppBase() + 0x51DBF60))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildSwitchCaptionRes*))(Il2CppBase() + 0x51DBF70))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildSwitchCaptionRes*, uint64_t))(Il2CppBase() + 0x51DBF78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildSwitchCaptionRes*, bool))(Il2CppBase() + 0x51DBF88))(this, createIfMissing);
	}

};

}
