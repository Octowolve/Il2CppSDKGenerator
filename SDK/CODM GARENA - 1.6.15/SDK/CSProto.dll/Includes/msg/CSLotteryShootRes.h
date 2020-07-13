#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryShootRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryShootRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& _shoot_desc_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _lottery_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _desc_extreme_price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _announcement() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLotteryShootRes*, int32_t))(Il2CppBase() + 0x51EF2B0))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2B8))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSLotteryShootRes*, uintptr_t))(Il2CppBase() + 0x51EF2C0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_shoot_desc_index() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2C8))(this);
	}
	template <typename T = uintptr_t> T get_lottery_info() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2D0))(this);
	}
	template <typename T = void> T set_lottery_info(uintptr_t value) {
		return ((T (*)(CSLotteryShootRes*, uintptr_t))(Il2CppBase() + 0x51EF2D8))(this, value);
	}
	template <typename T = uintptr_t> T get_desc_extreme_price() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2E0))(this);
	}
	template <typename T = void> T set_desc_extreme_price(uintptr_t value) {
		return ((T (*)(CSLotteryShootRes*, uintptr_t))(Il2CppBase() + 0x51EF2E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_announcement() {
		return ((T (*)(CSLotteryShootRes*))(Il2CppBase() + 0x51EF2F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryShootRes*, bool))(Il2CppBase() + 0x51EF2F8))(this, createIfMissing);
	}

};

}
