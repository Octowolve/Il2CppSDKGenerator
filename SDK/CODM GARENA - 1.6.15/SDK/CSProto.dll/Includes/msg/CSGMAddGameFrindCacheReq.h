#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGMAddGameFrindCacheReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGMAddGameFrindCacheReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _favor_gametype() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _br_rank_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _spvp_rank_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGMAddGameFrindCacheReq*))(Il2CppBase() + 0x51DD0C0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGMAddGameFrindCacheReq*, uint64_t))(Il2CppBase() + 0x51DD0C8))(this, value);
	}
	template <typename T = uint32_t> T get_favor_gametype() {
		return ((T (*)(CSGMAddGameFrindCacheReq*))(Il2CppBase() + 0x51DD0D8))(this);
	}
	template <typename T = void> T set_favor_gametype(uint32_t value) {
		return ((T (*)(CSGMAddGameFrindCacheReq*, uint32_t))(Il2CppBase() + 0x51DD0E0))(this, value);
	}
	template <typename T = uint32_t> T get_br_rank_level() {
		return ((T (*)(CSGMAddGameFrindCacheReq*))(Il2CppBase() + 0x51DD0E8))(this);
	}
	template <typename T = void> T set_br_rank_level(uint32_t value) {
		return ((T (*)(CSGMAddGameFrindCacheReq*, uint32_t))(Il2CppBase() + 0x51DD0F0))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_rank_level() {
		return ((T (*)(CSGMAddGameFrindCacheReq*))(Il2CppBase() + 0x51DD0F8))(this);
	}
	template <typename T = void> T set_spvp_rank_level(uint32_t value) {
		return ((T (*)(CSGMAddGameFrindCacheReq*, uint32_t))(Il2CppBase() + 0x51DD100))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGMAddGameFrindCacheReq*, bool))(Il2CppBase() + 0x51DD108))(this, createIfMissing);
	}

};

}
