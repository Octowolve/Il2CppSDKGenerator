#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerLotteryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerLotteryInfo"));
	}

	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _last_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _draw_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _luck_point() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _luck_idx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B14))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(PlayerLotteryInfo*, int32_t))(Il2CppBase() + 0x4EA8B1C))(this, value);
	}
	template <typename T = uint64_t> T get_last_time() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B24))(this);
	}
	template <typename T = void> T set_last_time(uint64_t value) {
		return ((T (*)(PlayerLotteryInfo*, uint64_t))(Il2CppBase() + 0x4EA8B2C))(this, value);
	}
	template <typename T = int32_t> T get_draw_times() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B3C))(this);
	}
	template <typename T = void> T set_draw_times(int32_t value) {
		return ((T (*)(PlayerLotteryInfo*, int32_t))(Il2CppBase() + 0x4EA8B44))(this, value);
	}
	template <typename T = int32_t> T get_luck_point() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B4C))(this);
	}
	template <typename T = void> T set_luck_point(int32_t value) {
		return ((T (*)(PlayerLotteryInfo*, int32_t))(Il2CppBase() + 0x4EA8B54))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_luck_idx() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B5C))(this);
	}
	template <typename T = uint64_t> T get_version() {
		return ((T (*)(PlayerLotteryInfo*))(Il2CppBase() + 0x4EA8B64))(this);
	}
	template <typename T = void> T set_version(uint64_t value) {
		return ((T (*)(PlayerLotteryInfo*, uint64_t))(Il2CppBase() + 0x4EA8B6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerLotteryInfo*, bool))(Il2CppBase() + 0x4EA8B7C))(this, createIfMissing);
	}

};

}
