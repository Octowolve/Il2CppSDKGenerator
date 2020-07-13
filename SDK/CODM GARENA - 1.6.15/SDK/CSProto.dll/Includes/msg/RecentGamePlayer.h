#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RecentGamePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RecentGamePlayer"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(RecentGamePlayer*))(Il2CppBase() + 0x50705E8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(RecentGamePlayer*, uint64_t))(Il2CppBase() + 0x50705F0))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(RecentGamePlayer*))(Il2CppBase() + 0x5070600))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(RecentGamePlayer*, uint32_t))(Il2CppBase() + 0x5070608))(this, value);
	}
	template <typename T = uint32_t> T get_game_time() {
		return ((T (*)(RecentGamePlayer*))(Il2CppBase() + 0x5070610))(this);
	}
	template <typename T = void> T set_game_time(uint32_t value) {
		return ((T (*)(RecentGamePlayer*, uint32_t))(Il2CppBase() + 0x5070618))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RecentGamePlayer*, bool))(Il2CppBase() + 0x5070620))(this, createIfMissing);
	}

};

}
