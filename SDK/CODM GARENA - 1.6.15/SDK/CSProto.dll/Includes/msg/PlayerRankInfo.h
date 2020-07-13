#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerRankInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerRankInfo"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _rank_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _rank_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(PlayerRankInfo*))(Il2CppBase() + 0x4EA8F28))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(PlayerRankInfo*, int32_t))(Il2CppBase() + 0x4EA8F30))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(PlayerRankInfo*))(Il2CppBase() + 0x4EA8F38))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(PlayerRankInfo*, int32_t))(Il2CppBase() + 0x4EA8F40))(this, value);
	}
	template <typename T = int32_t> T get_rank_type() {
		return ((T (*)(PlayerRankInfo*))(Il2CppBase() + 0x4EA8F48))(this);
	}
	template <typename T = void> T set_rank_type(int32_t value) {
		return ((T (*)(PlayerRankInfo*, int32_t))(Il2CppBase() + 0x4EA8F50))(this, value);
	}
	template <typename T = uintptr_t> T get_rank_info() {
		return ((T (*)(PlayerRankInfo*))(Il2CppBase() + 0x4EA8F58))(this);
	}
	template <typename T = void> T set_rank_info(uintptr_t value) {
		return ((T (*)(PlayerRankInfo*, uintptr_t))(Il2CppBase() + 0x4EA8F60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerRankInfo*, bool))(Il2CppBase() + 0x4EA8F68))(this, createIfMissing);
	}

};

}
