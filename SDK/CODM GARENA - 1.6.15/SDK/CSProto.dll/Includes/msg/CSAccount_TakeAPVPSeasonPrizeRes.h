#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountTakeAPVPSeasonPrizeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_TakeAPVPSeasonPrizeRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _prize_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*))(Il2CppBase() + 0x516F804))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*, uint32_t))(Il2CppBase() + 0x516F80C))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*))(Il2CppBase() + 0x516F814))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*, uint64_t))(Il2CppBase() + 0x516F81C))(this, value);
	}
	template <typename T = uintptr_t> T get_prize_info() {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*))(Il2CppBase() + 0x516F82C))(this);
	}
	template <typename T = void> T set_prize_info(uintptr_t value) {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*, uintptr_t))(Il2CppBase() + 0x516F834))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountTakeAPVPSeasonPrizeRes*, bool))(Il2CppBase() + 0x516F83C))(this, createIfMissing);
	}

};

}
