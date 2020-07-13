#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerDailyStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerDailyStat"));
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
	template <typename T = uint32_t> T& _recharge_diamond_amount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _shop_stat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6708))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6710))(this, value);
	}
	template <typename T = uint32_t> T get_alive_day() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6718))(this);
	}
	template <typename T = void> T set_alive_day(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6720))(this, value);
	}
	template <typename T = uint32_t> T get_online_time() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6728))(this);
	}
	template <typename T = void> T set_online_time(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6730))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_stat() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6738))(this);
	}
	template <typename T = uint32_t> T get_times_buy() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6740))(this);
	}
	template <typename T = void> T set_times_buy(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6748))(this, value);
	}
	template <typename T = uint32_t> T get_use_diamond() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6750))(this);
	}
	template <typename T = void> T set_use_diamond(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6758))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_use_stat() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6760))(this);
	}
	template <typename T = uint32_t> T get_last_alive_time() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6768))(this);
	}
	template <typename T = void> T set_last_alive_time(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6770))(this, value);
	}
	template <typename T = uint32_t> T get_times_recharge() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6778))(this);
	}
	template <typename T = void> T set_times_recharge(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6780))(this, value);
	}
	template <typename T = uint32_t> T get_recharge_diamond_amount() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6788))(this);
	}
	template <typename T = void> T set_recharge_diamond_amount(uint32_t value) {
		return ((T (*)(PlayerDailyStat*, uint32_t))(Il2CppBase() + 0x4EA6790))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_shop_stat() {
		return ((T (*)(PlayerDailyStat*))(Il2CppBase() + 0x4EA6798))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerDailyStat*, bool))(Il2CppBase() + 0x4EA67A0))(this, createIfMissing);
	}

};

}
