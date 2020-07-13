#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildTaskGuildDailyActivePrizeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_TaskGuildDailyActivePrizeRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prize_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _member_daily_active_prize_bit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _daily_active_prize_bit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*))(Il2CppBase() + 0x51DC09C))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*, uint32_t))(Il2CppBase() + 0x51DC0A4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prize_info() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*))(Il2CppBase() + 0x51DC0AC))(this);
	}
	template <typename T = uint32_t> T get_member_daily_active_prize_bit() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*))(Il2CppBase() + 0x51DC0B4))(this);
	}
	template <typename T = void> T set_member_daily_active_prize_bit(uint32_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*, uint32_t))(Il2CppBase() + 0x51DC0BC))(this, value);
	}
	template <typename T = uint32_t> T get_daily_active_prize_bit() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*))(Il2CppBase() + 0x51DC0C4))(this);
	}
	template <typename T = void> T set_daily_active_prize_bit(uint32_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*, uint32_t))(Il2CppBase() + 0x51DC0CC))(this, value);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*))(Il2CppBase() + 0x51DC0D4))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*, bool))(Il2CppBase() + 0x51DC0DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeRes*, bool))(Il2CppBase() + 0x51DC0E4))(this, createIfMissing);
	}

};

}
