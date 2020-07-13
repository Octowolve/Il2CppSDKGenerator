#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerTreasureInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerTreasureInfo"));
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
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(PlayerTreasureInfo*))(Il2CppBase() + 0x506DB58))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(PlayerTreasureInfo*, int32_t))(Il2CppBase() + 0x506DB60))(this, value);
	}
	template <typename T = uint64_t> T get_last_time() {
		return ((T (*)(PlayerTreasureInfo*))(Il2CppBase() + 0x506DB68))(this);
	}
	template <typename T = void> T set_last_time(uint64_t value) {
		return ((T (*)(PlayerTreasureInfo*, uint64_t))(Il2CppBase() + 0x506DB70))(this, value);
	}
	template <typename T = int32_t> T get_draw_times() {
		return ((T (*)(PlayerTreasureInfo*))(Il2CppBase() + 0x506DB80))(this);
	}
	template <typename T = void> T set_draw_times(int32_t value) {
		return ((T (*)(PlayerTreasureInfo*, int32_t))(Il2CppBase() + 0x506DB88))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerTreasureInfo*, bool))(Il2CppBase() + 0x506DB90))(this, createIfMissing);
	}

};

}
