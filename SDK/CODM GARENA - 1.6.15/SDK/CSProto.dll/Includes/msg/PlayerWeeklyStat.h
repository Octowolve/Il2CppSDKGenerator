#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerWeeklyStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerWeeklyStat"));
	}

	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _alive_day() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _online_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _game_stat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _times_buy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _use_diamond() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_use_stat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _last_alive_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _times_recharge() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _amount_recharge() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _shop_stat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCB0))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DCB8))(this, value);
	}
	template <typename T = uint32_t> T get_alive_day() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCC0))(this);
	}
	template <typename T = void> T set_alive_day(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DCC8))(this, value);
	}
	template <typename T = uint32_t> T get_online_time() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCD0))(this);
	}
	template <typename T = void> T set_online_time(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DCD8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_stat() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCE0))(this);
	}
	template <typename T = uint32_t> T get_times_buy() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCE8))(this);
	}
	template <typename T = void> T set_times_buy(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DCF0))(this, value);
	}
	template <typename T = uint32_t> T get_use_diamond() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DCF8))(this);
	}
	template <typename T = void> T set_use_diamond(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DD00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_use_stat() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DD08))(this);
	}
	template <typename T = uint32_t> T get_last_alive_time() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DD10))(this);
	}
	template <typename T = void> T set_last_alive_time(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DD18))(this, value);
	}
	template <typename T = uint32_t> T get_times_recharge() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DD20))(this);
	}
	template <typename T = void> T set_times_recharge(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DD28))(this, value);
	}
	template <typename T = uint32_t> T get_amount_recharge() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DD30))(this);
	}
	template <typename T = void> T set_amount_recharge(uint32_t value) {
		return ((T (*)(PlayerWeeklyStat*, uint32_t))(Il2CppBase() + 0x506DD38))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_shop_stat() {
		return ((T (*)(PlayerWeeklyStat*))(Il2CppBase() + 0x506DD40))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerWeeklyStat*, bool))(Il2CppBase() + 0x506DD48))(this, createIfMissing);
	}

};

}
