#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildDeposeViceCaptionRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_DeposeViceCaptionRes"));
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
		return ((T (*)(CSGuildDeposeViceCaptionRes*))(Il2CppBase() + 0x51DA77C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildDeposeViceCaptionRes*, int32_t))(Il2CppBase() + 0x51DA784))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildDeposeViceCaptionRes*))(Il2CppBase() + 0x51DA78C))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildDeposeViceCaptionRes*, uint64_t))(Il2CppBase() + 0x51DA794))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildDeposeViceCaptionRes*))(Il2CppBase() + 0x51DA7A4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildDeposeViceCaptionRes*, uint64_t))(Il2CppBase() + 0x51DA7AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildDeposeViceCaptionRes*, bool))(Il2CppBase() + 0x51DA7BC))(this, createIfMissing);
	}

};

}
